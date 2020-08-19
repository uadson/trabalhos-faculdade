/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exemplo011;

/**
 *
 * @author uadson
 */
public class Exemplo011 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    public class ErroCalc extends Exception{
        public ErroCalc(int a, int b){
            super("Erro com os numeros"+a+" e "+b);
        }
    }
    public int dividir(int a, int b)throws ErroCalc{
        if (b==0)
            throw new ErroCalc(a, b);
        return a/b;
    }
}
