// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 37

// Construct<FUniversalObjectLocatorEmptyPayload> @ 144343200

void __cdecl UE::CoreUObject::Private::Construct<FUniversalObjectLocatorEmptyPayload>(void *param_1)

{
  return;
}

// ConstructForTests<FUniversalObjectLocatorEmptyPayload> @ 144343210

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocatorEmptyPayload>(void *param_1)

{
  return;
}

// Construct<FUniversalObjectLocatorFragment> @ 144343360

void __cdecl UE::CoreUObject::Private::Construct<FUniversalObjectLocatorFragment>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0xff;
  return;
}

// ConstructForTests<FUniversalObjectLocatorFragment> @ 144343370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocatorFragment>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0xff;
  return;
}

// Destruct<FUniversalObjectLocatorFragment> @ 144343380

void __cdecl UE::CoreUObject::Private::Destruct<FUniversalObjectLocatorFragment>(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  FFragmentType *pFVar3;
  UScriptStruct *pUVar4;
  undefined1 auStackX_8 [8];
  
  if (((*(byte *)((longlong)param_1 + 0x1f) & 1) == 0) || (GIsRequestingExit)) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x1f) & 1) == 0) {
    return;
  }
  pvVar2 = FUniversalObjectLocatorFragment::GetPayload(param_1);
  pFVar3 = UniversalObjectLocator::FFragmentTypeHandle::Resolve
                     ((FFragmentTypeHandle *)((longlong)param_1 + 0x1e));
  if (pFVar3 == (FFragmentType *)0x0) {
    pUVar4 = (UScriptStruct *)0x0;
LAB_144347590:
    bVar1 = `FUniversalObjectLocatorFragment::DestroyPayload'::__l6::<lambda_1>::operator()
                      (auStackX_8);
    if (!bVar1) goto LAB_1443475b3;
  }
  else {
    pUVar4 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    if (pUVar4 == (UScriptStruct *)0x0) goto LAB_144347590;
  }
  (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,pvVar2,1);
LAB_1443475b3:
  if ((*(byte *)((longlong)param_1 + 0x1f) & 2) == 0) {
    FMemory::Free((void *)((longlong)pvVar2 -
                          ((ulonglong)(uint)(1 << (*(byte *)((longlong)param_1 + 0x1f) >> 2 & 0x1f))
                          & 0xfffffffe)));
  }
  *(byte *)((longlong)param_1 + 0x1f) = *(byte *)((longlong)param_1 + 0x1f) & 0xfe;
  return;
}

// SerializeArchive<FUniversalObjectLocatorFragment> @ 1443433a0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FUniversalObjectLocatorFragment>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FUniversalObjectLocatorFragment::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FUniversalObjectLocatorFragment> @ 1443433c0

bool __cdecl
UE::CoreUObject::Private::Copy<FUniversalObjectLocatorFragment>
          (void *param_1,void *param_2,int param_3)

{
  FUniversalObjectLocatorFragment *this;
  UScriptStruct *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FFragmentType *pFVar4;
  void *pvVar5;
  void *pvVar6;
  FUniversalObjectLocatorFragment *this_01;
  
  if (param_3 != 0) {
    this_01 = param_1;
    do {
      this = (FUniversalObjectLocatorFragment *)
             (((longlong)param_2 - (longlong)param_1) + (longlong)this_01);
      FUniversalObjectLocatorFragment::DestroyPayload(this_01);
      if (this->bIsInitialized == 0) {
        this_01->bIsInitialized = '\0';
        (this_01->FragmentType).Handle = 0xff;
      }
      else {
        pFVar4 = UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this_01->FragmentType);
        if ((pFVar4 == (FFragmentType *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResolvedFragmentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                               ,0xa9,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        (this_01->FragmentType).Handle = (this->FragmentType).Handle;
        FUniversalObjectLocatorFragment::DefaultConstructPayload(this_01,pFVar4);
        this_00 = (pFVar4->PayloadType).field0_0x0.DebugPtr;
        pvVar5 = FUniversalObjectLocatorFragment::GetPayload(this);
        pvVar6 = FUniversalObjectLocatorFragment::GetPayload(this_01);
        UScriptStruct::CopyScriptStruct(this_00,pvVar6,pvVar5,1);
      }
      param_3 = param_3 + -1;
      this_01 = this_01 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FUniversalObjectLocatorFragment> @ 1443434d0

bool __cdecl
UE::CoreUObject::Private::Identical<FUniversalObjectLocatorFragment>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = ::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// ExportTextItem<FUniversalObjectLocatorFragment> @ 1443434f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FUniversalObjectLocatorFragment>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  undefined1 auStackY_68 [32];
  FUniversalObjectLocatorFragment local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_3 != (void *)0x0) {
    bVar1 = FUniversalObjectLocatorFragment::ExportTextItem
                      (param_2,param_1,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  local_38.Data[0x10] = '\0';
  local_38.Data[0x11] = '\0';
  local_38.Data[0x12] = '\0';
  local_38.Data[0x13] = '\0';
  local_38.Data[0x14] = '\0';
  local_38.Data[0x15] = '\0';
  local_38.Data[0x16] = '\0';
  local_38.Data[0x17] = '\0';
  local_38.Data[0x18] = '\0';
  local_38.Data[0x19] = '\0';
  local_38.Data[0x1a] = '\0';
  local_38.Data[0x1b] = '\0';
  local_38.Data[0x1c] = '\0';
  local_38.Data[0x1d] = '\0';
  local_38.FragmentType.Handle = 0xff;
  local_38._31_1_ = 0;
  local_38.Data[0] = '\0';
  local_38.Data[1] = '\0';
  local_38.Data[2] = '\0';
  local_38.Data[3] = '\0';
  local_38.Data[4] = '\0';
  local_38.Data[5] = '\0';
  local_38.Data[6] = '\0';
  local_38.Data[7] = '\0';
  local_38.Data[8] = '\0';
  local_38.Data[9] = '\0';
  local_38.Data[10] = '\0';
  local_38.Data[0xb] = '\0';
  local_38.Data[0xc] = '\0';
  local_38.Data[0xd] = '\0';
  local_38.Data[0xe] = '\0';
  local_38.Data[0xf] = '\0';
  bVar1 = FUniversalObjectLocatorFragment::ExportTextItem
                    (param_2,param_1,&local_38,param_4,param_5,param_6);
  if ((local_38.bIsInitialized != 0) && (GIsRequestingExit == false)) {
    FUniversalObjectLocatorFragment::DestroyPayload(&local_38);
  }
  return bVar1;
}

// ImportTextItem<FUniversalObjectLocatorFragment> @ 1443435a0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FUniversalObjectLocatorFragment>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  FParseStringResult *pFVar4;
  FParseStringParams local_res8 [8];
  TStringView<wchar_t> local_38;
  FParseStringResult local_28;
  
  pwVar2 = *param_1;
  if ((pwVar2 != (wchar_t *)0x0) && (*pwVar2 == L'(')) {
    pwVar2 = wcschr(pwVar2,L')');
    local_38.DataPtr = *param_1;
    if ((local_38.DataPtr != pwVar2) &&
       (lVar3 = (longlong)pwVar2 - (longlong)local_38.DataPtr >> 1, lVar3 < 0x7fffffff)) {
      local_38.DataPtr = local_38.DataPtr + 1;
      local_res8[0].Flags = None;
      local_38.Size = (int)lVar3 + -1;
      pFVar4 = FUniversalObjectLocatorFragment::TryParseString
                         (param_2,&local_28,&local_38,local_res8);
      bVar1 = pFVar4->bSuccess;
      if (local_28.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (bVar1 != false) {
        return true;
      }
    }
  }
  return false;
}

// AddStructReferencedObjects<FUniversalObjectLocatorFragment> @ 144343650

_func___cdecl_void_void_ptr_FReferenceCollector_ptr * __cdecl
UE::CoreUObject::Private::AddStructReferencedObjects<FUniversalObjectLocatorFragment>(void)

{
  return AddStructReferencedObjectsOrNot<FUniversalObjectLocatorFragment>;
}

// GetStructTypeHash<FUniversalObjectLocatorFragment> @ 144343660

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FUniversalObjectLocatorFragment>(void *param_1)

{
  byte bVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  int iVar4;
  FFragmentType *pFVar5;
  void *pvVar6;
  uint uVar7;
  
  if ((*(byte *)((longlong)param_1 + 0x1f) & 1) != 0) {
    bVar1 = ((FFragmentTypeHandle *)((longlong)param_1 + 0x1e))->Handle;
    uVar7 = (uint)bVar1;
    pFVar5 = UniversalObjectLocator::FFragmentTypeHandle::Resolve
                       ((FFragmentTypeHandle *)((longlong)param_1 + 0x1e));
    if ((pFVar5 != (FFragmentType *)0x0) &&
       (pUVar2 = (pFVar5->PayloadType).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x370);
      pvVar6 = FUniversalObjectLocatorFragment::GetPayload(param_1);
      iVar4 = (*pcVar3)(pUVar2,pvVar6);
      uVar7 = uVar7 ^ (bVar1 >> 2) + 0x9e3779b9 + (uint)bVar1 * 0x40 + iVar4;
    }
    return uVar7;
  }
  return 0;
}

// Construct<FUniversalObjectLocator> @ 144343670

void __cdecl UE::CoreUObject::Private::Construct<FUniversalObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FUniversalObjectLocator> @ 144343680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUniversalObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FUniversalObjectLocator> @ 144343690

void __cdecl UE::CoreUObject::Private::Destruct<FUniversalObjectLocator>(void *param_1)

{
  DestructItems<FUniversalObjectLocatorFragment,int>
            (*(FUniversalObjectLocatorFragment **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FUniversalObjectLocator> @ 1443436d0

bool __cdecl
UE::CoreUObject::Private::Copy<FUniversalObjectLocator>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FUniversalObjectLocatorFragment *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FUniversalObjectLocatorFragment,int>
                  ((FUniversalObjectLocatorFragment *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FUniversalObjectLocatorFragment *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FUniversalObjectLocatorFragment,FUniversalObjectLocatorFragment,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FUniversalObjectLocator> @ 1443437c0

bool __cdecl
UE::CoreUObject::Private::Identical<FUniversalObjectLocator>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  if (*(int *)((longlong)param_1 + 8) == *(int *)((longlong)param_2 + 8)) {
    bVar1 = CompareItems<FUniversalObjectLocatorFragment,int>
                      (*(FUniversalObjectLocatorFragment **)param_1,
                       *(FUniversalObjectLocatorFragment **)param_2,*(int *)((longlong)param_1 + 8))
    ;
    if (bVar1) {
      *param_4 = true;
      return true;
    }
  }
  *param_4 = false;
  return true;
}

// ExportTextItem<FUniversalObjectLocator> @ 144343800

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FUniversalObjectLocator>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  FUniversalObjectLocator local_18;
  
  if (param_3 != (void *)0x0) {
    bVar1 = FUniversalObjectLocator::ExportTextItem(param_2,param_1,param_3,param_4,param_5,param_6)
    ;
    return bVar1;
  }
  bVar1 = FUniversalObjectLocator::ExportTextItem(param_2,param_1,&local_18,param_4,param_5,param_6)
  ;
  DestructItems<FUniversalObjectLocatorFragment,int>((FUniversalObjectLocatorFragment *)0x0,0);
  return bVar1;
}

// ImportTextItem<FUniversalObjectLocator> @ 144343860

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FUniversalObjectLocator>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  FParseStringResult *pFVar5;
  UObject *pUVar6;
  FParseStringParams local_res8 [8];
  TStringView<wchar_t> local_68;
  FParseStringResult local_58;
  FSoftObjectPath local_40;
  
  pwVar1 = *param_1;
  if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 == L'(')) {
    pwVar3 = wcschr(pwVar1,L')');
    pwVar1 = *param_1;
    if ((pwVar1 != pwVar3) && (lVar4 = (longlong)pwVar3 - (longlong)pwVar1 >> 1, lVar4 < 0x7fffffff)
       ) {
      local_68.DataPtr = pwVar1 + 1;
      local_res8[0].Flags = None;
      local_68.Size = (int)lVar4 + -1;
      pFVar5 = FUniversalObjectLocator::TryParseString(param_2,&local_58,&local_68,local_res8);
      bVar2 = pFVar5->bSuccess;
      if (local_58.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (bVar2 != false) {
        *param_1 = pwVar3 + 1;
        return true;
      }
    }
  }
  local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_40.AssetPath.PackageName.Number = 0;
  local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_40.AssetPath.AssetName.Number = 0;
  local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.SubPathString.Data.ArrayNum = 0;
  local_40.SubPathString.Data.ArrayMax = 0;
  bVar2 = FSoftObjectPath::ImportTextItem(&local_40,param_1,param_3,param_4,param_5,(FArchive *)0x0)
  ;
  if (bVar2) {
    pUVar6 = FSoftObjectPath::ResolveObject(&local_40);
    FUniversalObjectLocator::Reset(param_2,pUVar6,(UObject *)0x0,(UObject *)0x0);
    if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
  else {
    if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  return bVar2;
}

// StructuredSerializeFromMismatchedTag<FUniversalObjectLocator> @ 1443439d0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FUniversalObjectLocator>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FUniversalObjectLocator::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// GetStructTypeHash<FUniversalObjectLocator> @ 1443439f0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FUniversalObjectLocator>(void *param_1)

{
  int iVar1;
  uint uVar2;
  FUniversalObjectLocatorFragment *pFVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  uint uVar5;
  undefined1 auStackX_8 [8];
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar5 = 0;
  pFVar3 = *(FUniversalObjectLocatorFragment **)param_1;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar1) {
      `TCheckedPointerIterator<FUniversalObjectLocatorFragment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pFVar3 == pFVar4) break;
    uVar2 = ::GetTypeHash(pFVar3);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar2;
    pFVar3 = pFVar3 + 1;
  }
  return uVar5;
}

