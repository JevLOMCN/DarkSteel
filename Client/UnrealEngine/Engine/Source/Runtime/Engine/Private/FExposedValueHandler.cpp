// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147515c30

UScriptStruct * __cdecl FExposedValueHandler::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExposedValueHandler.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FExposedValueHandler.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueHandler,(UObject *)pUVar1,
                         L"ExposedValueHandler");
  }
  return Z_Registration_Info_UScriptStruct_FExposedValueHandler.OuterSingleton;
}

// ClassInitialization @ 14754d280

void __cdecl
FExposedValueHandler::ClassInitialization
          (TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *param_1,UClass *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  IAnimClassInterface *pIVar4;
  UPackage *pUVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [16];
  
  pIVar4 = IAnimClassInterface::GetFromClass(param_2);
  pcVar2 = *(code **)((longlong)*pIVar4 + 0xc0);
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess,(UObject *)pUVar5,
                         L"AnimSubsystem_PropertyAccess");
  }
  lVar6 = (*pcVar2)(pIVar4,Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.
                           OuterSingleton);
  if (lVar6 != 0) {
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FExposedValueHandler,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar7 == pFVar8) break;
      plVar3 = *(longlong **)(pFVar7 + 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3,param_2);
      }
      pFVar7 = pFVar7 + 0x10;
    }
  }
  return;
}

// Execute @ 147551900

void __thiscall
FExposedValueHandler::Execute(FExposedValueHandler *this,FAnimationBaseContext *param_1)

{
  if (this->Handler != (FAnimNodeExposedValueHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014755190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Handler + 0x10))();
    return;
  }
  return;
}

// Initialize @ 147565a50

void __thiscall
FExposedValueHandler::Initialize
          (FExposedValueHandler *this,UClass *param_1,FPropertyAccessLibrary *param_2)

{
  if (this->Handler != (FAnimNodeExposedValueHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147565a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Handler + 8))();
    return;
  }
  return;
}

