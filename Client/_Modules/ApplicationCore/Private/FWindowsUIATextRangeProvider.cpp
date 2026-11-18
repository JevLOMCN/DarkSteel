// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 30

// FWindowsUIATextRangeProvider @ 1423c5160

FWindowsUIATextRangeProvider * __thiscall
FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
          (FWindowsUIATextRangeProvider *this,FWindowsUIAManager *param_1,
          TSharedRef<IAccessibleWidget,1> *param_2,FTextRange param_3)

{
  TSharedRef<IAccessibleWidget,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWindowsUIABaseProvider::FWindowsUIABaseProvider
            ((FWindowsUIABaseProvider *)this,param_1,&local_18);
  this->TextRange = param_3;
  this->_padding_ = (longlong)&_vftable__for__FWindowsUIABaseProvider__;
  this->_padding_ = (longlong)&_vftable__for__ITextRangeProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWindowsUIATextRangeProvider @ 1423c7830

void __thiscall
FWindowsUIATextRangeProvider::~FWindowsUIATextRangeProvider(FWindowsUIATextRangeProvider *this)

{
  this->_padding_ = (longlong)&_vftable__for__ITextRangeProvider__;
  this->_padding_ = (longlong)&___7FWindowsUIABaseProvider__6B_;
  if (this->_padding_ != 0) {
    TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
              *)(this->_padding_ + 0x50),(FWindowsUIABaseProvider *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// operator() @ 1423c8960

void __thiscall `FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FTextRange FVar2;
  char cVar3;
  FWindowsUIATextRangeProvider *pFVar4;
  FWindowsUIATextRangeProvider *pFVar5;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if ((*(longlong *)(*(longlong *)this + 8) != 0) &&
     (cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar3 != '\0')) {
    pFVar4 = ::operator_new(0x38);
    pFVar5 = (FWindowsUIATextRangeProvider *)0x0;
    if (pFVar4 != (FWindowsUIATextRangeProvider *)0x0) {
      lVar1 = *(longlong *)this;
      local_18.Object = *(IAccessibleWidget **)(lVar1 + 0x10);
      FVar2 = *(FTextRange *)(lVar1 + 0x30);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                         (pFVar4,*(FWindowsUIAManager **)(*(longlong *)this + 8),&local_18,FVar2);
    }
    pFVar4 = (FWindowsUIATextRangeProvider *)&pFVar5->_padding_;
    if (pFVar5 == (FWindowsUIATextRangeProvider *)0x0) {
      pFVar4 = (FWindowsUIATextRangeProvider *)0x0;
    }
    *(FWindowsUIATextRangeProvider **)**(undefined8 **)((longlong)this + 0x10) = pFVar4;
    **(undefined4 **)((longlong)this + 8) = 0;
  }
  return;
}

// operator() @ 1423c8b50

void __thiscall
`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(longlong *)(*(longlong *)this + 8) != 0) &&
     (cVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar1 != '\0')) {
    switch(**(undefined4 **)((longlong)this + 0x10)) {
    case 0:
      puVar4 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))();
      lVar5 = (**(code **)*puVar4)(puVar4);
      iVar6 = *(int *)(lVar5 + 8) + -1;
      if (*(int *)(lVar5 + 8) == 0) {
        iVar6 = 0;
      }
      iVar2 = *(int *)(*(longlong *)this + 0x30) + 1;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      *(int *)(*(longlong *)this + 0x34) = iVar6;
      **(undefined4 **)((longlong)this + 8) = 0;
      return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      **(undefined4 **)((longlong)this + 8) = 0x80004001;
      **(undefined4 **)((longlong)this + 8) = 0;
      return;
    case 6:
      puVar4 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xd8))();
      lVar5 = (**(code **)*puVar4)(puVar4);
      uVar3 = *(int *)(lVar5 + 8) - 1;
      if (*(int *)(lVar5 + 8) == 0) {
        uVar3 = 0;
      }
      *(ulonglong *)(*(longlong *)this + 0x30) = (ulonglong)uVar3 << 0x20;
    }
    **(undefined4 **)((longlong)this + 8) = 0;
  }
  return;
}

// operator() @ 1423c8c80

