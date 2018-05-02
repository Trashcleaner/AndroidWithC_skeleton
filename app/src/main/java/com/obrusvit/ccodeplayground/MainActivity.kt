package com.obrusvit.ccodeplayground

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    val TAG = "MainActivity"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Example of a call to a native method
        sample_text.text = otherStringFromJNI()

        Log.d(TAG, "Answer is ${getDoubleFromJNI()}")
        Log.d(TAG, "Multiplication ${multiplyInJNI(4.0, 3.0)}")
        callC()
        Log.d(TAG, "Integer from C: ${getIntFromCJNI()}")
        Log.d(TAG, "MATLAB multiply: ${useMatlab(4.0, 3.0)}")

        val doubleArray: DoubleArray? = useMatlabWithPointers(4.0,3.0)
        Log.d(TAG, "MATLAB returns array: ${doubleArray?.get(0)}, ${doubleArray?.get(1)}")
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String
    external fun getDoubleFromJNI(): Double
    external fun otherStringFromJNI(): String
    external fun multiplyInJNI(a: Double, b: Double): Double
    external fun callC()
    external fun getIntFromCJNI(): Int
    external fun useMatlab(a: Double, b: Double): Double
    external fun useMatlabWithPointers(a: Double, b: Double): DoubleArray?


    companion object {

        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("native-lib")
            System.loadLibrary("other-lib")
            System.loadLibrary("c-code-lib")
            System.loadLibrary("matlab-my-multiply-lib")
            System.loadLibrary("matlab-pointers-lib")
        }
    }

}