// Construct<FSubObjectLocator> @ 144343b00

void __cdecl UE::CoreUObject::Private::Construct<FSubObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSubObjectLocator> @ 144343b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSubObjectLocator> @ 144343b20

void __cdecl UE::CoreUObject::Private::Destruct<FSubObjectLocator>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSubObjectLocator> @ 144343b40

bool __cdecl
UE::CoreUObject::Private::Copy<FSubObjectLocator>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FSubObjectLocator> @ 144343c20

bool __cdecl
UE::CoreUObject::Private::Identical<FSubObjectLocator>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (iVar1 != *(int *)((longlong)param_2 + 8)) {
    *param_4 = iVar1 + *(int *)((longlong)param_2 + 8) == 1;
    return true;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)param_1,*(wchar_t **)param_2);
    *param_4 = iVar1 == 0;
    return true;
  }
  *param_4 = true;
  return true;
}

// GetStructTypeHash<FSubObjectLocator> @ 144343c80

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FSubObjectLocator>(void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  return uVar1;
}

// Construct<FDirectPathObjectLocator> @ 144343d30

void __cdecl UE::CoreUObject::Private::Construct<FDirectPathObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDirectPathObjectLocator> @ 144343d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDirectPathObjectLocator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FDirectPathObjectLocator> @ 144343d70

