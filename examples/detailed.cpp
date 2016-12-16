#include <iostream>
#include <string>

/**
 * \brief A testing namespace.
 *
 * A more detailed description about this namespace. Magic stuff happens here.
 */
namespace T
{

/**
 * \brief A test class.
 *
 * A more detailed description of the test class.
 *
 * \todo Reminding you to do something!
 */
class Test
{
    public:
        /**
         * \brief A constructor.
         *
         * A more detailed description of the constructor.
         */
        Test();

        /**
         * \brief A deconstructor.
         *
         * A more detailed description of the deconstructor.
         *
         * \warning Beware the destruction!
         */
        virtual ~Test();

        /**
         * \brief Public test function.
         *
         * \param number  a float number used to do something.
         *
         * \return the answer to all questions and the universe.
         *
         * \see something_static()
         */
        float do_public(float number);

        /**
         * \brief Static test function.
         *
         * \return a test string.
         */
        static std::string something_static();
    private:
        /**
         * \brief Private test function.
         *
         * \param index  an integer index.
         * \param string  a C-style string.
         *
         * \return the answer to all questions and the universe.
         */
        float do_private(int index, const char *string);

        /**
         * \brief Private variable.
         *
         * This is a detailed description about the magic number.
         *
         * \note The answer is 42.
         */
        float magic_number;
};

} // namespace T
