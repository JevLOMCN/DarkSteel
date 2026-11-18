// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147516060

UScriptStruct * __cdecl FAnimNodeExposedValueHandler_PropertyAccess::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess,
                         (UObject *)pUVar1,L"AnimNodeExposedValueHandler_PropertyAccess");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeExposedValueHandler_PropertyAccess.
         OuterSingleton;
}

// Initialize @ 1475160a0

void __thiscall
FAnimNodeExposedValueHandler_PropertyAccess::Initialize
          (FAnimNodeExposedValueHandler_PropertyAccess *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  IAnimClassInterface *pIVar4;
  UPackage *pUVar5;
  longlong lVar6;
  
  if (this->_padding_ == 0) {
    this->_padding_ = 0;
  }
  else if (this->_padding_ == 0) {
    pUVar3 = UClass::FindFunctionByName(param_1,(FName)this->_padding_,IncludeSuper);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UFunction *)0x0)) {
      this->_padding_ = (longlong)pUVar3;
      if (pUVar3 == (UFunction *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\ExposedValueHandler.cpp"
                           ,0x3e,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      this->_padding_ = (longlong)pUVar3;
    }
  }
  pIVar4 = IAnimClassInterface::GetFromClass(param_1);
  pcVar1 = *(code **)((longlong)*pIVar4 + 0xc0);
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess,(UObject *)pUVar5,
                         L"AnimSubsystem_PropertyAccess");
  }
  lVar6 = (*pcVar1)(pIVar4,Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.
                           OuterSingleton);
  if (lVar6 != 0) {
    this->PropertyAccessLibrary = (FPropertyAccessLibrary *)(lVar6 + 8);
  }
  return;
}

// Execute @ 1475161a0

void __thiscall
FAnimNodeExposedValueHandler_PropertyAccess::Execute
          (FAnimNodeExposedValueHandler_PropertyAccess *this,FAnimationBaseContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *local_res8;
  FCopyBatchId local_res18 [2];
  code *local_38;
  FScriptContainerElement **local_30;
  
  if (this->_padding_ != 0) {
    pUVar3 = param_1->AnimInstanceProxy->AnimInstanceObject;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->_padding_,0);
  }
  iVar2 = (this->CopyRecords).ArrayNum;
  if ((0 < iVar2) && (this->PropertyAccessLibrary != (FPropertyAccessLibrary *)0x0)) {
    pFVar4 = (this->CopyRecords).AllocatorInstance.Data;
    pUVar3 = param_1->AnimInstanceProxy->AnimInstanceObject;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    local_res18[0].Id = 0;
    while( true ) {
      if ((this->CopyRecords).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FExposedValueCopyRecord_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if ((pFVar4[5] == (FScriptContainerElement)0x0) || (param_1->bIsActive != false)) {
        local_30 = &local_res8;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAnimNodeExposedValueHandler_PropertyAccess::Execute'::__l15::<lambda_1>,void,FProperty_const_*,void_*>
                   ::Call;
        local_res8 = pFVar4;
        PropertyAccess::ProcessCopy
                  (pUVar3,this->PropertyAccessLibrary,local_res18,*(int *)pFVar4,
                   (TFunctionRef<void___cdecl(FProperty_const_*,void_*)> *)&local_38);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// operator() @ 14753d4c0

void __thiscall
`FAnimNodeExposedValueHandler_PropertyAccess::Execute'::__l15::<lambda_1>::operator()
          (void *this,FProperty *param_1,void *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if (*(char *)(*(longlong *)this + 4) == '\x01') {
    if ((char)param_1[1]._padding_ == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa4b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar4 = *(byte *)((ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1) + (longlong)param_2)
    ;
    bVar1 = *(byte *)((longlong)&param_1[1]._padding_ + 3);
    if ((char)param_1[1]._padding_ == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = (ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1);
    if ((bVar4 & bVar1) == 0) {
      bVar4 = *(byte *)((longlong)&param_1[1]._padding_ + 2);
    }
    else {
      bVar4 = 0;
    }
    *(byte *)(uVar5 + (longlong)param_2) =
         ~*(byte *)((longlong)&param_1[1]._padding_ + 3) & *(byte *)(uVar5 + (longlong)param_2) |
         bVar4;
  }
  return;
}

