// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FContainerInitializer @ 1425bcde0

FContainerInitializer * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::FContainerInitializer
          (FContainerInitializer *this,FSlateAttributeDescriptor *param_1,
          FSlateAttributeDescriptor *param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  FAttribute *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FContainerInitializer *pFVar8;
  FName *pFVar9;
  FAttribute *pFVar10;
  FAttribute *pFVar11;
  undefined1 local_res8 [8];
  FAttribute *local_res10;
  
  this->Descriptor = param_1;
  this->ContainerName = param_3;
  iVar2 = (param_2->Attributes).ArrayNum;
  pFVar11 = (FAttribute *)(param_2->Attributes).AllocatorInstance.Data;
  pFVar10 = pFVar11 + iVar2;
  do {
    if ((param_2->Attributes).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateAttributeDescriptor::FAttribute_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) {
      return this;
    }
    if (pFVar11->ContainerName == param_3) {
      pFVar7 = (FName *)(param_1->Attributes).AllocatorInstance.Data;
      pFVar9 = pFVar7 + (longlong)(param_1->Attributes).ArrayNum * 0xb;
      for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 0xb) {
        if (*pFVar7 == pFVar11->Name) {
          local_res10 = pFVar11;
          bVar5 = `FSlateAttributeDescriptor::FContainerInitializer::FContainerInitializer'::__l10::
                  <lambda_2>::operator()(&local_res10);
          if (!bVar5) goto LAB_1425bcf1f;
          break;
        }
      }
      pFVar3 = (FAttribute *)(param_1->Attributes).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (param_1->Attributes).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FContainerInitializer *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = (param_1->Attributes).ArrayNum;
      piVar1 = &(param_1->Attributes).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)param_1,piVar1);
        (param_1->Attributes).ArrayNum = iVar6;
      }
      (param_1->Attributes).ArrayNum = iVar6 + 1;
      FAttribute::FAttribute
                ((FAttribute *)
                 ((param_1->Attributes).AllocatorInstance.Data + (longlong)iVar6 * 0x58),pFVar11);
    }
LAB_1425bcf1f:
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// FContainerInitializer @ 1425bcf50

FContainerInitializer * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::FContainerInitializer
          (FContainerInitializer *this,FSlateAttributeDescriptor *param_1,FName param_2)

{
  this->Descriptor = param_1;
  this->ContainerName = param_2;
  return this;
}

// AddContainedAttribute @ 1425c7500

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
          (FContainerInitializer *this,FAttributeEntry *__return_storage_ptr__,FName param_1,
          uint param_2,FInvalidateWidgetReasonAttribute *param_3)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  local_28.Reason = param_3->Reason;
  local_28.Getter._0_8_ = *(undefined8 *)&param_3->Getter;
  local_28.Getter._8_4_ = *(undefined4 *)&(param_3->Getter).field_0x8;
  *(undefined8 *)&param_3->Getter = 0;
  *(undefined4 *)&(param_3->Getter).field_0x8 = 0;
  FSlateAttributeDescriptor::AddContainedAttribute
            (this_00,__return_storage_ptr__,this->ContainerName,param_1,param_2,&local_28);
  return __return_storage_ptr__;
}

// AddContainedAttribute @ 1425c7570

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
          (FContainerInitializer *this,FAttributeEntry *__return_storage_ptr__,FName param_1,
          uint param_2,FInvalidateWidgetReasonAttribute *param_3)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute *pFVar1;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  pFVar1 = FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute(&local_28,param_3);
  FSlateAttributeDescriptor::AddContainedAttribute
            (this_00,__return_storage_ptr__,this->ContainerName,param_1,param_2,pFVar1);
  return __return_storage_ptr__;
}

// OverrideInvalidationReason @ 1425f1290

void __thiscall
FSlateAttributeDescriptor::FContainerInitializer::OverrideInvalidationReason
          (FContainerInitializer *this,FName param_1,FInvalidateWidgetReasonAttribute *param_2)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute local_28;
  
  local_28.Reason = param_2->Reason;
  this_00 = this->Descriptor;
  local_28.Getter._0_8_ = *(undefined8 *)&param_2->Getter;
  *(undefined8 *)&param_2->Getter = 0;
  local_28.Getter._8_4_ = *(undefined4 *)&(param_2->Getter).field_0x8;
  *(undefined4 *)&(param_2->Getter).field_0x8 = 0;
  FSlateAttributeDescriptor::OverrideInvalidationReason
            (this_00,this->ContainerName,param_1,&local_28);
  return;
}

// OverrideInvalidationReason @ 1425f12e0

void __thiscall
FSlateAttributeDescriptor::FContainerInitializer::OverrideInvalidationReason
          (FContainerInitializer *this,FName param_1,FInvalidateWidgetReasonAttribute *param_2)

{
  FSlateAttributeDescriptor *this_00;
  FInvalidateWidgetReasonAttribute *pFVar1;
  FInvalidateWidgetReasonAttribute local_28;
  
  this_00 = this->Descriptor;
  pFVar1 = FInvalidateWidgetReasonAttribute::FInvalidateWidgetReasonAttribute(&local_28,param_2);
  FSlateAttributeDescriptor::OverrideInvalidationReason(this_00,this->ContainerName,param_1,pFVar1);
  return;
}

// OverrideOnValueChanged @ 1425f14d0

void __thiscall
FSlateAttributeDescriptor::FContainerInitializer::OverrideOnValueChanged
          (FContainerInitializer *this,FName param_1,ECallbackOverrideType param_2,
          TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_3)

{
  FSlateAttributeDescriptor *this_00;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_3;
  this_00 = this->Descriptor;
  local_18._8_4_ = *(undefined4 *)&param_3->field_0x8;
  *(undefined4 *)&param_3->field_0x8 = 0;
  *(undefined8 *)param_3 = 0;
  FSlateAttributeDescriptor::OverrideOnValueChanged
            (this_00,this->ContainerName,param_1,param_2,&local_18);
  if ((*(int *)&param_3->field_0x8 != 0) && (*(undefined8 **)param_3 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_3)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_3,0,0,0x10);
    *(undefined4 *)&param_3->field_0x8 = 0;
  }
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
    return;
  }
  return;
}

// operator() @ 150491500

bool __thiscall
`FSlateAttributeDescriptor::FContainerInitializer::FContainerInitializer'::__l10::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4986616305223204742>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204742>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150491574;
    }
  }
  bVar2 = false;
LAB_150491574:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

