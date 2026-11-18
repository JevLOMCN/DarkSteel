// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 29

// ~<lambda_3> @ 1425bff10

void __thiscall
`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>::~<lambda_3>(void *this)

{
  if ((*(int *)((longlong)this + 0x18) != 0) &&
     (*(undefined8 **)((longlong)this + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)((longlong)this + 0x10))();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x10),0,0,0x10);
    *(undefined4 *)((longlong)this + 0x18) = 0;
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((*(int *)((longlong)this + 8) != 0) && (*(undefined8 **)this != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)this)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this,0,0,0x10);
    *(undefined4 *)((longlong)this + 8) = 0;
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// AddContainedAttribute @ 1425c75f0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::AddContainedAttribute
          (FSlateAttributeDescriptor *this,FAttributeEntry *__return_storage_ptr__,FName param_1,
          FName param_2,uint param_3,FInvalidateWidgetReasonAttribute *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FInvalidateWidgetReasonAttribute *pFVar6;
  bool bVar7;
  int iVar8;
  FAttributeEntry *pFVar9;
  FName *pFVar10;
  FName *pFVar11;
  TDelegate<EInvalidateWidgetReason___cdecl(SWidget_const_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this_00;
  FName local_res20;
  FInvalidateWidgetReasonAttribute local_48;
  
  pFVar6 = param_4;
  local_res20 = param_2;
  if ((param_2 == (FName)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttributeName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x20d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FAttributeEntry *)(*pcVar5)();
    return pFVar9;
  }
  if ((param_1 == (FName)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ContainerName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x20e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FAttributeEntry *)(*pcVar5)();
    return pFVar9;
  }
  pFVar10 = (FName *)(this->Attributes).AllocatorInstance.Data;
  iVar8 = -1;
  pFVar11 = pFVar10 + (longlong)(this->Attributes).ArrayNum * 0xb;
  do {
    if (pFVar10 == pFVar11) {
LAB_1425c76ae:
      piVar1 = &(this->Attributes).ArrayNum;
      iVar8 = *piVar1;
      piVar2 = &(this->Attributes).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)this,piVar2);
        *piVar1 = iVar8;
      }
      *piVar1 = iVar8 + 1;
      local_48.Getter._0_8_ = *(undefined8 *)&pFVar6->Getter;
      local_48.Getter._8_4_ = *(undefined4 *)&(pFVar6->Getter).field_0x8;
      pFVar4 = (this->Attributes).AllocatorInstance.Data;
      local_48.Reason = pFVar6->Reason;
      *(undefined8 *)&pFVar6->Getter = 0;
      *(undefined4 *)&(pFVar6->Getter).field_0x8 = 0;
      FAttribute::FAttribute
                ((FAttribute *)(pFVar4 + (longlong)iVar8 * 0x58),param_1,local_res20,param_3,
                 &local_48);
LAB_1425c772a:
      this_00 = &pFVar6->Getter;
      iVar3 = *(int *)&(pFVar6->Getter).field_0x8;
      __return_storage_ptr__->Descriptor = this;
      __return_storage_ptr__->ContainerName = param_1;
      __return_storage_ptr__->AttributeIndex = iVar8;
      if ((iVar3 != 0) && (*(undefined8 **)this_00 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)this_00)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this_00,0,0,0x10);
        *(undefined4 *)&(pFVar6->Getter).field_0x8 = 0;
      }
      if (*(void **)this_00 != (void *)0x0) {
        FMemory::Free(*(void **)this_00);
      }
      return __return_storage_ptr__;
    }
    if (*pFVar10 == local_res20) {
      param_4 = (FInvalidateWidgetReasonAttribute *)&local_res20;
      bVar7 = `FSlateAttributeDescriptor::AddContainedAttribute'::__l17::<lambda_1>::operator()
                        (&param_4);
      if (!bVar7) goto LAB_1425c772a;
      goto LAB_1425c76ae;
    }
    pFVar10 = pFVar10 + 0xb;
  } while( true );
}

// AddContainer @ 1425c78d0

FContainerInitializer * __thiscall
FSlateAttributeDescriptor::AddContainer
          (FSlateAttributeDescriptor *this,FContainerInitializer *__return_storage_ptr__,
          FName param_1,uint param_2)