void __cdecl UE::CoreUObject::Private::Destruct<FDirectPathObjectLocator>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDirectPathObjectLocator> @ 144343dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FDirectPathObjectLocator>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x10);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FDirectPathObjectLocator> @ 144343eb0

bool __cdecl
UE::CoreUObject::Private::Identical<FDirectPathObjectLocator>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// GetStructTypeHash<FDirectPathObjectLocator> @ 144343ed0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FDirectPathObjectLocator>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 8);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  uVar4 = uVar4 * 0x40 + uVar3 + (int)((ulonglong)uVar1 >> 0x20) + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4
  ;
  if (1 < *(int *)((longlong)param_1 + 0x18)) {
    uVar3 = FCrc::Strihash_DEPRECATED<char8_t>
                      (*(int *)((longlong)param_1 + 0x18) + -1,*(uchar **)((longlong)param_1 + 0x10)
                      );
    return uVar3 + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
  }
  return uVar4;
}

// ComputeDebugHeaderLog2 @ 144347150

uchar __cdecl UE::UniversalObjectLocator::ComputeDebugHeaderLog2(ulong64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 8;
  if (8 < param_1) {
    iVar7 = (int)param_1;
  }
  iVar6 = 1;
  if (iVar7 != 0) {
    iVar6 = iVar7;
  }
  uVar1 = (ulonglong)(iVar6 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if (0x3f < (uint)lVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderCapacityLog2 <= 63",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return (uchar)lVar2;
}

// FindBestFragmentType @ 1443479e0

FFragmentType * __cdecl
UE::UniversalObjectLocator::FindBestFragmentType(UObject *param_1,UObject *param_2)

{
  int iVar1;
  uint uVar2;
  FRegistry *pFVar3;
  FFragmentType *pFVar4;
  FFragmentType *pFVar5;
  uint uVar6;
  FFragmentType *pFVar7;
  FFragmentType *pFVar8;
  undefined1 local_res18 [8];
  
  uVar6 = 0;
  pFVar3 = FRegistry::Get();
  iVar1 = (pFVar3->FragmentTypes).ArrayNum;
  pFVar4 = (FFragmentType *)(pFVar3->FragmentTypes).AllocatorInstance.Data;
  pFVar7 = pFVar4 + iVar1;
  pFVar8 = (FFragmentType *)0x0;
  while( true ) {
    if ((pFVar3->FragmentTypes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::UniversalObjectLocator::FFragmentType,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar7) break;
    uVar2 = (*(pFVar4->StaticBindings).Priority)(param_1,param_2);
    pFVar5 = pFVar4;
    if (uVar2 <= uVar6) {
      pFVar5 = pFVar8;
      uVar2 = uVar6;
    }
    uVar6 = uVar2;
    pFVar4 = pFVar4 + 1;
    pFVar8 = pFVar5;
  }
  if (pFVar8 == (FFragmentType *)0x0) {
    pFVar4 = (FFragmentType *)0x0;
  }
  else {
    pFVar4 = (FFragmentType *)0x0;
    if ((pFVar8->PayloadType).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
      pFVar4 = pFVar8;
    }
  }
  return pFVar4;
}

// MakeFragmentTypeHandle @ 144348890

FFragmentTypeHandle __cdecl
UE::UniversalObjectLocator::MakeFragmentTypeHandle(FFragmentType *param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  FRegistry *pFVar4;
  longlong in_RDX;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (in_RDX == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FragmentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FFragmentTypeHandle)uVar3;
    }
  }
  pFVar4 = FRegistry::Get();
  lVar6 = in_RDX - (longlong)(pFVar4->FragmentTypes).AllocatorInstance.Data;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  uVar7 = (lVar6 >> 4) - (lVar6 >> 0x3f);
  if (0xfe < uVar7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FragmentTypeOffset < std::numeric_limits<uint8>::max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x3e,L"Maximum number of UOL FragmentTypes reached");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FFragmentTypeHandle)uVar3;
    }
  }
  cVar5 = (char)uVar7;
  *(char *)&(param_1->InstanceBindings).Initialize = cVar5;
  if (cVar5 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandleOffset != 0xff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FFragmentTypeHandle)uVar3;
    }
  }
  return (FFragmentTypeHandle)(uchar)param_1;
}