void __thiscall `FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  int iVar2;
  ForAnyElementType FVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  FString *this_00;
  FWindowsUIATextRangeProvider *pFVar7;
  FWindowsUIATextRangeProvider *pFVar8;
  FTextRange FVar9;
  FString local_28;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if ((*(longlong *)(*(longlong *)this + 8) != 0) &&
     (cVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar4 != '\0')) {
    ::FString::FString(&local_28,(wchar_t *)**(undefined8 **)((longlong)this + 0x10));
    lVar1 = *(longlong *)this;
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 0xd8))();
    this_00 = (FString *)(**(code **)*puVar6)(puVar6);
    ::FString::Mid(this_00,(FString *)&local_18,*(int *)(lVar1 + 0x30),*(int *)(lVar1 + 0x34));
    iVar5 = local_28.Data.ArrayNum + -1;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    iVar5 = ::FString::Find((FString *)&local_18,(wchar_t *)FVar3.Data,iVar5,
                            (uint)(**(int **)((longlong)this + 0x20) != 0),
                            (uint)(**(int **)((longlong)this + 0x18) != 0),-1);
    if (local_18.Object != (IAccessibleWidget *)0x0) {
      FMemory::Free(local_18.Object);
    }
    if (iVar5 == -1) {
      *(undefined8 *)**(undefined8 **)((longlong)this + 0x28) = 0;
    }
    else {
      iVar5 = iVar5 + *(int *)(*(longlong *)this + 0x30);
      pFVar7 = ::operator_new(0x38);
      pFVar8 = (FWindowsUIATextRangeProvider *)0x0;
      if (pFVar7 != (FWindowsUIATextRangeProvider *)0x0) {
        iVar2 = local_28.Data.ArrayNum + -1 + iVar5;
        if (local_28.Data.ArrayNum == 0) {
          iVar2 = iVar5;
        }
        FVar9.EndIndex = iVar2;
        FVar9.BeginIndex = iVar5;
        local_18.Object = *(IAccessibleWidget **)(*(longlong *)this + 0x10);
        local_18.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FWindowsUIATextRangeProvider::FWindowsUIATextRangeProvider
                           (pFVar7,*(FWindowsUIAManager **)(*(longlong *)this + 8),&local_18,FVar9);
      }
      pFVar7 = (FWindowsUIATextRangeProvider *)&pFVar8->_padding_;
      if (pFVar8 == (FWindowsUIATextRangeProvider *)0x0) {
        pFVar7 = (FWindowsUIATextRangeProvider *)0x0;
      }
      *(FWindowsUIATextRangeProvider **)**(undefined8 **)((longlong)this + 0x28) = pFVar7;
    }
    **(undefined4 **)((longlong)this + 8) = 0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1423c8e10

void __thiscall
`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  FWindowsUIAManager *this_00;
  char cVar2;
  FWindowsUIAWidgetProvider *pFVar3;
  undefined1 *puVar4;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)this;
      local_18.Object = *(IAccessibleWidget **)(lVar1 + 0x10);
      this_00 = *(FWindowsUIAManager **)(lVar1 + 8);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_18);
      puVar4 = &pFVar3->field_0x28;
      if (pFVar3 == (FWindowsUIAWidgetProvider *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      *(undefined1 **)**(undefined8 **)((longlong)this + 0x10) = puVar4;
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// operator() @ 1423c9c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall `FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  FString *this_00;
  BSTR pOVar6;
  ForAnyElementType psz;
  int iVar7;
  int iVar8;
  FString local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)this;
      puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 0xd8))();
      this_00 = (FString *)(**(code **)*puVar5)(puVar5);
      ::FString::Mid(this_00,&local_18,*(int *)(lVar1 + 0x30),*(int *)(lVar1 + 0x34));
      iVar8 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      iVar4 = iVar8;
      if (**(int **)((longlong)this + 0x10) < iVar8) {
        iVar4 = **(int **)((longlong)this + 0x10);
      }
      iVar7 = 0;
      if (0 < iVar4) {
        iVar7 = iVar4;
      }
      ::FString::RemoveAt(&local_18,iVar7,iVar8 - iVar7,No);
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      psz.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        psz.Data = FVar2.Data;
      }
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      pOVar6 = SysAllocString((OLECHAR *)psz.Data);
      *(BSTR *)**(undefined8 **)((longlong)this + 0x18) = pOVar6;
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      **(undefined4 **)((longlong)this + 8) = 0;
    }
  }
  return;
}

// AddRef @ 1423d0210

ulong __thiscall FWindowsUIATextRangeProvider::AddRef(FWindowsUIATextRangeProvider *this)

{
  this[-1].TextRange.BeginIndex = this[-1].TextRange.BeginIndex + 1;
  return this[-1].TextRange.BeginIndex;
}

// AddToSelection @ 1423d0290