{
  TArray<FSlateAttributeDescriptor::FContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FContainerInitializer *pFVar6;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar7;
  longlong lVar8;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar9;
  FName *local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_1;
  if ((param_1 == (FName)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ContainerName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x1f2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FContainerInitializer *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Containers).AllocatorInstance.SecondaryData;
  pTVar1 = &this->Containers;
  if (FVar7 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FVar7 = (ForElementType<FSlateAttributeDescriptor::FContainer>)pTVar1;
  }
  FVar9 = (ForElementType<FSlateAttributeDescriptor::FContainer>)
          ((longlong)(this->Containers).ArrayNum * 0x10 + (longlong)FVar7);
  do {
    if (FVar7 == FVar9) {
LAB_1425c796d:
      iVar5 = (this->Containers).ArrayNum;
      if (iVar5 == (this->Containers).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeDescriptor::FContainer>_>
                          (0x410,&pTVar1->AllocatorInstance,&(this->Containers).ArrayMax);
      }
      lVar8 = (longlong)iVar5;
      (this->Containers).ArrayNum = iVar5 + 1;
      FVar7 = (this->Containers).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
        FVar7 = (ForElementType<FSlateAttributeDescriptor::FContainer>)pTVar1;
      }
      *(FName *)((longlong)FVar7 + lVar8 * 0x10) = local_res18[0];
      *(uint *)((uchar *)((longlong)FVar7 + 8) + lVar8 * 0x10) = param_2;
      puVar2 = (uchar *)((longlong)FVar7 + 0xc) + lVar8 * 0x10;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
LAB_1425c79b1:
      __return_storage_ptr__->ContainerName = local_res18[0];
      __return_storage_ptr__->Descriptor = this;
      return __return_storage_ptr__;
    }
    if (*(FName *)FVar7 == local_res18[0]) {
      local_res8 = local_res18;
      bVar4 = `FSlateAttributeDescriptor::AddContainer'::__l10::<lambda_1>::operator()(&local_res8);
      if (!bVar4) goto LAB_1425c79b1;
      goto LAB_1425c796d;
    }
    FVar7 = (ForElementType<FSlateAttributeDescriptor::FContainer>)((longlong)FVar7 + 0x10);
  } while( true );
}

// AddMemberAttribute @ 1425c8a60

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::AddMemberAttribute
          (FSlateAttributeDescriptor *this,FAttributeEntry *__return_storage_ptr__,FName param_1,
          uint param_2,FInvalidateWidgetReasonAttribute *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FInvalidateWidgetReasonAttribute *pFVar6;
  bool bVar7;
  int iVar8;
  FAttributeEntry *pFVar9;
  FName *pFVar10;
  TDelegate<EInvalidateWidgetReason___cdecl(SWidget_const_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *this_00;
  FName *pFVar11;
  FName local_res18;
  FInvalidateWidgetReasonAttribute local_48;
  
  pFVar6 = param_3;
  local_res18 = param_1;
  if ((param_1 == (FName)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttributeName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x1ff,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FAttributeEntry *)(*pcVar5)();
    return pFVar9;
  }
  pFVar10 = (FName *)(this->Attributes).AllocatorInstance.Data;
  iVar8 = -1;
  pFVar11 = pFVar10 + (longlong)(this->Attributes).ArrayNum * 0xb;
  do {
    if (pFVar10 == pFVar11) {
LAB_1425c8af6:
      piVar1 = &(this->Attributes).ArrayNum;
      iVar8 = *piVar1;
      piVar2 = &(this->Attributes).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)this,piVar2);
        *piVar1 = iVar8;
      }
      *piVar1 = iVar8 + 1;
      pFVar4 = (this->Attributes).AllocatorInstance.Data;
      local_48.Reason = pFVar6->Reason;
      local_48.Getter._0_8_ = *(undefined8 *)&pFVar6->Getter;
      local_48.Getter._8_4_ = *(undefined4 *)&(pFVar6->Getter).field_0x8;
      *(undefined8 *)&pFVar6->Getter = 0;
      *(undefined4 *)&(pFVar6->Getter).field_0x8 = 0;
      FAttribute::FAttribute
                ((FAttribute *)(pFVar4 + (longlong)iVar8 * 0x58),local_res18,param_2,&local_48);
LAB_1425c8b66:
      this_00 = &pFVar6->Getter;
      iVar3 = *(int *)&(pFVar6->Getter).field_0x8;
      __return_storage_ptr__->Descriptor = this;
      __return_storage_ptr__->AttributeIndex = iVar8;
      if ((iVar3 != 0) && (*(undefined8 **)this_00 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)this_00)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this_00,0,0,0x10);
        *(undefined4 *)&(pFVar6->Getter).field_0x8 = 0;
      }
      if (*(void **)this_00 != (void *)0x0) {
        FMemory::Free(*(void **)this_00);
      }
      return __return_storage_ptr__;
    }
    if (*pFVar10 == local_res18) {
      param_3 = (FInvalidateWidgetReasonAttribute *)&local_res18;
      bVar7 = `FSlateAttributeDescriptor::AddMemberAttribute'::__l10::<lambda_1>::operator()
                        (&param_3);
      if (!bVar7) goto LAB_1425c8b66;
      goto LAB_1425c8af6;
    }
    pFVar10 = pFVar10 + 0xb;
  } while( true );
}

