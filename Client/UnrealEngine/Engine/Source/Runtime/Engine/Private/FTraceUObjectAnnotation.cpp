// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// NotifyUObjectDeleted @ 1488a28f0

void __thiscall
FTraceUObjectAnnotation::NotifyUObjectDeleted
          (FTraceUObjectAnnotation *this,UObjectBase *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  
  lpCriticalSection = &this->AnnotationMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x5f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).bIsTraceable = true;
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  pUStackX_8 = param_1;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnUObjectArrayShutdown @ 1488a2900

void __thiscall FTraceUObjectAnnotation::OnUObjectArrayShutdown(FTraceUObjectAnnotation *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 1488a2930

ulong64 __thiscall FTraceUObjectAnnotation::GetAllocatedSize(FTraceUObjectAnnotation *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->AnnotationMap).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->AnnotationMap).field_0xc * 0x18;
}

// ~FTraceUObjectAnnotation @ 1488b2a50

void __thiscall FTraceUObjectAnnotation::~FTraceUObjectAnnotation(FTraceUObjectAnnotation *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FTraceUObjectAnnotation__6B_;
  RemoveAllAnnotations(this);
  if (((this->AnnotationMapScopeLock).bIsSet != false) &&
     (lpCriticalSection = (LPCRITICAL_SECTION)(this->AnnotationMapScopeLock).TypedValue.Mutex,
     lpCriticalSection != (LPCRITICAL_SECTION)0x0)) {
    LeaveCriticalSection(lpCriticalSection);
    (this->AnnotationMapScopeLock).TypedValue.Mutex = (FWindowsRecursiveMutex *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AnnotationMapCritical);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// RemoveAllAnnotations @ 1488d6f70

void __thiscall FTraceUObjectAnnotation::RemoveAllAnnotations(FTraceUObjectAnnotation *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  
  lpCriticalSection = &this->AnnotationMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (this->AnnotationCacheValue).bIsTraceable = true;
  this->AnnotationCacheKey = (UObjectBase *)0x0;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  if (0 < iVar2 - iVar3) {
    FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveAnnotation @ 1488d70b0

void __thiscall
FTraceUObjectAnnotation::RemoveAnnotation(FTraceUObjectAnnotation *this,UObjectBase *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  
  lpCriticalSection = &this->AnnotationMapCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x5f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).bIsTraceable = true;
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  local_res8 = param_1;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