undefined4 __thiscall
FWindowsUIATextRangeProvider::AddToSelection(FWindowsUIATextRangeProvider *this)

{
  return 0x80004001;
}

// Clone @ 1423d32c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::Clone(FWindowsUIATextRangeProvider *this,ITextRangeProvider **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  ITextRangeProvider **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = this[-1]._padding_;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Clone'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::Clone'::__l2::<lambda_1>,void>::
                  Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// Compare @ 1423d4950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::Compare
          (FWindowsUIATextRangeProvider *this,ITextRangeProvider *param_1,int *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  ITextRangeProvider *local_res10;
  int *local_res18 [2];
  undefined1 auStack_68 [32];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = this[-1]._padding_;
  local_48[0] = (code *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::Compare'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)&local_res10;
  local_20[3] = (longlong)local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::Compare'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return 0;
}

// CompareEndpoints @ 1423d4a50

undefined4 __thiscall
FWindowsUIATextRangeProvider::CompareEndpoints
          (FWindowsUIATextRangeProvider *this,TextPatternRangeEndpoint param_1,
          ITextRangeProvider *param_2,TextPatternRangeEndpoint param_3,int *param_4)

{
  ITextRangeProvider *pIVar1;
  int iVar2;
  
  if (param_1 == TextPatternRangeEndpoint_Start) {
    iVar2 = (int)this->_padding_;
  }
  else {
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  }
  pIVar1 = param_2 + 1;
  if (param_2 == (ITextRangeProvider *)0x0) {
    pIVar1 = (ITextRangeProvider *)&DAT_00000030;
  }
  if (param_3 != TextPatternRangeEndpoint_Start) {
    pIVar1 = (ITextRangeProvider *)&pIVar1->field_0x4;
  }
  *param_4 = iVar2 - *(int *)pIVar1;
  return 0;
}

// ExpandToEnclosingUnit @ 1423db8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::ExpandToEnclosingUnit
          (FWindowsUIATextRangeProvider *this,TextUnit param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  TextUnit local_res10 [6];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = this[-1]._padding_;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::ExpandToEnclosingUnit'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// FindAttribute @ 1423dc290

undefined4 __thiscall
FWindowsUIATextRangeProvider::FindAttribute
          (FWindowsUIATextRangeProvider *this,int param_1,tagVARIANT *param_2,int param_3,
          ITextRangeProvider **param_4)

{
  return 0x80004001;
}

// FindText @ 1423dc570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::FindText
          (FWindowsUIATextRangeProvider *this,wchar_t *param_1,int param_2,int param_3,
          ITextRangeProvider **param_4)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  wchar_t *local_res10;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = this[-1]._padding_;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_20 = FMemory::Malloc(0x38,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::FindText'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)&local_res10;
  local_20[4] = (longlong)local_res18;
  local_20[5] = (longlong)local_res20;
  local_20[6] = (longlong)&param_4;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::FindText'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetAttributeValue @ 1423ddbc0

undefined4 __thiscall
FWindowsUIATextRangeProvider::GetAttributeValue
          (FWindowsUIATextRangeProvider *this,int param_1,tagVARIANT *param_2)

{
  return 0x80004001;
}

// GetBoundingRectangles @ 1423dde70

undefined4 __thiscall
FWindowsUIATextRangeProvider::GetBoundingRectangles
          (FWindowsUIATextRangeProvider *this,tagSAFEARRAY **param_1)

{
  return 0x80004001;
}

// GetChildren @ 1423ddeb0

undefined4 __thiscall
FWindowsUIATextRangeProvider::GetChildren(FWindowsUIATextRangeProvider *this,tagSAFEARRAY **param_1)

{
  *param_1 = (tagSAFEARRAY *)0x0;
  return 0;
}

// GetEnclosingElement @ 1423de490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::GetEnclosingElement
          (FWindowsUIATextRangeProvider *this,IRawElementProviderSimple **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRawElementProviderSimple **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = this[-1]._padding_;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetEnclosingElement'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::GetEnclosingElement'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetText @ 1423e4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::GetText
          (FWindowsUIATextRangeProvider *this,int param_1,wchar_t **param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int local_res10 [2];
  wchar_t **local_res18 [2];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = this[-1]._padding_;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::GetText'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  local_20[4] = (longlong)local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::GetText'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// Move @ 1423ef0e0

undefined4 __thiscall
FWindowsUIATextRangeProvider::Move
          (FWindowsUIATextRangeProvider *this,TextUnit param_1,int param_2,int *param_3)

{
  return 0x80004001;
}

// MoveEndpointByRange @ 1423ef0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIATextRangeProvider::MoveEndpointByRange
          (FWindowsUIATextRangeProvider *this,TextPatternRangeEndpoint param_1,
          ITextRangeProvider *param_2,TextPatternRangeEndpoint param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  TextPatternRangeEndpoint local_res10 [2];
  ITextRangeProvider *local_res18;
  TextPatternRangeEndpoint local_res20 [2];
  undefined1 auStack_68 [32];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = this[-1]._padding_;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1]._padding_;
  local_20[2] = (longlong)local_res10;
  local_20[3] = (longlong)&local_res18;
  local_20[4] = (longlong)local_res20;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIATextRangeProvider::MoveEndpointByRange'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return 0;
}

// MoveEndpointByUnit @ 1423ef200

undefined4 __thiscall
FWindowsUIATextRangeProvider::MoveEndpointByUnit
          (FWindowsUIATextRangeProvider *this,TextPatternRangeEndpoint param_1,TextUnit param_2,
          int param_3,int *param_4)

{
  return 0x80004001;
}

// QueryInterface @ 1423fd3a0

undefined4 __thiscall
FWindowsUIATextRangeProvider::QueryInterface
          (FWindowsUIATextRangeProvider *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  FWindowsUIATextRangeProvider *pFVar3;
  
  *param_2 = (void *)0x0;
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if (((lVar1 == _GUID_00000000_0000_0000_c000_000000000046._0_8_) &&
      (*(longlong *)param_1->Data4 == _GUID_00000000_0000_0000_c000_000000000046._8_8_)) ||
     ((lVar2._0_4_ = param_1->Data1, lVar2._4_2_ = param_1->Data2, lVar2._6_2_ = param_1->Data3,
      lVar2 == _GUID_5347ad7b_c355_46f8_aff5_909033582f63._0_8_ &&
      (*(longlong *)param_1->Data4 == _GUID_5347ad7b_c355_46f8_aff5_909033582f63._8_8_)))) {
    pFVar3 = this;
    if (this == (FWindowsUIATextRangeProvider *)&DAT_00000028) {
      pFVar3 = (FWindowsUIATextRangeProvider *)0x0;
    }
    *param_2 = pFVar3;
    if (pFVar3 != (FWindowsUIATextRangeProvider *)0x0) {
      (**(code **)(this->_padding_ + 8))(this);
      return 0;
    }
  }
  return 0x80004002;
}

// Release @ 1424001a0

ulong __thiscall FWindowsUIATextRangeProvider::Release(FWindowsUIATextRangeProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if (this[-1].TextRange.BeginIndex == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6951043228682420265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIABaseProvider.cpp"
                       ,0x29,"RefCount > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = this[-1].TextRange.BeginIndex - 1;
  this[-1].TextRange.BeginIndex = uVar3;
  if (uVar3 == 0) {
    (**(code **)this[-1]._padding_)(&this[-1]._padding_,1);
    uVar3 = 0;
  }
  return uVar3;
}

// RemoveFromSelection @ 142400eb0

undefined4 __thiscall
FWindowsUIATextRangeProvider::RemoveFromSelection(FWindowsUIATextRangeProvider *this)

{
  return 0x80004001;
}

// ScrollIntoView @ 1424030a0

undefined4 __thiscall
FWindowsUIATextRangeProvider::ScrollIntoView(FWindowsUIATextRangeProvider *this,int param_1)

{
  return 0x80004001;
}

// Select @ 142403240

undefined4 __thiscall FWindowsUIATextRangeProvider::Select(FWindowsUIATextRangeProvider *this)

{
  return 0x80004001;
}

// TextFromTextRange @ 142408da0

FString * __thiscall
FWindowsUIATextRangeProvider::TextFromTextRange
          (FWindowsUIATextRangeProvider *this,FString *__return_storage_ptr__)

{
  undefined8 *puVar1;
  FString *this_00;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 0xd8))();
  this_00 = (FString *)(**(code **)*puVar1)(puVar1);
  ::FString::Mid(this_00,__return_storage_ptr__,(this->TextRange).BeginIndex,
                 (this->TextRange).EndIndex);
  return __return_storage_ptr__;
}

// TextFromTextRange @ 142408df0

FString * __cdecl
FWindowsUIATextRangeProvider::TextFromTextRange
          (FString *__return_storage_ptr__,FString *param_1,FTextRange *param_2)

{
  ::FString::Mid(param_1,__return_storage_ptr__,param_2->BeginIndex,param_2->EndIndex);
  return __return_storage_ptr__;
}