// FindAttribute @ 1425dbd40

FAttribute * __thiscall
FSlateAttributeDescriptor::FindAttribute(FSlateAttributeDescriptor *this,FName param_1)

{
  FAttribute *pFVar1;
  FAttribute *pFVar2;
  
  pFVar1 = (FAttribute *)(this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Attributes).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAttribute *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindAttribute @ 1425dbd70

FAttribute * __thiscall
FSlateAttributeDescriptor::FindAttribute(FSlateAttributeDescriptor *this,FName param_1)

{
  FAttribute *pFVar1;
  FAttribute *pFVar2;
  
  pFVar1 = (FAttribute *)(this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Attributes).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAttribute *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindContainedAttribute @ 1425dc5b0

FAttribute * __thiscall
FSlateAttributeDescriptor::FindContainedAttribute
          (FSlateAttributeDescriptor *this,FName param_1,uint param_2)

{
  FAttribute *pFVar1;
  FAttribute *pFVar2;
  
  pFVar1 = (FAttribute *)(this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Attributes).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAttribute *)0x0;
    }
    if (((pFVar1->Offset == param_2) && (pFVar1->AttributeType == Contained)) &&
       (pFVar1->ContainerName == param_1)) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindContainer @ 1425dc5f0

FContainer * __thiscall
FSlateAttributeDescriptor::FindContainer(FSlateAttributeDescriptor *this,FName param_1)

{
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar1;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar2;
  
  FVar1 = (this->Containers).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FVar1 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&this->Containers;
  }
  FVar2 = (ForElementType<FSlateAttributeDescriptor::FContainer>)
          ((longlong)(this->Containers).ArrayNum * 0x10 + (longlong)FVar1);
  while( true ) {
    if (FVar1 == FVar2) {
      return (FContainer *)0x0;
    }
    if (*(FName *)FVar1 == param_1) break;
    FVar1 = (ForElementType<FSlateAttributeDescriptor::FContainer>)((longlong)FVar1 + 0x10);
  }
  return (FContainer *)FVar1;
}

// FindMemberAttribute @ 1425dc630

FAttribute * __thiscall
FSlateAttributeDescriptor::FindMemberAttribute(FSlateAttributeDescriptor *this,uint param_1)

{
  FAttribute *pFVar1;
  FAttribute *pFVar2;
  
  pFVar1 = (FAttribute *)(this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Attributes).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAttribute *)0x0;
    }
    if ((pFVar1->Offset == param_1) && (pFVar1->AttributeType == Member)) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetAttributeAtIndex @ 1425dde20

FAttribute * __thiscall
FSlateAttributeDescriptor::GetAttributeAtIndex(FSlateAttributeDescriptor *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAttribute *pFVar5;
  
  piVar1 = &(this->Attributes).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Attributes.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x19a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAttribute *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FAttribute *)(*pcVar2)();
    return pFVar5;
  }
  return (FAttribute *)((this->Attributes).AllocatorInstance.Data + (longlong)param_1 * 0x58);
}

// IndexOfAttribute @ 1425e67e0

int __thiscall
FSlateAttributeDescriptor::IndexOfAttribute(FSlateAttributeDescriptor *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->Attributes).ArrayNum * 0xb) {
      return -1;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 0xb;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x58);
}

// IndexOfContainedAttribute @ 1425e6830

int __thiscall
FSlateAttributeDescriptor::IndexOfContainedAttribute
          (FSlateAttributeDescriptor *this,FName param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->Attributes).ArrayNum * 0x58) {
      return -1;
    }
    if (((*(uint *)(pFVar2 + 8) == param_2) && (pFVar2[0x50] == (FScriptContainerElement)0x2)) &&
       (*(FName *)(pFVar2 + 0x14) == param_1)) break;
    pFVar2 = pFVar2 + 0x58;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x58);
}

