// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// Add @ 14536a860

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::Add
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1,
          FCaptureComponentSceneState *param_2)

{
  code *pcVar1;
  bool bVar2;
  FCaptureComponentSceneState *pFVar3;
  FReflectionCaptureCacheEntry *pFVar4;
  TPairInitializer<UReflectionCaptureComponent_const_*_const_&,FGuid_const_&> local_res10;
  UReflectionCaptureComponent *local_res20;
  FReflectionCaptureCacheEntry local_38;
  UReflectionCaptureComponent **local_28;
  FGuid *local_20;
  
  if (param_1 == (UReflectionCaptureComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCaptureComponentSceneState *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = AddReference(this,param_1);
  if (pFVar3 == (FCaptureComponentSceneState *)0x0) {
    local_38.SceneState = *param_2;
    local_38.RefCount = 1;
    pFVar4 = TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
             ::Emplace<FGuid_const_&,FReflectionCaptureCacheEntry>
                       ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                         *)&this->CaptureData,&param_1->MapBuildDataId,&local_38);
    local_28 = &local_res20;
    local_res20 = param_1;
    local_20 = &param_1->MapBuildDataId;
    TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UReflectionCaptureComponent_const_*_const_&,FGuid_const_&>_>
              ((TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
                *)this,&local_res10,(bool *)&local_28);
    pFVar3 = &pFVar4->SceneState;
  }
  return pFVar3;
}

// AddReference @ 14536c360

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::AddReference
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCaptureComponentSceneState *pFVar5;
  ulong64 uVar6;
  int *piVar7;
  
  if (param_1 == (UReflectionCaptureComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                       ,0x120,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCaptureComponentSceneState *)(*pcVar2)();
      return pFVar5;
    }
  }
  bVar3 = RemapRegisteredComponentMapBuildDataId(this,param_1);
  uVar6 = CityHash64((char *)&param_1->MapBuildDataId,0x10);
  iVar4 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                      *)&this->CaptureData,(uint)uVar6,&param_1->MapBuildDataId);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->CaptureData + (longlong)iVar4 * 0x24;
    piVar7 = (int *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      if (!bVar3) {
        *piVar7 = *piVar7 + 1;
      }
      return (FCaptureComponentSceneState *)(piVar7 + 1);
    }
  }
  return (FCaptureComponentSceneState *)0x0;
}

// Empty @ 14537c930

void __thiscall FReflectionCaptureCache::Empty(FReflectionCaptureCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->CaptureData).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                      *)&this->CaptureData);
  }
  puVar1 = &(this->CaptureData).field_0xc;
  *(undefined4 *)&(this->CaptureData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)&this->CaptureData,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CaptureData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CaptureData).field_0x34 = 0;
  iVar2 = *(int *)&(this->CaptureData).field_0x2c;
  *(undefined4 *)&(this->CaptureData).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CaptureData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CaptureData).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CaptureData).field_0x48 = 1;
    TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
              *)&this->CaptureData);
  }
  bVar3 = 1 < *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x48;
  if (!bVar3) {
    TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->RegisteredComponentMapBuildDataIds).field_0xc;
  *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x34 = 0;
  iVar2 = *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x2c;
  *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->RegisteredComponentMapBuildDataIds).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->RegisteredComponentMapBuildDataIds).field_0x48 = 1;
    TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// Find @ 1453868e0

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::Find(FReflectionCaptureCache *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  FCaptureComponentSceneState *pFVar4;
  FCaptureComponentSceneState *pFVar5;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                      *)&this->CaptureData,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->CaptureData).field_0x0 + (longlong)iVar2 * 0x24;
    pFVar5 = (FCaptureComponentSceneState *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar5 = (FCaptureComponentSceneState *)0x0;
    }
    pFVar4 = (FCaptureComponentSceneState *)&pFVar5->AverageBrightness;
    if (pFVar5 == (FCaptureComponentSceneState *)0x0) {
      pFVar4 = (FCaptureComponentSceneState *)0x0;
    }
    return pFVar4;
  }
  return (FCaptureComponentSceneState *)0x0;
}

