// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FInputReceiverInitializationError @ 14ad3a510

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FInputReceiverInitializationError * __thiscall
Metasound::FInputReceiverInitializationError::FInputReceiverInitializationError
          (FInputReceiverInitializationError *this,INode *param_1,FName *param_2,FName *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FInputReceiverInitializationError *pFVar9;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pFVar5 = FText::FromName(&local_58,param_3);
  pFVar6 = FText::FromName(&local_48,param_2);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"MetasoundBuildError",L"InputReceiverInitializationError",
                      L"Failed to create transmission receiever for input \'{0}\' of type \'{1}\'.")
  ;
  pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
  local_a8.Type = Text;
  FText::FText((FText *)&local_a8.TextValue,pFVar6);
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FInputReceiverInitializationError *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_88 = 4;
  FText::FText(&local_78,pFVar5);
  if (local_78.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FInputReceiverInitializationError *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_d8.ArrayNum = 2;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_d8.AllocatorInstance,2,&local_d8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_d8.AllocatorInstance.Data,&local_a8,2);
  local_b8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
  local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_c8,&local_b8,&local_d8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FFormatArgumentValue *)local_d8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar6->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (pFVar5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FBuildErrorBase_Metasound__6B_;
  uVar3 = ErrorType.Number;
  *(uint *)&this->field_0x8 = ErrorType.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar3;
  *(ITextData **)&this->field_0x10 = local_c8.TextData.Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  *(uint *)&this->field_0x18 = local_c8.Flags;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  *(undefined ***)this = &___7FInputReceiverInitializationError_Metasound__6B_;
  FBuildErrorBase::AddNode((FBuildErrorBase *)this,param_1);
  return this;
}

// ~FInputReceiverInitializationError @ 14ad3dd00

void __thiscall
Metasound::FInputReceiverInitializationError::~FInputReceiverInitializationError
          (FInputReceiverInitializationError *this)

{
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  DestructItems<Metasound::FInputDataDestination,int>
            (*(FInputDataDestination **)&this->field_0x40,*(int *)&this->field_0x48);
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  DestructItems<Metasound::FDataEdge,int>
            (*(FDataEdge **)&this->field_0x30,*(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(longlong **)&this->field_0x10 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3d87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    return;
  }
  return;
}

