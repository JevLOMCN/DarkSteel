// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// ProtectedFindGetter @ 1425f5480

ISlateAttributeGetter * __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedFindGetter
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2)

{
  SWidget *pSVar1;
  ISlateAttributeGetter *pIVar2;
  
  pSVar1 = (SWidget *)(**(code **)*param_1)(param_1);
  pIVar2 = ProtectedFindGetter(this,pSVar1,param_2);
  return pIVar2;
}

// ProtectedFindGetter @ 1425f54c0

ISlateAttributeGetter * __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedFindGetter
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateAttributeMetaData *pFVar4;
  ISlateAttributeGetter *pIVar5;
  uint uVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  
  TestAttributeAddress(param_1,this,param_2);
  pFVar4 = FSlateAttributeMetaData::FindMetaData(param_1);
  if (pFVar4 != (FSlateAttributeMetaData *)0x0) {
    FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar4->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
    }
    for (FVar9 = FVar7;
        FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
      if (*(FSlateAttributeImpl **)FVar9 == this) {
        uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
        if (uVar8 == 0xffffffff) {
          return (ISlateAttributeGetter *)0x0;
        }
        uVar6 = 0;
        if ((int)uVar8 < iVar1) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pIVar5 = (ISlateAttributeGetter *)(*pcVar2)();
          return pIVar5;
        }
        FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
          FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
        }
        return *(ISlateAttributeGetter **)
                ((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20);
      }
    }
  }
  return (ISlateAttributeGetter *)0x0;
}

// ProtectedFindGetterHandle @ 1425f55c0

FDelegateHandle __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedFindGetterHandle
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2)

{
  ESlateAttributeType EVar1;
  undefined7 in_register_00000081;
  
  EVar1 = (*(code *)**(undefined8 **)CONCAT71(in_register_00000081,param_2))
                    ((undefined8 *)CONCAT71(in_register_00000081,param_2));
  ProtectedFindGetterHandle(this,(SWidget *)param_1,EVar1);
  return (FDelegateHandle)(ulong64)param_1;
}

// ProtectedFindGetterHandle @ 1425f5610

FDelegateHandle __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedFindGetterHandle
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateAttributeMetaData *pFVar4;
  FDelegateHandle FVar5;
  uint uVar6;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar7;
  uint uVar8;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar9;
  undefined7 in_register_00000081;
  ESlateAttributeType in_R9B;
  
  TestAttributeAddress((SWidget *)CONCAT71(in_register_00000081,param_2),this,in_R9B);
  pFVar4 = FSlateAttributeMetaData::FindMetaData((SWidget *)CONCAT71(in_register_00000081,param_2));
  if (pFVar4 != (FSlateAttributeMetaData *)0x0) {
    FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
    iVar1 = (pFVar4->Attributes).ArrayNum;
    if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
    }
    for (FVar9 = FVar7;
        FVar9 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)iVar1 * 0x20 + (longlong)FVar7);
        FVar9 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar9 + 0x20)) {
      if (*(FSlateAttributeImpl **)FVar9 == this) {
        uVar8 = (uint)((longlong)FVar9 - (longlong)FVar7 >> 5);
        if (uVar8 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar8 < iVar1) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            FVar5.ID = (*pcVar2)();
            return (FDelegateHandle)FVar5.ID;
          }
          FVar7 = (pFVar4->Attributes).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
            FVar7 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar4->Attributes;
          }
          (**(code **)(**(longlong **)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20)
                      + 0x18))
                    (*(longlong **)((uchar *)((longlong)FVar7 + 8) + (longlong)(int)uVar8 * 0x20),
                     param_1);
          return (FDelegateHandle)(ulong64)param_1;
        }
        break;
      }
    }
  }
  param_1->_padding_ = 0;
  return (FDelegateHandle)(ulong64)param_1;
}

// ProtectedInvalidateWidget @ 1425f5730

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2,
          EInvalidateWidgetReason param_3)

{
  FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,param_2,param_3);
  return;
}

// ProtectedInvalidateWidget @ 1425f5750

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2,
          EInvalidateWidgetReason param_3)

{
  TestAttributeAddress(param_1,this,param_2);
  FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,param_2,param_3);
  return;
}

// ProtectedIsBound @ 1425f57b0

bool __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsBound
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2)

