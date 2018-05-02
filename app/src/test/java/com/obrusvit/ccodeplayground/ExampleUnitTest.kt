package com.obrusvit.ccodeplayground

import org.junit.Test

import org.junit.Assert.*

/**
 * Example local unit test, which will execute on the development machine (host).
 *
 * See [testing documentation](http://d.android.com/tools/testing).
 */
class ExampleUnitTest {
    @Test
    fun addition_isCorrect() {
        assertEquals(4, 2 + 2)
    }

    external fun multiplyInJNI(a: Double, b: Double): Double

    @Test
    fun multiplyJNI(){
        val a = 3.0
        val b = 4.0
        val res = multiplyInJNI(a,b)
        assertEquals(12.0, res)
    }
}