// Find @ 145386960

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::Find(FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  FCaptureComponentSceneState *pFVar1;
  FGuid *pFVar2;
  
  if (param_1 != (UReflectionCaptureComponent *)0x0) {
    pFVar1 = Find(this,&param_1->MapBuildDataId);
    if (pFVar1 != (FCaptureComponentSceneState *)0x0) {
      return pFVar1;
    }
    pFVar2 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,param_1);
    if (pFVar2 != (FGuid *)0x0) {
      pFVar1 = Find(this,pFVar2);
      return pFVar1;
    }
  }
  return (FCaptureComponentSceneState *)0x0;
}

// Find @ 1453869c0

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::Find(FReflectionCaptureCache *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  FCaptureComponentSceneState *pFVar4;
  FCaptureComponentSceneState *pFVar5;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                      *)&this->CaptureData,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->CaptureData).field_0x0 + (longlong)iVar2 * 0x24;
    pFVar5 = (FCaptureComponentSceneState *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar5 = (FCaptureComponentSceneState *)0x0;
    }
    pFVar4 = (FCaptureComponentSceneState *)&pFVar5->AverageBrightness;
    if (pFVar5 == (FCaptureComponentSceneState *)0x0) {
      pFVar4 = (FCaptureComponentSceneState *)0x0;
    }
    return pFVar4;
  }
  return (FCaptureComponentSceneState *)0x0;
}

// Find @ 145386a40

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::Find(FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  FCaptureComponentSceneState *pFVar1;
  FGuid *pFVar2;
  
  if (param_1 != (UReflectionCaptureComponent *)0x0) {
    pFVar1 = Find(this,&param_1->MapBuildDataId);
    if (pFVar1 != (FCaptureComponentSceneState *)0x0) {
      return pFVar1;
    }
    pFVar2 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,param_1);
    if (pFVar2 != (FGuid *)0x0) {
      pFVar1 = Find(this,pFVar2);
      return pFVar1;
    }
  }
  return (FCaptureComponentSceneState *)0x0;
}

// FindChecked @ 145386b40

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::FindChecked
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCaptureComponentSceneState *pFVar3;
  FGuid *pFVar4;
  
  if (param_1 != (UReflectionCaptureComponent *)0x0) {
    pFVar3 = Find(this,&param_1->MapBuildDataId);
    if (pFVar3 != (FCaptureComponentSceneState *)0x0) {
      return pFVar3;
    }
    pFVar4 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,param_1);
    if ((pFVar4 != (FGuid *)0x0) &&
       (pFVar3 = Find(this,pFVar4), pFVar3 != (FCaptureComponentSceneState *)0x0)) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Found",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                     ,0x104,L"");
  if (!bVar2) {
    return (FCaptureComponentSceneState *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FCaptureComponentSceneState *)(*pcVar1)();
  return pFVar3;
}

// FindChecked @ 145386bd0

FCaptureComponentSceneState * __thiscall
FReflectionCaptureCache::FindChecked
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCaptureComponentSceneState *pFVar3;
  FGuid *pFVar4;
  
  if (param_1 != (UReflectionCaptureComponent *)0x0) {
    pFVar3 = Find(this,&param_1->MapBuildDataId);
    if (pFVar3 != (FCaptureComponentSceneState *)0x0) {
      return pFVar3;
    }
    pFVar4 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,param_1);
    if ((pFVar4 != (FGuid *)0x0) &&
       (pFVar3 = Find(this,pFVar4), pFVar3 != (FCaptureComponentSceneState *)0x0)) {
      return pFVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Found",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                     ,0xfc,L"");
  if (!bVar2) {
    return (FCaptureComponentSceneState *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FCaptureComponentSceneState *)(*pcVar1)();
  return pFVar3;
}

// GetKeys @ 14538dbb0

int __thiscall
FReflectionCaptureCache::GetKeys
          (FReflectionCaptureCache *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                      *)&this->CaptureData,param_1);
  return iVar1;
}

