// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// AddGeometry @ 143e096c0

void __thiscall
Chaos::FTrackedGeometryManager::AddGeometry
          (FTrackedGeometryManager *this,TSerializablePtr<Chaos::FImplicitObject> param_1,
          FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TPairInitializer<Chaos::TSerializablePtr<Chaos::FImplicitObject>_const_&,FString_const_&>
  local_res8;
  FString **local_18;
  FString *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  local_res8.Value = (FString *)param_1.Ptr;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString>,TDefaultMapHashableKeyFuncs<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::TSerializablePtr<Chaos::FImplicitObject>_const_&,FString_const_&>_>
            ((TSet<TTuple<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString>,TDefaultMapHashableKeyFuncs<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_18);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// DumpMemoryUsage @ 143e1b8d0

void __thiscall
Chaos::FTrackedGeometryManager::DumpMemoryUsage
          (FTrackedGeometryManager *this,FOutputDevice *param_1)

{
  undefined1 *puVar1;
  FMemInfo *pFVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  code *pcVar5;
  FOutputDevice *this_00;
  FTrackedGeometryManager *pFVar6;
  bool bVar7;
  FChaosArchiveContext *pFVar8;
  FChaosArchiveContext *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  FIdentityFunctor local_res8 [8];
  FOutputDevice *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_268;
  undefined8 local_260;
  int local_258;
  FMemInfo local_250;
  undefined8 local_228;
  void *local_220;
  undefined8 local_218;
  FTrackedGeometryManager *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  FTrackedGeometryManager *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  void *local_1a8 [2];
  FArchiveState local_198;
  undefined8 local_108;
  void **local_100;
  undefined8 local_f8;
  FArchiveProxy local_e8;
  FChaosArchiveContext *local_50;
  
  puVar1 = &(this->SharedGeometry).field_0x10;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  iStack_208 = 0;
  iVar19 = *(int *)&(this->SharedGeometry).field_0x28;
  uStack_204 = 1;
  local_258 = 0;
  iStack_1f4 = 0;
  local_1f0 = iStack_208;
  if (iVar19 != 0) {
    puVar18 = *(uint **)&(this->SharedGeometry).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_1f0 = 0;
    iStack_208 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)iStack_208;
      local_1f0 = local_1f0 + 0x20;
      iStack_208 = iStack_208 + 1;
      iStack_1f4 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_208) goto LAB_143e1b97d;
      uVar16 = puVar18[lVar10 + 1];
    }
    uStack_204 = -uVar16 & uVar16;
    uVar11 = (ulonglong)uStack_204 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1e0 = (int)lVar10;
    iStack_1f4 = local_1f0 + -1 + local_1e0;
    if (iVar19 < iStack_1f4) {
      iStack_1f4 = iVar19;
    }
  }
