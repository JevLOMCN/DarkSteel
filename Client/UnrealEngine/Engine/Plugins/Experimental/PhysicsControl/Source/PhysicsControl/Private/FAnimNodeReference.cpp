// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// CallAnimNodeFunction<FAnimNode_RigidBodyWithControl> @ 14d9b6290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_PhysicsControl();
      Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl,
                           (UObject *)pUVar4,L"AnimNode_RigidBodyWithControl");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14d9b6326;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton)->
         _padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_14d9b6326:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_RigidBodyWithControl>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_RigidBodyWithControl&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