// GetKeys @ 14538dbc0

int __thiscall
FReflectionCaptureCache::GetKeys
          (FReflectionCaptureCache *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  
  iVar1 = TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
          ::GetKeys<DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
                    ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                      *)&this->CaptureData,param_1);
  return iVar1;
}

// Prune @ 14539ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FReflectionCaptureCache::Prune
          (FReflectionCaptureCache *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FGuid *pFVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
  *this_00;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_01;
  longlong *plVar7;
  bool bVar8;
  ulong64 uVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  int local_174;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
  *local_138;
  FReflectionCaptureCache *local_130;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_138 = (TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
               *)&this->CaptureData;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  uVar15 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_130 = this;
  local_128 = param_1;
  TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
  ::GetKeys<DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
            ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
              *)local_138,&local_98);
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
            (&local_98,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_e8,param_1
            );
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar14 = local_e8._8_4_ - local_b4;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  uVar14 = local_c0;
  local_150 = 0;
  uStack_164 = 1;
  uStack_154 = local_150;
  if (local_c0 != 0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar17 = *puVar16;
    local_150 = 0;
    uVar15 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)(int)uVar15;
      local_150 = local_150 + 0x20;
      uVar15 = uVar15 + 1;
      uStack_154 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14539eee0;
      uVar17 = puVar16[lVar12 + 1];
    }
    uStack_164 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_164 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_140 = (int)lVar12;
    uStack_154 = (local_150 - 1) + local_140;
    if ((int)local_c0 < (int)uStack_154) {
      uStack_154 = local_c0;
    }
  }