// IndexOfContainer @ 1425e6890

int __thiscall
FSlateAttributeDescriptor::IndexOfContainer(FSlateAttributeDescriptor *this,FName param_1)

{
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar1;
  ForElementType<FSlateAttributeDescriptor::FContainer> FVar2;
  
  FVar2 = (this->Containers).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FVar2 = (ForElementType<FSlateAttributeDescriptor::FContainer>)&this->Containers;
  }
  FVar1 = FVar2;
  while( true ) {
    if (FVar1 == (ForElementType<FSlateAttributeDescriptor::FContainer>)
                 ((longlong)(this->Containers).ArrayNum * 0x10 + (longlong)FVar2)) {
      return -1;
    }
    if (*(FName *)FVar1 == param_1) break;
    FVar1 = (ForElementType<FSlateAttributeDescriptor::FContainer>)((longlong)FVar1 + 0x10);
  }
  return (int)((longlong)FVar1 - (longlong)FVar2 >> 4);
}

// IndexOfMemberAttribute @ 1425e68e0

int __thiscall
FSlateAttributeDescriptor::IndexOfMemberAttribute(FSlateAttributeDescriptor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->Attributes).ArrayNum * 0x58) {
      return -1;
    }
    if ((*(uint *)(pFVar2 + 8) == param_1) && (pFVar2[0x50] == (FScriptContainerElement)0x0)) break;
    pFVar2 = pFVar2 + 0x58;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x58);
}

// OverrideInvalidationReason @ 1425f13c0

void __thiscall
FSlateAttributeDescriptor::OverrideInvalidationReason
          (FSlateAttributeDescriptor *this,FName param_1,FName param_2,
          FInvalidateWidgetReasonAttribute *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName *local_res20;
  
  local_res18 = param_2;
  if ((param_2 == (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttributeName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x21c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (FName *)(this->Attributes).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)(this->Attributes).ArrayNum * 0xb;
  for (; pFVar4 != pFVar3; pFVar4 = pFVar4 + 0xb) {
    if (*pFVar4 == local_res18) goto LAB_1425f1448;
  }
  local_res20 = &local_res18;
  pFVar4 = (FName *)0x0;
  bVar2 = `FSlateAttributeDescriptor::OverrideInvalidationReason'::__l10::<lambda_1>::operator()
                    (&local_res20);
  if (bVar2) {
LAB_1425f1448:
    if ((*(FName *)&pFVar4[2].Number == param_1) ||
       (bVar2 = `FSlateAttributeDescriptor::OverrideInvalidationReason'::__l13::<lambda_2>::
                operator()(local_res8), bVar2)) {
      *(EInvalidateWidgetReason *)&pFVar4[5].ComparisonIndex.Value = param_3->Reason;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pFVar4 + 6),
                 (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)&param_3->Getter);
    }
  }
  if ((*(int *)&(param_3->Getter).field_0x8 != 0) &&
     (*(undefined8 **)&param_3->Getter != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)&param_3->Getter)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_3->Getter,0,0,0x10);
    *(undefined4 *)&(param_3->Getter).field_0x8 = 0;
  }
  if (*(void **)&param_3->Getter != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->Getter);
  }
  return;
}

// OverrideOnValueChanged @ 1425f1600

void __thiscall
FSlateAttributeDescriptor::OverrideOnValueChanged
          (FSlateAttributeDescriptor *this,FName param_1,FName param_2,ECallbackOverrideType param_3
          ,TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_4)

