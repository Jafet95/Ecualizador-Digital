/*
 * \author Jafet Chaves
 * \date   2017.06.06
 */

#ifndef FILTRO1K_H
#define FILTRO1K_H

/*
 * 1 kHz filter class
 *
 * This filter has control over the 1 kHz band of the signal.
 *
 * The filter follows a fourth order difference equation
 */

class filtro1k
{
public:
    /**
     * Constructor
     */
    filtro1k();

    /**
     * Destructor
     */
    ~filtro1k();

    /**
     * Filter the in buffer and leave the result in out
     */
    void filter1k(int blockSize,
                int volumeGain,
                float* in,
                float* out);

};

#endif // FILTRO1K_H