LAB_143e1b97d:
  uVar16 = *(uint *)&(this->SharedGeometry).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  iStack_1e8 = *(int *)&(this->SharedGeometry).field_0x8 -
               *(int *)&(this->SharedGeometry).field_0x34;
  uStack_1f8 = 0xffffffff;
  TStack_1d0._padding_ = CONCAT44(uStack_204,iStack_208);
  TStack_1d0.CurrentBitIndex = iStack_1f4;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_1d0._28_4_ = iStack_1f4;
  TStack_1d0.BaseBitIndex = local_1f0;
  uStack_1b0 = CONCAT44(uStack_1e4,iStack_1e8);
  local_res10 = param_1;
  local_210 = this;
  local_200 = puVar1;
  iStack_1ec = iStack_1f4;
  local_1d8 = this;
  TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar19 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->SharedGeometry).field_0x28;
  iVar19 = local_258;
  if (uVar16 != uVar3) {
    puVar17 = *(undefined1 **)&(this->SharedGeometry).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143e1ba90;
      uVar16 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1dc = (int)lVar10;
    uVar16 = local_1dc + -1 + uVar14;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_143e1ba90:
  while( true ) {
    pFVar6 = local_1d8;
    if (*(int *)&(local_1d8->SharedGeometry).field_0x8 -
        *(int *)&(local_1d8->SharedGeometry).field_0x34 != (int)uStack_1b0) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_1d0.CurrentBitIndex == uVar16) &&
        (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this)) {
      local_258 = iVar19;
      AlgoImpl::
      IntroSortInternal<_Chaos::FTrackedGeometryManager::DumpMemoryUsage_::__l2::FMemInfo,int,FIdentityFunctor,TDereferenceWrapper<_Chaos::FTrackedGeometryManager::DumpMemoryUsage_::__l2::FMemInfo,TLess<void>_>_>
                ((FMemInfo *)local_268.Data,(int)local_260,local_res8[0],(TLess<void> *)local_res18)
      ;
      this_00 = local_res10;
      FOutputDevice::Log(local_res10,L"");
      FOutputDevice::Log(this_00,L"Chaos Tracked Geometry:");
      FOutputDevice::Log(this_00,L"");
      iVar19 = (int)local_260;
      uVar11 = (ulonglong)(int)local_260;
      pFVar2 = (FMemInfo *)(local_268.Data + uVar11 * 0x28);
      pFVar13 = local_268.Data + 0x18;
      while( true ) {
        if ((int)uVar11 != iVar19) {
          `TCheckedPointerIterator<`Chaos::FTrackedGeometryManager::DumpMemoryUsage'::__l2::FMemInfo,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((FMemInfo *)(pFVar13 + -0x18) == pFVar2) break;
        FOutputDevice::LogfImpl(this_00,L"%-10d %s ToString:%s");
        uVar11 = local_260 & 0xffffffff;
        pFVar13 = pFVar13 + 0x28;
      }
      FOutputDevice::LogfImpl(this_00,L"%-10d Total");
      DestructItems<_Chaos::FTrackedGeometryManager::DumpMemoryUsage_::__l2::FMemInfo,int>
                ((FMemInfo *)local_268.Data,(int)local_260);
      if ((FMemInfo *)local_268.Data != (FMemInfo *)0x0) {
        FMemory::Free(local_268.Data);
      }
      return;
    }
    local_250.DebugInfo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar15 = (undefined8 *)
              ((longlong)TStack_1d0.CurrentBitIndex * 0x20 + *(longlong *)&pFVar6->SharedGeometry);
    local_250.DebugInfo.Data.ArrayNum = 0;
    local_250.DebugInfo.Data.ArrayMax = 0;
    local_250.ToString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ToString.Data.ArrayNum = 0;
    local_250.ToString.Data.ArrayMax = 0;
    if (&local_250.DebugInfo != (FString *)(puVar15 + 1)) {
      uVar14 = *(uint *)(puVar15 + 2);
      _Src = (void *)puVar15[1];
      local_250.DebugInfo.Data.ArrayMax = 0;
      local_250.DebugInfo.Data.ArrayNum = uVar14;
      if (uVar14 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar14,0,(ForAnyElementType *)&local_250.DebugInfo,uVar14,
                   &local_250.DebugInfo.Data.ArrayMax);
        memcpy(local_250.DebugInfo.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar14 * 2);
      }
    }
    pFVar9 = (FChaosArchiveContext *)0x0;
    local_220 = (void *)0x0;
    local_218 = 0;
    local_198._padding_ = 0;
    local_198.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_228 = 0;
    local_198.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_198.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_198.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_198._40_8_ = 0;
    local_198.ArSerializingDefaults = 0;
    local_198.ArPortFlags = 0;
    local_198.ArMaxSerializeSize = 0;
    local_198.ArUEVer.FileVersionUE4 = 0;
    local_198.ArUEVer.FileVersionUE5 = 0;
    local_198.ArLicenseeUEVer = 0;
    local_198.ArEngineVer.Major = 0;
    local_198.ArEngineVer.Minor = 0;
    local_198.ArEngineVer.Patch = 0;
    local_198.ArEngineVer._6_2_ = 0;
    local_198.ArEngineVer.Changelist = 0;
    local_198.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_198.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_198.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_198.SerializedProperty = (FProperty *)0x0;
    local_198.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_198.bCustomVersionsAreReset = false;
    local_198._129_7_ = 0;
    local_198.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_198);
    local_108 = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_100 = &local_220;
    local_f8 = local_228;
    FArchiveState::SetIsSaving(&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveProxy::FArchiveProxy(&local_e8,(FArchive *)&local_198);
    local_e8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    pFVar8 = ::operator_new(0x158);
    if (pFVar8 != (FChaosArchiveContext *)0x0) {
      pFVar9 = FChaosArchiveContext::FChaosArchiveContext(pFVar8);
    }
    plVar4 = (longlong *)*puVar15;
    local_50 = pFVar9;
    (**(code **)(*plVar4 + 0x100))(plVar4,&local_e8);
    puVar15 = (undefined8 *)(**(code **)(*plVar4 + 0xf8))(plVar4,local_1a8);
    if (&local_250.ToString != (FString *)puVar15) {
      if (local_250.ToString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.ToString.Data.AllocatorInstance.Data);
      }
      local_250.ToString.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar15;
      *puVar15 = 0;
      local_250.ToString.Data._8_8_ = puVar15[1];
      puVar15[1] = 0;
    }
    if (local_1a8[0] != (void *)0x0) {
      FMemory::Free(local_1a8[0]);
    }
    local_250.NumBytes = (uint)local_218;
    if (((local_268.Data <= &local_250) &&
        (&local_250 < (FMemInfo *)(local_268.Data + (longlong)local_260._4_4_ * 0x28))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar12 = (int)local_260;
    if ((int)local_260 == local_260._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&local_268,(int *)((longlong)&local_260 + 4));
    }
    local_260 = CONCAT44(local_260._4_4_,iVar12 + 1);
    pFVar13 = local_268.Data + (longlong)iVar12 * 0x28;
    *(uint *)&pFVar13->field_0x0 = local_250.NumBytes;
    ::FString::FString((FString *)(pFVar13 + 8),&local_250.DebugInfo);
    ::FString::FString((FString *)(pFVar13 + 0x18),&local_250.ToString);
    pFVar8 = local_50;
    iVar19 = iVar19 + local_250.NumBytes;
    if (local_50 != (FChaosArchiveContext *)0x0) {
      FChaosArchiveContext::~FChaosArchiveContext(local_50);
      ::operator_delete(pFVar8,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_e8);
    FArchive::~FArchive((FArchive *)&local_198);
    if (local_220 != (void *)0x0) {
      FMemory::Free(local_220);
    }
    if (local_250.ToString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.ToString.Data.AllocatorInstance.Data);
    }
    if (local_250.DebugInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.DebugInfo.Data.AllocatorInstance.Data);
    }
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Get @ 143e236d0

FTrackedGeometryManager * __cdecl Chaos::FTrackedGeometryManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton.CriticalSection,4000);
      atexit(`Chaos::FTrackedGeometryManager::Get'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// RemoveGeometry @ 143e430a0

void __thiscall
Chaos::FTrackedGeometryManager::RemoveGeometry
          (FTrackedGeometryManager *this,FImplicitObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSerializablePtr<Chaos::FImplicitObject> local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res8.Ptr = param_1;
  if (*(int *)&(this->SharedGeometry).field_0x8 != *(int *)&(this->SharedGeometry).field_0x34) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    TSet<TTuple<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString>,TDefaultMapHashableKeyFuncs<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::TSerializablePtr<Chaos::FImplicitObject>_>
              ((TSet<TTuple<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString>,TDefaultMapHashableKeyFuncs<Chaos::TSerializablePtr<Chaos::FImplicitObject>,FString,0>,FDefaultSetAllocator>
                *)this,uVar3 >> 0x10 ^ uVar3,&local_res8);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