{
  code *pcVar1;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *this_00;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  longlong *plVar9;
  FName *pFVar10;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *this_01;
  FName *local_res8;
  FName local_res18;
  FDelegateAllocation local_78;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> local_68;
  ForAnyElementType local_58;
  int local_50;
  ForAnyElementType local_48;
  int local_40;
  ECallbackOverrideType local_38;
  
  this_00 = param_4;
  local_res18 = param_2;
  if ((param_2 == (FName)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttributeName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x22b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar10 = (FName *)(this->Attributes).AllocatorInstance.Data;
  pFVar8 = pFVar10 + (longlong)(this->Attributes).ArrayNum * 0xb;
  for (; pFVar10 != pFVar8; pFVar10 = pFVar10 + 0xb) {
    if (*pFVar10 == local_res18) goto LAB_1425f169a;
  }
  local_res8 = &local_res18;
  bVar3 = `FSlateAttributeDescriptor::OverrideOnValueChanged'::__l10::<lambda_1>::operator()
                    (&local_res8);
  pFVar10 = (FName *)0x0;
  if (!bVar3) goto LAB_1425f1976;
LAB_1425f169a:
  if (*(FName *)&pFVar10[2].Number != param_1) {
    param_4._0_1_ = 0;
    bVar3 = `FSlateAttributeDescriptor::OverrideOnValueChanged'::__l13::<lambda_2>::operator()
                      (&param_4);
    if (!bVar3) goto LAB_1425f1976;
  }
  if (param_3 == ReplacePrevious) {
LAB_1425f196e:
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)(pFVar10 + 8),
               (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this_00);
    goto LAB_1425f1976;
  }
  if ((param_3 != ExecuteAfterPrevious) && (param_3 != ExecuteBeforePrevious)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                       ,0x24f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1425f1976;
  }
  this_01 = (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
            (pFVar10 + 8);
  if (((pFVar10[9].ComparisonIndex.Value == 0) || (*(longlong **)this_01 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)this_01 + 0x38))(), cVar4 == '\0')) {
LAB_1425f194c:
    plVar9 = *(longlong **)this_00;
    iVar5 = *(int *)&this_00->field_0x8;
LAB_1425f1952:
    if (((iVar5 == 0) || (plVar9 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) goto LAB_1425f1976;
    goto LAB_1425f196e;
  }
  iVar5 = *(int *)&this_00->field_0x8;
  if (iVar5 == 0) goto LAB_1425f1976;
  plVar9 = (longlong *)0x0;
  if (*(longlong **)this_00 == (longlong *)0x0) goto LAB_1425f1952;
  cVar4 = (**(code **)(**(longlong **)this_00 + 0x38))();
  if (cVar4 == '\0') goto LAB_1425f194c;
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
  TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>(&local_68,this_01);
  local_58.Data = (FScriptContainerElement *)local_68._0_8_;
  local_50 = local_68._8_4_;
  local_48.Data = *(FScriptContainerElement **)this_00;
  local_40 = *(int *)&this_00->field_0x8;
  *(undefined4 *)&this_00->field_0x8 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_4_ = 0;
  *(undefined8 *)this_00 = 0;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  local_38 = param_3;
  puVar6 = UE::Core::Private::DelegateAllocate(0x40,&local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::`20'::<lambda_3>_>
               ::_vftable_;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[3] = local_58.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar6 + 4) = local_50;
    local_50 = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    puVar6[5] = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar6 + 6) = local_40;
    local_40 = 0;
    *(ECallbackOverrideType *)(puVar6 + 7) = local_38;
  }
  iVar5 = local_78.DelegateSize;
  FVar2 = local_78.DelegateAllocator;
  local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_78.DelegateSize = 0;
  if ((pFVar10[9].ComparisonIndex.Value != 0) &&
     (puVar6 = *(undefined8 **)this_01, puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_01,0,0,0x10);
    pFVar10[9].ComparisonIndex.Value = 0;
  }
  if (*(void **)this_01 != (void *)0x0) {
    FMemory::Free(*(void **)this_01);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)this_01 = FVar2;
  pFVar10[9].ComparisonIndex.Value = iVar5;
  if (local_78.DelegateSize == 0) {
LAB_1425f188c:
    if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_78.DelegateAllocator);
    }
  }
  else if (local_78.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    (*(code *)**(undefined8 **)local_78.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.DelegateSize = 0;
    goto LAB_1425f188c;
  }
  if (local_40 == 0) {
LAB_1425f18c8:
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else if (local_48.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1425f18c8;
  }
  if (local_50 == 0) {
LAB_1425f1904:
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  else if (local_58.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1425f1904;
  }
  if (local_68._8_4_ != 0) {
    if ((FScriptContainerElement *)local_68._0_8_ == (FScriptContainerElement *)0x0)
    goto LAB_1425f1976;
    (*(code *)**(undefined8 **)local_68._0_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68._8_4_ = 0;
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
LAB_1425f1976:
  if ((*(int *)&this_00->field_0x8 != 0) && (*(undefined8 **)this_00 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)this_00)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,0,0x10);
    *(undefined4 *)&this_00->field_0x8 = 0;
  }
  if (*(void **)this_00 != (void *)0x0) {
    FMemory::Free(*(void **)this_00);
  }
  return;
}

// SetAffectVisibility @ 1425fb790

void __thiscall
FSlateAttributeDescriptor::SetAffectVisibility
          (FSlateAttributeDescriptor *this,FAttribute *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FAttribute *local_res10 [3];
  
  bVar3 = ::FName::Equals(param_1->Name,"Visibility");
  if (bVar3) {
    if (!param_2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInAffectVisibility",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                         ,0x285,L"The Visibility attribute must be marked at \'Affect Visibility\'")
      ;
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_1425fb821;
    }
  }
  else if (!param_2) goto LAB_1425fb821;
  if (((param_1->InvalidationReason).Reason & Visibility) == None) {
    if ((*(int *)&(param_1->InvalidationReason).Getter.field_0x8 != 0) &&
       (plVar1 = *(longlong **)&(param_1->InvalidationReason).Getter, plVar1 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar1 + 0x38))();
      if (cVar4 != '\0') goto LAB_1425fb821;
    }
    local_res10[0] = param_1;
    `FSlateAttributeDescriptor::SetAffectVisibility'::__l17::<lambda_1>::operator()(local_res10);
  }
LAB_1425fb821:
  param_1->bAffectVisibility = param_2;
  return;
}

// SetPrerequisite @ 1425fd7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateAttributeDescriptor::SetPrerequisite
          (FSlateAttributeDescriptor *this,FName param_1,FAttribute *param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FName> FVar5;
  ForElementType<FName> FVar6;
  ForElementType<FName> FVar7;
  ForElementType<FName> FVar8;
  FName local_res20;
  undefined1 auStackY_168 [32];
  undefined1 local_118 [20];
  undefined8 local_104;
  FName *local_f8;
  FAttribute *local_f0;
  FName *local_e8;
  FAttribute *local_e0;
  ForElementType<FName> local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FVar7 = (ForElementType<FName>)0x0;
  if (param_3 == (FName)0x0) {
    (param_2->Prerequisite).ComparisonIndex = 0;
    (param_2->Prerequisite).Number = 0;
  }
  else {
    FVar8 = (ForElementType<FName>)(this->Attributes).AllocatorInstance.Data;
    FVar5 = (ForElementType<FName>)((longlong)(this->Attributes).ArrayNum * 0x58 + (longlong)FVar8);
    for (; local_res20 = param_3, FVar8 != FVar5;
        FVar8 = (ForElementType<FName>)((longlong)FVar8 + 0x58)) {
      if (*(FName *)FVar8 == param_3) goto LAB_1425fd879;
    }
    local_f8 = &local_res20;
    local_f0 = param_2;
    bVar3 = `FSlateAttributeDescriptor::SetPrerequisite'::__l8::<lambda_1>::operator()(&local_f8);
    FVar8 = FVar7;
    if (bVar3) {
LAB_1425fd879:
      if (*(FName *)((longlong)FVar8 + 0x14) != param_1) {
        local_118[0] = 0;
        bVar3 = `FSlateAttributeDescriptor::SetPrerequisite'::__l11::<lambda_2>::operator()
                          (local_118);
        if (!bVar3) {
          return;
        }
      }
      param_2->Prerequisite = local_res20;
      uVar4 = (this->Attributes).ArrayNum;
      local_c8.SecondaryData = (ForElementType<FName>)0x0;
      local_40 = 0;
      local_3c = 0x10;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      FVar8 = FVar7;
      if (0x10 < (int)uVar4) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,uVar4,&local_c8,0,(int *)&local_3c);
        FVar8._4_4_ = 0;
        FVar8._0_4_ = local_40;
      }
      FVar5 = (ForElementType<FName>)param_2;
      if (param_2->Prerequisite != (FName)0x0) {
        do {
          uVar4 = FVar8._0_4_;
          FVar8 = (ForElementType<FName>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar8 = local_c8.SecondaryData;
          }
          FVar6 = (ForElementType<FName>)((longlong)FVar8 + (longlong)(int)uVar4 * 8);
          if (FVar8 != FVar6) {
            do {
              if (*(longlong *)FVar8 == *(longlong *)FVar5) {
                local_e8 = &local_res20;
                local_e0 = param_2;
                `FSlateAttributeDescriptor::SetPrerequisite'::__l19::<lambda_3>::operator()
                          (&local_e8);
                (param_2->Prerequisite).ComparisonIndex = 0;
                (param_2->Prerequisite).Number = 0;
                local_104 = 0;
                goto LAB_1425fda81;
              }
              FVar8 = (ForElementType<FName>)((longlong)FVar8 + 8);
            } while (FVar8 != FVar6);
          }
          FVar8 = (ForElementType<FName>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar8 = local_c8.SecondaryData;
          }
          if ((ulonglong)FVar8 <= (ulonglong)FVar5) {
            FVar8 = (ForElementType<FName>)&local_c8;
            if (local_c8.SecondaryData != (ForElementType<FName>)0x0) {
              FVar8 = local_c8.SecondaryData;
            }
            if (((ulonglong)FVar5 < (ulonglong)((longlong)FVar8 + (longlong)(int)local_3c * 8)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar4 = local_40, bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (uVar4 == local_3c) {
            uVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                              (0x408,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar4 + 1;
          FVar8 = (ForElementType<FName>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<FName>)0x0) {
            FVar8 = local_c8.SecondaryData;
          }
          *(longlong *)((longlong)FVar8 + (longlong)(int)uVar4 * 8) = *(longlong *)FVar5;
          pFVar1 = (FScriptContainerElement *)((longlong)FVar5 + 0xc);
          FVar5 = (ForElementType<FName>)(this->Attributes).AllocatorInstance.Data;
          FVar8 = (ForElementType<FName>)
                  ((longlong)(this->Attributes).ArrayNum * 0x58 + (longlong)FVar5);
          for (; FVar6 = FVar7, FVar5 != FVar8;
              FVar5 = (ForElementType<FName>)((longlong)FVar5 + 0x58)) {
            if (*(longlong *)FVar5 == *(longlong *)pFVar1) {
              FVar6 = FVar5;
              if (FVar5 != (ForElementType<FName>)0x0) goto LAB_1425fda3c;
              break;
            }
          }
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentAttribute",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeDescriptor.cpp"
                             ,0x274,L"");
          FVar5 = FVar6;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
LAB_1425fda3c:
          if (*(longlong *)((longlong)FVar5 + 0xc) == 0) break;
          FVar8._4_4_ = 0;
          FVar8._0_4_ = local_40;
        } while( true );
      }
LAB_1425fda81:
      if (local_c8.SecondaryData != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
      }
    }
    else {
      (param_2->Prerequisite).ComparisonIndex = 0;
      (param_2->Prerequisite).Number = 0;
    }
  }
  return;
}

// operator() @ 1504909a0

bool __thiscall
`FSlateAttributeDescriptor::SetPrerequisite'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204257>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204257>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150490a39;
    }
  }
  bVar4 = false;
LAB_150490a39:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150490a90

bool __thiscall `FSlateAttributeDescriptor::AddContainer'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204363>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204363>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490af7;
    }
  }
  bVar2 = false;
LAB_150490af7:
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

// operator() @ 150490b30

bool __thiscall
`FSlateAttributeDescriptor::AddMemberAttribute'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204349>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204349>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490b97;
    }
  }
  bVar2 = false;
LAB_150490b97:
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

// operator() @ 150490bd0

bool __thiscall
`FSlateAttributeDescriptor::OverrideInvalidationReason'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204321>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204321>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490c37;
    }
  }
  bVar2 = false;
LAB_150490c37:
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

// operator() @ 150490c70

bool __thiscall
`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204306>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204306>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490cd7;
    }
  }
  bVar2 = false;
LAB_150490cd7:
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

// operator() @ 150490d10

bool __thiscall
`FSlateAttributeDescriptor::AddContainedAttribute'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204334>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204334>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490d77;
    }
  }
  bVar2 = false;
LAB_150490d77:
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

// operator() @ 150490db0

bool __thiscall
`FSlateAttributeDescriptor::SetAffectVisibility'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204213>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204213>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150490e17;
    }
  }
  bVar2 = false;
LAB_150490e17:
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

// operator() @ 150491660

bool __thiscall
`FSlateAttributeDescriptor::SetPrerequisite'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204255>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204255>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504916a0

bool __thiscall
`FSlateAttributeDescriptor::OverrideInvalidationReason'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204319>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204319>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504916e0

bool __thiscall
`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204304>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204304>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150491900

bool __thiscall
`FSlateAttributeDescriptor::SetPrerequisite'::__l19::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4986616305223204242>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4986616305223204242>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150491999;
    }
  }
  bVar4 = false;
LAB_150491999:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

