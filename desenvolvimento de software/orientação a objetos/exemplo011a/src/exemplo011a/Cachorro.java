/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exemplo011a;

/**
 *
 * @author uadson
 */
public class Cachorro extends Mamifero{
    public Cachorro(){
        familia = "Canidae";
    }
    @Override
    public void mamar(){
        System.out.println("Cachorro mamando...");
    }
}