// ParseUnsignedInteger @ 144348970

bool __cdecl
UE::UniversalObjectLocator::ParseUnsignedInteger
          (TStringView<wchar_t> *param_1,uint *param_2,int *param_3)

{
  ushort _C;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar4 = param_1->Size;
  if (iVar4 == 0) {
    return false;
  }
  uVar7 = 0;
  iVar8 = 1;
  iVar6 = 0;
  if (0 < iVar4) {
    lVar9 = 0;
    do {
      if (((iVar6 < 0) || (iVar4 <= iVar6)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      _C = *(ushort *)(lVar9 + (longlong)param_1->DataPtr);
      iVar4 = iswdigit(_C);
      if (iVar4 == 0) break;
      iVar4 = _C - 0x30;
      if ((uVar7 != 0) || (iVar4 != 0)) {
        iVar4 = iVar4 * iVar8;
        iVar8 = iVar8 * 10;
        if (uVar7 * 10 < uVar7) {
          return false;
        }
        uVar5 = uVar7 * 10 + iVar4;
        bVar2 = uVar5 < uVar7;
        uVar7 = uVar5;
        if (bVar2) {
          return false;
        }
      }
      iVar4 = param_1->Size;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 2;
    } while (iVar6 < iVar4);
    bVar2 = true;
    if (iVar6 == 0) goto LAB_144348a47;
    *param_2 = uVar7;
    if (param_3 != (int *)0x0) {
      *param_3 = iVar6;
    }
  }
  bVar2 = iVar6 == 0;
LAB_144348a47:
  return !bVar2;
}