LAB_14539eee0:
  iStack_148 = local_e8._8_4_ - local_b4;
  local_170 = (longlong *)local_e8;
  local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
  uStack_158 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_154;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  uVar17 = local_c0 & 0xffffffe0;
  TStack_118._padding_ = CONCAT44(uStack_164,uVar15);
  iVar13 = (int)local_c0 >> 5;
  TStack_118._28_4_ = uStack_154;
  TStack_118.BaseBitIndex = local_150;
  uStack_f8 = CONCAT44(uStack_144,iStack_148);
  bVar11 = (byte)local_c0;
  uStack_168 = uVar15;
  uStack_14c = uStack_154;
  local_120 = local_170;
  TStack_118.Array = local_160;
  if (((int)local_c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return iVar13;
  }
  this_00 = local_138;
  if (uVar14 != local_c0) {
    puVar16 = (uint *)(local_e8 + 0x10);
    if (local_c8 != (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar15 = -1 << (bVar11 & 0x1f) & puVar16[iVar13];
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = local_c0;
      if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14539efe5;
      uVar15 = puVar16[lVar12 + 1];
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_13c = (int)lVar12;
    uVar14 = local_13c + -1 + uVar17;
    if ((int)local_c0 < (int)uVar14) {
      uVar14 = local_c0;
    }
  }
LAB_14539efe5:
  while( true ) {
    plVar7 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      local_178[0] = 0;
      `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (((TStack_118.CurrentBitIndex == uVar14) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
       (plVar7 == (longlong *)local_e8)) break;
    pFVar2 = (FGuid *)(*plVar7 + (longlong)TStack_118.CurrentBitIndex * 0x18);
    uVar9 = CityHash64((char *)pFVar2,0x10);
    iVar13 = TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>(this_00,(uint)uVar9,pFVar2);
    if (iVar13 != -1) {
      lVar12 = *(longlong *)&this_00->Elements + (longlong)iVar13 * 0x24;
      lVar10 = lVar12 + 0x10;
      if (lVar12 == 0) {
        lVar10 = 0;
      }
      if (lVar10 != 0) {
        local_174 = *(int *)(lVar10 + 4);
        if (local_174 != -1) {
          pFVar4 = (param_2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_174) &&
              ((FScriptContainerElement *)&local_174 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar13 = (*pcVar6)();
            return iVar13;
          }
          iVar13 = param_2->ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar13 + 1;
          *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_174;
        }
        if (*(int *)&(local_130->CaptureData).field_0x8 !=
            *(int *)&(local_130->CaptureData).field_0x34) {
          uVar9 = CityHash64((char *)pFVar2,0x10);
          TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>(this_00,(uint)uVar9,pFVar2);
        }
      }
    }
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  iVar13 = param_2->ArrayNum;
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  this_01 = local_128;
  local_128->HashSize = 0;
  FVar5 = (local_128->Hash).SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this_01->Elements);
  return iVar13;
}

// RegisterComponentMapBuildDataId @ 14539f510

void __thiscall
FReflectionCaptureCache::RegisterComponentMapBuildDataId
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  TPairInitializer<UReflectionCaptureComponent_const_*_const_&,FGuid_const_&> local_res8 [2];
  FGuid **local_18;
  FGuid *local_10;
  
  local_18 = &local_res8[0].Value;
  local_10 = &param_1->MapBuildDataId;
  local_res8[0].Value = (FGuid *)param_1;
  TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UReflectionCaptureComponent_const_*_const_&,FGuid_const_&>_>
            ((TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// RemapRegisteredComponentMapBuildDataId @ 14539fda0

bool __thiscall
FReflectionCaptureCache::RemapRegisteredComponentMapBuildDataId
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  FGuid *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ForElementType<unsigned_int> FVar6;
  TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
  *this_00;
  FReflectionCaptureCache *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  FGuid local_f8;
  FReflectionCaptureCacheEntry local_e8;
  uint *local_d8;
  TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
  *local_d0;
  FReflectionCaptureCache *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FReflectionCaptureCache *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if ((param_1 == (UReflectionCaptureComponent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                         ,0x177,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  pFVar10 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
            ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                    *)this,param_1);
  if ((pFVar10 != (FGuid *)0x0) &&
     (pFVar1 = &param_1->MapBuildDataId,
     (((param_1->MapBuildDataId).D != pFVar10->D || (param_1->MapBuildDataId).C != pFVar10->C) ||
     (param_1->MapBuildDataId).B != pFVar10->B) || pFVar1->A != pFVar10->A)) {
    local_f8.A = pFVar10->A;
    local_f8.B = pFVar10->B;
    local_f8.C = pFVar10->C;
    local_f8.D = pFVar10->D;
    local_d0 = (TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
                *)&this->CaptureData;
    uVar11 = CityHash64((char *)&local_f8,0x10);
    if (*(int *)&(this->CaptureData).field_0x8 != *(int *)&(this->CaptureData).field_0x34) {
      puVar13 = *(undefined1 **)&(this->CaptureData).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->CaptureData).field_0x38;
      }
      uVar16 = *(uint *)(puVar13 +
                        ((ulonglong)(*(int *)&(this->CaptureData).field_0x48 - 1) &
                        uVar11 & 0xffffffff) * 4);
      if (uVar16 != 0xffffffff) {
        lVar12 = *(longlong *)&(this->CaptureData).field_0x0;
        do {
          puVar21 = (uint *)(lVar12 + (longlong)(int)uVar16 * 0x24);
          if (((local_f8.D == puVar21[3] &&
               local_f8.C == *(uint *)(lVar12 + 8 + (longlong)(int)uVar16 * 0x24)) &&
              local_f8.B == puVar21[1]) && local_f8.A == *puVar21) {
            puVar15 = (uint *)0x0;
            local_d8 = puVar21 + 4;
            if (puVar21 == (uint *)0x0) {
              local_d8 = puVar15;
            }
            if (local_d8 == (uint *)0x0) {
              return false;
            }
            uVar16 = *(uint *)&(this->RegisteredComponentMapBuildDataIds).field_0x28;
            local_res20 = (ForElementType<unsigned_int>)
                          &(this->RegisteredComponentMapBuildDataIds).field_0x10;
            uStack_c0 = 0;
            uStack_bc = 1;
            local_a8 = 0;
            iVar17 = 0;
            uStack_ac = uStack_c0;
            if (uVar16 == 0) goto LAB_14539ffa4;
            puVar21 = *(uint **)&(this->RegisteredComponentMapBuildDataIds).field_0x20;
            if (puVar21 == (uint *)0x0) {
              puVar21 = (uint *)local_res20;
            }
            uVar22 = *puVar21;
            puVar18 = puVar15;
            puVar20 = puVar15;
            local_a8 = 0;
            uStack_c0 = 0;
            goto joined_r0x00014539ff5e;
          }
          uVar16 = puVar21[7];
        } while (uVar16 != 0xffffffff);
      }
    }
  }
  return false;
joined_r0x00014539ff5e:
  if (uVar22 != 0) goto LAB_14539ff7c;
  iVar17 = (int)puVar18;
  local_a8 = (int)puVar20 + 0x20;
  puVar20 = (uint *)(ulonglong)local_a8;
  uStack_c0 = iVar17 + 1;
  puVar18 = (uint *)(ulonglong)uStack_c0;
  if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c0) {
    iVar17 = *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x28;
    uStack_ac = uVar16;
    goto LAB_14539ffa4;
  }
  uVar22 = (puVar21 + 1)[iVar17];
  goto joined_r0x00014539ff5e;
LAB_14539ff7c:
  iVar17 = *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x28;
  uStack_bc = -uVar22 & uVar22;
  uVar2 = (ulonglong)uStack_bc * 2 + 1;
  lVar12 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  local_res18 = (int)lVar12;
  uStack_ac = (local_a8 - 1) + local_res18;
  if (iVar17 < (int)uStack_ac) {
    uStack_ac = uVar16;
  }
LAB_14539ffa4:
  uVar16 = *(uint *)&(this->RegisteredComponentMapBuildDataIds).field_0x28;
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x8 -
              *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x34;
  uVar22 = uVar16 & 0xffffffe0;
  uStack_b0 = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_bc,uStack_c0);
  TStack_90.CurrentBitIndex = uStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = this;
  local_b8 = (undefined1 *)local_res20;
  local_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
  if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  FVar6 = local_res20;
  uVar3 = *(int *)((longlong)local_res20 + 0x18);
  if (uVar16 != uVar3) {
    FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_res20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar22 = uVar22 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1453a00b0;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar12 * 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar22;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_1453a00b0:
  while( true ) {
    pFVar7 = local_98;
    if (*(int *)&(local_98->RegisteredComponentMapBuildDataIds).field_0x8 -
        *(int *)&(local_98->RegisteredComponentMapBuildDataIds).field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<UReflectionCaptureComponent_const_*,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    this_00 = local_d0;
    if (((TStack_90.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_90.Array == FVar6)) && (pFVar7 == this)) break;
    lVar12 = (longlong)TStack_90.CurrentBitIndex * 0x20 +
             *(longlong *)&pFVar7->RegisteredComponentMapBuildDataIds;
    if (((local_f8.D == *(uint *)(lVar12 + 0x14) && local_f8.C == *(uint *)(lVar12 + 0x10)) &&
        local_f8.B == *(uint *)(lVar12 + 0xc)) && local_f8.A == *(uint *)(lVar12 + 8)) {
      uVar5 = *(undefined8 *)&(param_1->MapBuildDataId).C;
      puVar15 = (uint *)(ulonglong)((int)puVar15 + 1);
      *(undefined8 *)(lVar12 + 8) = *(undefined8 *)pFVar1;
      *(undefined8 *)(lVar12 + 0x10) = uVar5;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  local_e8.SceneState.AverageBrightness = (float)local_d8[2];
  local_e8.SceneState.CubemapIndex = (int)((ulonglong)*(undefined8 *)local_d8 >> 0x20);
  local_e8.RefCount = (int)puVar15;
  if (*(int *)&(local_d0->Elements).field_0x8 != *(int *)&(local_d0->Elements).field_0x34) {
    uVar11 = CityHash64((char *)&local_f8,0x10);
    TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>(this_00,(uint)uVar11,&local_f8);
  }
  TSet<TTuple<FGuid,FReflectionCaptureCacheEntry>,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>,FDefaultSetAllocator>
  ::Shrink(this_00);
  TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
  ::Emplace<FGuid_const_&,FReflectionCaptureCacheEntry_const_&>
            ((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
              *)this_00,pFVar1,&local_e8);
  return true;
}

// Remove @ 1453a0530

bool __thiscall
FReflectionCaptureCache::Remove(FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  FReflectionCaptureCacheEntry *pFVar1;
  
  if (param_1 != (UReflectionCaptureComponent *)0x0) {
    RemapRegisteredComponentMapBuildDataId(this,param_1);
    pFVar1 = TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
             ::Find((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                     *)&this->CaptureData,&param_1->MapBuildDataId);
    if (pFVar1 != (FReflectionCaptureCacheEntry *)0x0) {
      if (pFVar1->RefCount < 2) {
        TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
        ::Remove((TMapBase<FGuid,FReflectionCaptureCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FReflectionCaptureCacheEntry,0>_>
                  *)&this->CaptureData,&param_1->MapBuildDataId);
        TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<UReflectionCaptureComponent_const_*,FGuid>,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>,FDefaultSetAllocator>
                  *)this,param_1);
        return true;
      }
      pFVar1->RefCount = pFVar1->RefCount + -1;
    }
  }
  return false;
}

// UnregisterComponentMapBuildDataId @ 1453b3da0

void __thiscall
FReflectionCaptureCache::UnregisterComponentMapBuildDataId
          (FReflectionCaptureCache *this,UReflectionCaptureComponent *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (*(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x8 ==
      *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x34) {
    return;
  }
  puVar6 = *(undefined1 **)&(this->RegisteredComponentMapBuildDataIds).field_0x40;
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  puVar1 = &(this->RegisteredComponentMapBuildDataIds).field_0x38;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  uVar5 = *(uint *)(puVar6 + (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                             (longlong)
                             *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x48 - 1U) *
                             4);
  if (uVar5 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar5 * 0x20;
      if (*(UReflectionCaptureComponent **)
           (lVar7 + *(longlong *)&this->RegisteredComponentMapBuildDataIds) == param_1) {
        if ((-1 < (int)uVar5) &&
           ((int)uVar5 < *(int *)&(this->RegisteredComponentMapBuildDataIds).field_0x28)) {
          puVar6 = *(undefined1 **)&(this->RegisteredComponentMapBuildDataIds).field_0x20;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &(this->RegisteredComponentMapBuildDataIds).field_0x10;
          }
          if ((*(uint *)(puVar6 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar5 & 0x1f) & 1) != 0) goto LAB_1453a0488;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_1453a0488:
        puVar6 = *(undefined1 **)&(this->RegisteredComponentMapBuildDataIds).field_0x40;
        lVar7 = *(longlong *)&this->RegisteredComponentMapBuildDataIds + lVar7;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        puVar8 = (uint *)(puVar6 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        while( true ) {
          uVar2 = *puVar8;
          if ((uVar2 == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar4)) break;
          if (uVar2 == uVar5) {
            *puVar8 = *(uint *)(lVar7 + 0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar5,1);
            return;
          }
          puVar8 = (uint *)(*(longlong *)&this->RegisteredComponentMapBuildDataIds + 0x18 +
                           (longlong)(int)uVar2 * 0x20);
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)(lVar7 + *(longlong *)&this->RegisteredComponentMapBuildDataIds + 0x18);
    } while (uVar5 != 0xffffffff);
  }
  return;
}

