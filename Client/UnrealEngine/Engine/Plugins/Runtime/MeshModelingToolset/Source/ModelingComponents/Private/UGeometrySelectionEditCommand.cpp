// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14ca40a30

UClass * __cdecl UGeometrySelectionEditCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommand",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommand,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometrySelectionEditCommand>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommand>,local_res8,
               UInteractiveCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton;
}

// UGeometrySelectionEditCommand @ 14ca67940

UGeometrySelectionEditCommand * __thiscall
UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
          (UGeometrySelectionEditCommand *this,FVTableHelper *param_1)

{
  UInteractiveCommand::UInteractiveCommand((UInteractiveCommand *)this,param_1);
  *(undefined ***)this = &___7UGeometrySelectionEditCommand__6B_;
  return this;
}

// UGeometrySelectionEditCommand @ 14ca67970

UGeometrySelectionEditCommand * __thiscall
UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
          (UGeometrySelectionEditCommand *this,FObjectInitializer *param_1)

{
  UInteractiveCommand::UInteractiveCommand((UInteractiveCommand *)this,param_1);
  *(undefined ***)this = &___7UGeometrySelectionEditCommand__6B_;
  return this;
}

// ~UGeometrySelectionEditCommand @ 14ca6b5c0

void __thiscall
UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand(UGeometrySelectionEditCommand *this)

{
  *(undefined ***)this = &___7UGeometrySelectionEditCommand__6B_;
  UInteractiveCommand::~UInteractiveCommand((UInteractiveCommand *)this);
  return;
}

// AllowEmptySelection @ 14ca787d0

bool __thiscall
UGeometrySelectionEditCommand::AllowEmptySelection(UGeometrySelectionEditCommand *this)

{
  return false;
}

// CanExecuteCommand @ 14ca7daa0

bool __thiscall
UGeometrySelectionEditCommand::CanExecuteCommand
          (UGeometrySelectionEditCommand *this,UInteractiveCommandArguments *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  
  if (param_1 != (UInteractiveCommandArguments *)0x0) {
    pUVar5 = UGeometrySelectionEditCommandArguments::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      lVar2 = param_1[1]._padding_;
      if (((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c))) &&
         (cVar3 = (**(code **)(*(longlong *)this + 0x2c8))(this), cVar3 == '\0')) {
        return false;
      }
                    /* WARNING: Could not recover jumptable at 0x00014ca7db0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(longlong *)this + 0x2d8))(this,param_1);
      return (bool)uVar4;
    }
  }
  return false;
}

// CanExecuteCommandForSelection @ 14ca7db30

bool __thiscall
UGeometrySelectionEditCommand::CanExecuteCommandForSelection
          (UGeometrySelectionEditCommand *this,UGeometrySelectionEditCommandArguments *param_1)

{
  return false;
}

// ExecuteCommand @ 14ca894b0

void __thiscall
UGeometrySelectionEditCommand::ExecuteCommand
          (UGeometrySelectionEditCommand *this,UInteractiveCommandArguments *param_1,
          UInteractiveCommandResult **param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  UClass *pUVar4;
  
  if (param_1 != (UInteractiveCommandArguments *)0x0) {
    pUVar4 = UGeometrySelectionEditCommandArguments::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (((lVar2 = param_1[1]._padding_, lVar2 != 0 &&
         (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c))) ||
        (cVar3 = (**(code **)(*(longlong *)this + 0x2c8))(this), cVar3 != '\0')))) {
      (**(code **)(*(longlong *)this + 0x2e0))(this,param_1,param_2);
    }
  }
  return;
}

// ExecuteCommandForSelection @ 14ca89540

void __thiscall
UGeometrySelectionEditCommand::ExecuteCommandForSelection
          (UGeometrySelectionEditCommand *this,UGeometrySelectionEditCommandArguments *param_1,
          UInteractiveCommandResult **param_2)

{
  return;
}

// GetPrivateStaticClass @ 14ca911f0

UClass * __cdecl UGeometrySelectionEditCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommand",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommand,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometrySelectionEditCommand>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommand>,local_res8,
               UInteractiveCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommand.InnerSingleton;
}

// IsModifySelectionCommand @ 14ca977d0

bool __thiscall
UGeometrySelectionEditCommand::IsModifySelectionCommand(UGeometrySelectionEditCommand *this)

{
  return false;
}

// StaticRegisterNativesUGeometrySelectionEditCommand @ 14caa7110

void __cdecl UGeometrySelectionEditCommand::StaticRegisterNativesUGeometrySelectionEditCommand(void)

{
  return;
}