{
  bool bVar1;
  SWidget *pSVar2;
  
  pSVar2 = (SWidget *)(**(code **)*param_1)(param_1);
  bVar1 = ProtectedIsBound(this,pSVar2,param_2);
  return bVar1;
}

// ProtectedIsBound @ 1425f57f0

bool __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsBound
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2)

{
  FSlateAttributeMetaData *pFVar1;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar2;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar3;
  
  TestAttributeAddress(param_1,this,param_2);
  pFVar1 = FSlateAttributeMetaData::FindMetaData(param_1);
  if (pFVar1 == (FSlateAttributeMetaData *)0x0) {
    return false;
  }
  FVar3 = (pFVar1->Attributes).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar3 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)&pFVar1->Attributes;
  }
  FVar2 = FVar3;
  while( true ) {
    if (FVar2 == (ForElementType<FSlateAttributeMetaData::FGetterItem>)
                 ((longlong)(pFVar1->Attributes).ArrayNum * 0x20 + (longlong)FVar3)) {
      return false;
    }
    if (*(FSlateAttributeImpl **)FVar2 == this) break;
    FVar2 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)((longlong)FVar2 + 0x20);
  }
  return (int)((longlong)FVar2 - (longlong)FVar3 >> 5) != -1;
}

// ProtectedIsImplemented @ 1425f5890

bool __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
          (FSlateAttributeImpl *this,SWidget *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(**(code **)(param_1->_padding_ + 8))(param_1);
  lVar2 = *plVar1;
  lVar3 = (longlong)(int)plVar1[1] * 0x58 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x58) {
    if ((*(int *)(lVar2 + 8) == (int)this - (int)param_1) && (*(char *)(lVar2 + 0x50) == '\0'))
    goto LAB_1425f58d6;
  }
  lVar2 = 0;
LAB_1425f58d6:
  return lVar2 != 0;
}

// ProtectedIsWidgetInDestructionPath @ 1425f58f0

bool __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsWidgetInDestructionPath
          (FSlateAttributeImpl *this,SWidget *param_1)

{
  return true;
}

// ProtectedMoveAttribute @ 1425f5900

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedMoveAttribute
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2,
          FSlateAttributeBase *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != Managed) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeType == ESlateAttributeType::Managed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0xa4,L"Only Managed Attribute cannot be moved.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 == (FSlateAttributeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::MoveAttribute(param_1,(FSlateAttributeBase *)this,param_2,param_3);
  return;
}

// ProtectedRegisterAttribute @ 1425f59b0

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedRegisterAttribute
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_3)

{
  FSlateAttributeMetaData::RegisterAttribute(param_1,(FSlateAttributeBase *)this,param_2,param_3);
  return;
}

// ProtectedRegisterAttribute @ 1425f59d0

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedRegisterAttribute
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2,
          TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
          *param_3)

{
  TestAttributeAddress(param_1,this,param_2);
  FSlateAttributeMetaData::RegisterAttribute(param_1,(FSlateAttributeBase *)this,param_2,param_3);
  return;
}

// ProtectedUnregisterAttribute @ 1425f5a30

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2)

{
  SWidget *pSVar1;
  
  pSVar1 = (SWidget *)(**(code **)*param_1)(param_1);
  FSlateAttributeMetaData::UnregisterAttribute(pSVar1,(FSlateAttributeBase *)this);
  return;
}

// ProtectedUnregisterAttribute @ 1425f5a60

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2)

{
  TestAttributeAddress(param_1,this,param_2);
  FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  return;
}

// ProtectedUpdateNow @ 1425f5aa0

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
          (FSlateAttributeImpl *this,ISlateAttributeContainer *param_1,ESlateAttributeType param_2)

{
  SWidget *pSVar1;
  
  pSVar1 = (SWidget *)(**(code **)*param_1)(param_1);
  TestAttributeAddress(pSVar1,this,param_2);
  FSlateAttributeMetaData::UpdateAttribute(pSVar1,(FSlateAttributeBase *)this);
  return;
}

// ProtectedUpdateNow @ 1425f5af0

void __thiscall
SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
          (FSlateAttributeImpl *this,SWidget *param_1,ESlateAttributeType param_2)

{
  TestAttributeAddress(param_1,this,param_2);
  FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  return;
}

