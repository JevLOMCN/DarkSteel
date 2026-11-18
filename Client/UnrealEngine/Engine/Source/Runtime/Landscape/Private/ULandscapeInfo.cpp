// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 29

// ULandscapeInfo @ 145f02ea0

ULandscapeInfo * __thiscall
ULandscapeInfo::ULandscapeInfo(ULandscapeInfo *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeInfo__6B_;
  (this->LandscapeActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  *(undefined8 *)&this->XYtoComponentMap = 0;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x34 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x48 = 0;
  *(undefined8 *)&this->XYtoCollisionComponentMap = 0;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x34 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x48 = 0;
  (this->StreamingProxies_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingProxies_DEPRECATED).ArrayNum = 0;
  (this->StreamingProxies_DEPRECATED).ArrayMax = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x30 = 0xffffffff;
  (this->SelectedComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedComponents).HashSize = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x30 = 0xffffffff;
  (this->SelectedRegionComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedRegionComponents).HashSize = 0;
  *(undefined8 *)&this->SelectedRegion = 0;
  *(undefined8 *)&(this->SelectedRegion).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedRegion).field_0x20 = 0;
  *(undefined4 *)&(this->XYComponentBounds).field0_0x0 = 0x7fffffff;
  *(undefined4 *)((longlong)&(this->XYComponentBounds).field0_0x0 + 4) = 0x7fffffff;
  *(undefined4 *)((longlong)&(this->XYComponentBounds).field0_0x0 + 8) = 0x80000000;
  *(undefined4 *)((longlong)&(this->XYComponentBounds).field0_0x0 + 0xc) = 0x80000000;
  *(undefined4 *)&(this->SelectedRegion).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedRegion).field_0x34 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SelectedRegion).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x48 = 0;
  (this->SortedStreamingProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedStreamingProxies).ArrayNum = 0;
  (this->SortedStreamingProxies).ArrayMax = 0;
  return this;
}

// Find @ 145f0d200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULandscapeInfo * __cdecl ULandscapeInfo::Find(UWorld *param_1,FGuid *param_2)

{
  int iVar1;
  ULandscapeInfoMap *pUVar2;
  ulong64 uVar3;
  longlong lVar4;
  ULandscapeInfo *pUVar5;
  
  pUVar5 = (ULandscapeInfo *)0x0;
  if ((param_1 != (UWorld *)0x0) &&
     (((param_2->D != 0 || param_2->C != 0) || param_2->B != 0) || param_2->A != 0)) {
    pUVar2 = ULandscapeInfoMap::GetLandscapeInfoMap(param_1);
    uVar3 = CityHash64((char *)param_2,0x10);
    iVar1 = TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                        *)&pUVar2->Map,(uint)uVar3,param_2);
    if ((iVar1 != -1) &&
       (((lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(pUVar2->Map).field_0x0, lVar4 != 0 &&
         (pUVar5 = *(ULandscapeInfo **)(lVar4 + 0x10),
         UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar5 != (ULandscapeInfo *)0x0)))
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  return pUVar5;
}

// FindOrCreate @ 145f0d360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULandscapeInfo * __cdecl ULandscapeInfo::FindOrCreate(UWorld *param_1,FGuid *param_2)

{
  TMap<FGuid,TObjectPtr<ULandscapeInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>_>
  *this;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  ULandscapeInfo *pUVar9;
  ULandscapeInfoMap *pUVar10;
  ulong64 uVar11;
  longlong lVar12;
  UPackage *pUVar13;
  UClass *pUVar14;
  longlong *plVar15;
  undefined1 auStack_f8 [32];
  FName local_d8;
  TPairInitializer<FGuid_const_&,TObjectPtr<ULandscapeInfo>_&&> local_d0;
  FGuid *local_c0;
  TObjectPtr<ULandscapeInfo> **local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1759,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pUVar9 = (ULandscapeInfo *)(*pcVar1)();
    return pUVar9;
  }
  if ((param_1 == (UWorld *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x175a,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    pUVar9 = (ULandscapeInfo *)(*pcVar1)();
    return pUVar9;
  }
  pUVar10 = ULandscapeInfoMap::GetLandscapeInfoMap(param_1);
  this = &pUVar10->Map;
  uVar11 = CityHash64((char *)param_2,0x10);
  iVar8 = TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                      *)this,(uint)uVar11,param_2);
  if ((iVar8 != -1) &&
     (lVar12 = (longlong)iVar8 * 0x20 + *(longlong *)&this->field_0x0, lVar12 != 0)) {
    pUVar9 = *(ULandscapeInfo **)(lVar12 + 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 == (ULandscapeInfo *)0x0) goto LAB_145f0d43b;
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if (pUVar9 != (ULandscapeInfo *)0x0) {
      return pUVar9;
    }
  }
LAB_145f0d43b:
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  pUVar13 = GetTransientPackage();
  FVar5 = local_d8;
  if (local_d8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar13,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar14 = Z_Construct_UClass_ULandscapeInfo_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar14);
  FVar6 = local_d8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_d8.ComparisonIndex = FVar5.ComparisonIndex.Value;
  local_d8.Number = FVar5.Number;
  local_a8._16_4_ = local_d8.ComparisonIndex.Value;
  local_a8._20_4_ = local_d8.Number;
  local_a8._24_4_ = RF_Transient|RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_d8 = FVar6;
  local_a8._8_8_ = pUVar13;
  pUVar9 = (ULandscapeInfo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar15 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  (pUVar9->LandscapeGuid).A = param_2->A;
  (pUVar9->LandscapeGuid).B = uVar2;
  (pUVar9->LandscapeGuid).C = uVar3;
  (pUVar9->LandscapeGuid).D = uVar4;
  local_d0.Value = (TObjectPtr<ULandscapeInfo> *)pUVar9;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_b8 = &local_d0.Value;
  local_c0 = param_2;
  TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<ULandscapeInfo>_&&>_>
            ((TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
              *)this,&local_d0,(bool *)&local_c0);
  return pUVar9;
}

// ForEachLandscapeProxy @ 145f0d8c0

void __thiscall
ULandscapeInfo::ForEachLandscapeProxy
          (ULandscapeInfo *this,TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *param_1)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *_Src;
  char cVar2;
  FWeakObjectPtr FVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  FVar3 = (FWeakObjectPtr)FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
  if ((((FVar3 == (FWeakObjectPtr)0x0) || ((*(byte *)((longlong)FVar3 + 0x5d) & 2) != 0)) ||
      ((*(uint *)((longlong)FVar3 + 8) >> 0x1e & 1) != 0)) ||
     (local_res8 = FVar3,
     cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8), cVar2 != '\0')) {
    local_20 = (this->SortedStreamingProxies).ArrayNum;
    lVar8 = (longlong)local_20;
    _Src = (this->SortedStreamingProxies).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
      iVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar8 << 3);
      iVar6 = local_20;
    }
    pFVar1 = (FWeakObjectPtr *)(local_28.Data + (longlong)iVar6 * 8);
    FVar5.Data = local_28.Data;
    iVar7 = iVar6;
    while( true ) {
      if (iVar7 != iVar6) {
        `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if ((FWeakObjectPtr *)FVar5.Data == pFVar1) break;
      local_res8 = *(FWeakObjectPtr *)FVar5.Data;
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      if (((pUVar4 != (UObject *)0x0) && ((pUVar4[2].field_0xd & 2) == 0)) &&
         (((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0 &&
          (local_res18 = pUVar4,
          cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res18),
          cVar2 == '\0')))) break;
      FVar5.Data = FVar5.Data + 8;
      iVar7 = local_20;
    }
    if ((FWeakObjectPtr *)local_28.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// GetCurrentLevelLandscapeProxy @ 145f0eb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall
ULandscapeInfo::GetCurrentLevelLandscapeProxy(ULandscapeInfo *this,bool param_1)

{
  ALandscapeProxy *pAVar1;
  bool bVar2;
  ALandscapeProxy *local_res18 [2];
  ALandscapeProxy **local_28;
  undefined1 local_20;
  code *local_18;
  ALandscapeProxy ***local_10;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5741,"ULandscapeInfo::GetCurrentLevelLandscapeProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
               ,0x166d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5741);
  }
  local_28 = local_res18;
  local_res18[0] = (ALandscapeProxy *)0x0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`ULandscapeInfo::GetCurrentLevelLandscapeProxy'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
             ::Call;
  local_20 = param_1;
  ForEachLandscapeProxy(this,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_18);
  pAVar1 = local_res18[0];
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pAVar1;
}

// GetLandscapeProxy @ 145f104c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall ULandscapeInfo::GetLandscapeProxy(ULandscapeInfo *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  ALandscapeProxy *pAVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr *local_28;
  undefined1 local_20;
  code *local_18;
  FWeakObjectPtr **local_10;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
  if ((((!bVar4) ||
       (pAVar5 = (ALandscapeProxy *)FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr),
       pAVar5 == (ALandscapeProxy *)0x0)) || (pAVar5->_padding_ == 0)) ||
     ((*(byte *)(pAVar5->_padding_ + 0x98) & 1) == 0)) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5741,"ULandscapeInfo::GetCurrentLevelLandscapeProxy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                 ,0x166d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5741);
    }
    local_28 = &local_res8;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_10 = &local_28;
    local_20 = 1;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`ULandscapeInfo::GetCurrentLevelLandscapeProxy'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
               ::Call;
    ForEachLandscapeProxy(this,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_18);
    FVar3 = local_res8;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (FVar3 != (FWeakObjectPtr)0x0) {
      return (ALandscapeProxy *)FVar3;
    }
    pFVar6 = (FWeakObjectPtr *)(this->SortedStreamingProxies).AllocatorInstance.Data;
    iVar2 = (this->SortedStreamingProxies).ArrayNum;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if ((this->SortedStreamingProxies).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar6 == pFVar1) break;
      local_res8 = *pFVar6;
      pAVar5 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_res8);
      if (((pAVar5 != (ALandscapeProxy *)0x0) && (pAVar5->_padding_ != 0)) &&
         ((*(byte *)(pAVar5->_padding_ + 0x98) & 1) != 0)) {
        return pAVar5;
      }
      pFVar6 = pFVar6 + 1;
    }
    pAVar5 = (ALandscapeProxy *)0x0;
  }
  return pAVar5;
}

// GetLoadedBounds @ 145f10690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
ULandscapeInfo::GetLoadedBounds(ULandscapeInfo *this,TBox<double> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  ALandscapeProxy *pAVar7;
  UClass *pUVar8;
  TBox<double> *pTVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  int local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong local_170;
  ulonglong local_168;
  TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
  *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  int local_138;
  undefined8 local_134;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  char local_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  iVar12 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  bVar6 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
  if (bVar6) {
    pAVar7 = (ALandscapeProxy *)FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
    LandscapeInfoBoundsHelper::AccumulateBounds(pAVar7,__return_storage_ptr__);
  }
  local_98._0_8_ = 0;
  local_1a0 = &this->XYtoComponentMap;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->XYtoComponentMap).field_0x10;
  local_98._8_4_ = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_168 = 1;
  local_180 = 0;
  iVar2 = *(int *)&(this->XYtoComponentMap).field_0x28;
  uStack_194 = 1;
  uStack_184 = 0;
  iStack_198 = iVar12;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->XYtoComponentMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_190;
    }
    uStack_194 = *puVar13;
    while (uStack_194 == 0) {
      iVar12 = iVar12 + 1;
      local_180 = local_180 + 0x20;
      uStack_194 = 1;
      uStack_184 = iVar2;
      iStack_198 = iVar12;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145f107be;
      uStack_194 = puVar13[iVar12];
    }
    uStack_194 = ~(uStack_194 - 1) & uStack_194;
    uVar1 = (ulonglong)uStack_194 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_138 = (int)lVar3;
    uStack_184 = local_180 + -1 + local_138;
    iStack_198 = iVar12;
    if (iVar2 < (int)uStack_184) {
      uStack_184 = iVar2;
    }
  }
LAB_145f107be:
  uStack_17c = local_a4;
  uStack_188 = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_158.UnvisitedBitMask = 0xffffffff;
  TStack_158._28_4_ = local_a4;
  TStack_158.BaseBitIndex = local_180;
  local_160 = local_1a0;
  TStack_158.CurrentBitIndex = uStack_184;
  TStack_158.Array = local_190;
  if ((int)uStack_184 < *(int *)&(this->XYtoComponentMap).field_0x28) {
    do {
      lVar3 = *(longlong *)
               (*(longlong *)local_160 + 8 + (longlong)TStack_158.CurrentBitIndex * 0x18);
      if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0xa8);
        if (lVar3 != 0) {
          pUVar8 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
          iVar12 = (int)pUVar8->_padding_;
          if ((iVar12 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar12 * 8) ==
              &pUVar8->_padding_)) {
            local_170 = lVar3;
            TSet<ALandscapeProxy_*,DefaultKeyFuncs<ALandscapeProxy_*,0>,FDefaultSetAllocator>::
            Emplace<ALandscapeProxy_*_const_&>
                      ((TSet<ALandscapeProxy_*,DefaultKeyFuncs<ALandscapeProxy_*,0>,FDefaultSetAllocator>
                        *)local_98,(ALandscapeProxy **)&local_134,(bool *)&local_170);
            goto LAB_145f10899;
          }
        }
        local_170 = 0;
      }
LAB_145f10899:
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    } while (TStack_158.CurrentBitIndex < (TStack_158.Array)->NumBits);
  }
  uVar14 = local_70;
  iStack_198 = 0;
  local_180 = 0;
  uStack_184 = 0;
  if (local_70 != 0) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      iStack_198 = iStack_198 + 1;
      local_180 = local_180 + 0x20;
      uStack_184 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_198)
      goto LAB_145f10942;
      uVar11 = puVar13[iStack_198];
    }
    local_168 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = local_168 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_134._4_4_ = (int)lVar3;
    uStack_184 = local_134._4_4_ + -1 + local_180;
    if ((int)local_70 < (int)uStack_184) {
      uStack_184 = local_70;
    }
  }
LAB_145f10942:
  iStack_178 = local_98._8_4_ - local_64;
  local_1a0 = (TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
               *)local_98;
  uStack_194 = (uint)local_168;
  uVar11 = local_70 & 0xffffffe0;
  local_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_188 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_184;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_194,iStack_198);
  TStack_120._28_4_ = uStack_184;
  TStack_120.BaseBitIndex = local_180;
  uStack_100 = CONCAT44(uStack_174,iStack_178);
  iVar12 = (int)local_70 >> 5;
  bVar10 = (byte)local_70;
  uStack_17c = uStack_184;
  local_128 = (longlong *)local_1a0;
  TStack_120.Array = local_190;
  if ((int)local_70 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBox<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  if (uVar14 != local_70) {
    puVar13 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar14 = -1 << (bVar10 & 0x1f) & puVar13[iVar12];
    while (uVar14 == 0) {
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 + 0x20;
      uVar14 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar12)
      goto LAB_145f10a50;
      uVar14 = puVar13[iVar12];
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = (int)lVar3 + -1 + uVar11;
    if ((int)local_70 < (int)uVar14) {
      uVar14 = local_70;
    }
  }
LAB_145f10a50:
  while( true ) {
    plVar5 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_120.CurrentBitIndex == uVar14) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar5 == (longlong *)local_98)) break;
    ALandscapeProxy::GetProxyBounds
              (*(ALandscapeProxy **)(*plVar5 + (longlong)TStack_120.CurrentBitIndex * 0x10),
               (TBox<double> *)&local_f8._s_0);
    if (local_c8 != '\0') {
      if (((local_e0 - local_f8._s_0.X != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X)
          || (local_d8 - local_f8._s_0.Y != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)
          ) || (local_d0 - local_f8._s_0.Z !=
                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
        UE::Math::TBox<double>::operator+=(__return_storage_ptr__,(TBox<double> *)&local_f8._s_0);
      }
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<ALandscapeProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return __return_storage_ptr__;
}

// GetOverlappedComponents @ 145f115a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
ULandscapeInfo::GetOverlappedComponents
          (ULandscapeInfo *this,TTransform<double> *param_1,TBox2<double> *param_2,
          TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
          *param_3,TIntRect<int> *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TIntPoint<int> TVar10;
  ULandscapeComponent **ppUVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UObject *pUVar15;
  TVector<double> *pTVar16;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *pTVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  TTransform<double> *this_00;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar73;
  undefined4 uVar74;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  double dVar97;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined4 uVar105;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined1 local_340 [4];
  int local_33c;
  int iStack_338;
  ULandscapeInfo *local_330;
  TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&> local_328;
  int local_318;
  int iStack_314;
  int local_310;
  uint uStack_30c;
  int local_308;
  int iStack_304;
  longlong local_300;
  TIntRect<int> *local_2f8;
  TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
  *local_2e8;
  double dStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  int *local_2c8;
  longlong *plStack_2c0;
  TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
  *local_2b8;
  int iStack_2b0;
  uint uStack_2ac;
  undefined1 *local_2a8;
  undefined4 uStack_2a0;
  int iStack_29c;
  int local_298;
  int iStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&> local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  TVector<double> local_1a8;
  TVector<double> local_190 [2];
  TVector<double> local_160;
  TVector<double> local_148 [2];
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_2f8 = param_4;
  local_348 = (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
               *)param_3;
  local_330 = this;
  bVar12 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
  if (bVar12) {
    local_358 = 0;
    uStack_350 = 0;
    if (param_2->bIsValid == false) {
      TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                 *)param_3,
                *(int *)&(this->XYtoComponentMap).field_0x8 -
                *(int *)&(this->XYtoComponentMap).field_0x34);
      iVar18 = *(int *)&(this->XYtoComponentMap).field_0x28;
      puVar1 = &(this->XYtoComponentMap).field_0x10;
      iStack_2b0 = 0;
      local_2e8 = (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                   *)&this->XYtoComponentMap;
      uStack_2ac = 1;
      local_298 = 0;
      iStack_29c = 0;
      if (iVar18 != 0) {
        puVar27 = *(uint **)&(this->XYtoComponentMap).field_0x20;
        if (puVar27 == (uint *)0x0) {
          puVar27 = (uint *)puVar1;
        }
        uVar23 = *puVar27;
        while (uVar23 == 0) {
          lVar19 = (longlong)iStack_2b0;
          local_298 = local_298 + 0x20;
          iStack_2b0 = iStack_2b0 + 1;
          iStack_29c = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b0)
          goto LAB_145f116b1;
          uVar23 = puVar27[lVar19 + 1];
        }
        uStack_2ac = -uVar23 & uVar23;
        uVar2 = (ulonglong)uStack_2ac * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_330 = (ULandscapeInfo *)CONCAT44(local_330._4_4_,(int)lVar19);
        iStack_29c = (int)lVar19 + -1 + local_298;
        if (iVar18 < iStack_29c) {
          iStack_29c = iVar18;
        }
      }
LAB_145f116b1:
      uVar23 = *(uint *)&(this->XYtoComponentMap).field_0x28;
      uVar21 = uVar23 & 0xffffffe0;
      iStack_290 = *(int *)&(this->XYtoComponentMap).field_0x8 -
                   *(int *)&(this->XYtoComponentMap).field_0x34;
      uStack_2a0 = 0xffffffff;
      TStack_278._padding_ = CONCAT44(uStack_2ac,iStack_2b0);
      TStack_278.CurrentBitIndex = iStack_29c;
      TStack_278.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar23 >> 5;
      TStack_278._28_4_ = iStack_29c;
      TStack_278.BaseBitIndex = local_298;
      uStack_258 = CONCAT44(uStack_28c,iStack_290);
      local_2b8 = (TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
                   *)local_2e8;
      local_2a8 = puVar1;
      iStack_294 = iStack_29c;
      local_288.Value = (ULandscapeComponent **)local_2e8;
      TStack_278.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      uVar3 = *(uint *)&(this->XYtoComponentMap).field_0x28;
      if (uVar23 != uVar3) {
        puVar26 = *(undefined1 **)&(this->XYtoComponentMap).field_0x20;
        if (puVar26 == (undefined1 *)0x0) {
          puVar26 = puVar1;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar20 * 4);
        while (uVar23 == 0) {
          lVar19 = (longlong)iVar20;
          uVar21 = uVar21 + 0x20;
          iVar20 = iVar20 + 1;
          uVar23 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_145f117a9;
          uVar23 = *(uint *)(puVar26 + lVar19 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar23 = (int)lVar19 + -1 + uVar21;
        if ((int)uVar3 < (int)uVar23) {
          uVar23 = uVar3;
        }
      }
LAB_145f117a9:
      iVar18 = uStack_350._4_4_;
      iVar20 = (int)uStack_350;
      iVar25 = local_358._4_4_;
      iVar29 = (int)local_358;
      while( true ) {
        ppUVar11 = local_288.Value;
        local_330 = (ULandscapeInfo *)CONCAT44(local_330._4_4_,iVar20);
        iVar24 = iVar20;
        if (*(int *)((longlong)local_288.Value + 8) - *(int *)((longlong)local_288.Value + 0x34) !=
            (int)uStack_258) {
          `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_340);
          iVar24 = (int)local_330;
        }
        if (((TStack_278.CurrentBitIndex == uVar23) &&
            (TStack_278.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (param_4 = local_2f8,
           (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
            *)ppUVar11 == local_2e8)) break;
        lVar19 = (longlong)*ppUVar11;
        local_2d8 = lVar19 + (longlong)TStack_278.CurrentBitIndex * 0x18;
        uVar4 = *(undefined8 *)(lVar19 + (longlong)TStack_278.CurrentBitIndex * 0x18);
        local_348._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
        iVar28 = local_348._4_4_;
        iVar30 = local_348._4_4_ + 1;
        iVar14 = (int)uVar4;
        iVar20 = iVar14 + 1;
        if (iVar29 < iVar14) {
          iVar14 = iVar29;
        }
        iVar29 = iVar14;
        local_348 = (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                     *)CONCAT44(iVar30,iVar20);
        if (iVar25 < iVar28) {
          iVar28 = iVar25;
        }
        iVar25 = iVar28;
        local_358 = CONCAT44(iVar25,iVar29);
        if (iVar20 < iVar24) {
          iVar20 = iVar24;
        }
        if (iVar30 < iVar18) {
          iVar30 = iVar18;
        }
        iVar18 = iVar30;
        uStack_350 = CONCAT44(iVar18,iVar20);
        lStack_2d0 = local_2d8 + 8;
        TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&>_>
                  ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                    *)param_3,&local_328,(bool *)&local_2d8);
        TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
      }
    }
    else {
      pUVar15 = FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
      this_00 = (TTransform<double> *)(*(longlong *)(pUVar15 + 0xb) + 0x1f0);
      if (*(longlong *)(pUVar15 + 0xb) == 0) {
        this_00 = &UE::Math::TTransform<double>::Identity;
      }
      local_250._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      local_250._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
      local_250._s_0.Z = 0.0;
      pTVar16 = UE::Math::TTransform<double>::TransformPosition
                          (param_1,&local_1a8,(TVector<double> *)&local_250._s_0);
      pTVar16 = UE::Math::TTransform<double>::InverseTransformPosition(this_00,local_190,pTVar16);
      dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
      auVar98._0_8_ = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
      auVar98._8_8_ = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_208._s_0.X = (pTVar16->field0_0x0)._s_0.X;
      local_208._s_0.Y = (pTVar16->field0_0x0)._s_0.Y;
      local_208._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
      auVar66 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      dVar46 = auVar66._0_8_;
      dVar91 = (param_1->Scale3D).XY.m128d_f64[0] * (param_2->Min).field0_0x0._s_0.X;
      dVar97 = (param_1->Scale3D).XY.m128d_f64[1] * (param_2->Max).field0_0x0._s_0.Y;
      auVar34 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar84._8_4_ = SUB84(dVar97,0);
      auVar84._0_8_ = dVar91;
      uVar74 = (undefined4)((ulonglong)dVar97 >> 0x20);
      auVar84._12_4_ = uVar74;
      auVar52 = blendpd(auVar34,auVar66,2);
      auVar85._0_8_ = auVar84._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar91;
      auVar85._8_8_ = auVar98._0_8_ * auVar34._8_8_ - dVar46 * dVar97;
      auVar33._8_4_ = SUB84(dVar97,0);
      auVar33._0_8_ = dVar91;
      auVar33._12_4_ = uVar74;
      auVar34 = blendpd(auVar33,auVar98,2);
      auVar35._0_8_ = auVar34._0_8_ * dVar46 - auVar52._0_8_ * auVar98._0_8_;
      auVar35._8_8_ = auVar34._8_8_ * auVar66._8_8_ - auVar52._8_8_ * auVar98._8_8_;
      auVar34 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar52 = blendpd(auVar85,auVar35,2);
      dVar83 = auVar85._8_8_ + auVar85._8_8_;
      dVar6 = auVar35._0_8_ + auVar35._0_8_;
      uVar74 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar86._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar86._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar64._8_4_ = SUB84(dVar6,0);
      auVar64._0_8_ = dVar83;
      auVar64._12_4_ = uVar74;
      auVar55._8_4_ = SUB84(dVar6,0);
      auVar55._0_8_ = dVar83;
      auVar55._12_4_ = uVar74;
      auVar52 = blendpd(auVar55,auVar86,2);
      auVar65._0_8_ = auVar64._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar83;
      auVar65._8_8_ = auVar86._0_8_ * auVar34._8_8_ - dVar46 * dVar6;
      auVar36._8_4_ = SUB84(auVar65._8_8_,0);
      auVar36._0_8_ = auVar65._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
      auVar34 = blendpd(auVar34,auVar66,2);
      auVar56._0_8_ = auVar52._0_8_ * dVar46 - auVar34._0_8_ * auVar86._0_8_;
      auVar56._8_8_ = auVar52._8_8_ * auVar66._8_8_ - auVar34._8_8_ * auVar86._8_8_;
      auVar66 = blendpd(auVar65,auVar56,2);
      dVar6 = dVar6 * dVar7 + dVar97 + auVar56._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      local_220._s_0.Z =
           auVar86._0_8_ * dVar7 + auVar98._0_8_ + auVar66._0_8_ +
           (param_1->Translation).ZW.m128d_f64[0];
      local_220._8_4_ = SUB84(dVar6,0);
      local_220._0_8_ =
           dVar83 * dVar7 + dVar91 + auVar36._8_8_ + (param_1->Translation).XY.m128d_f64[0];
      local_220._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      pTVar16 = UE::Math::TTransform<double>::InverseTransformPosition
                          (this_00,&local_160,(TVector<double> *)&local_220._s_0);
      dVar83 = (param_2->Max).field0_0x0._s_0.X;
      local_1f0 = (pTVar16->field0_0x0)._s_0.X;
      dStack_1e8 = (pTVar16->field0_0x0)._s_0.Y;
      local_1e0 = (pTVar16->field0_0x0)._s_0.Z;
      local_238._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
      local_238._s_0.Z = 0.0;
      local_238._s_0.X = dVar83;
      pTVar16 = UE::Math::TTransform<double>::TransformPosition
                          (param_1,local_148,(TVector<double> *)&local_238._s_0);
      dVar63 = (this_00->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar73 = (this_00->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar6 = (this_00->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar7 = (this_00->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar75 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar53._8_4_ = SUB84(dVar73,0);
      auVar53._0_8_ = dVar63;
      uVar74 = (undefined4)((ulonglong)dVar73 >> 0x20);
      auVar53._12_4_ = uVar74;
      dVar32 = (pTVar16->field0_0x0)._s_0.Z - (this_00->Translation).ZW.m128d_f64[0];
      dVar46 = (pTVar16->field0_0x0)._s_0.X - (this_00->Translation).XY.m128d_f64[0];
      dVar91 = (pTVar16->field0_0x0)._s_0.Y - (this_00->Translation).XY.m128d_f64[1];
      uVar105 = (undefined4)((ulonglong)dVar91 >> 0x20);
      auVar57._8_4_ = SUB84(dVar73,0);
      auVar57._0_8_ = dVar63;
      auVar57._12_4_ = uVar74;
      dVar97 = auVar53._8_8_;
      auVar66._8_4_ = SUB84(dVar7,0);
      auVar66._0_8_ = dVar6;
      auVar66._12_4_ = uVar75;
      auVar34 = blendpd(auVar57,auVar66,2);
      auVar37._8_4_ = SUB84(dVar6,0);
      auVar37._0_8_ = dVar97;
      auVar37._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar99._8_4_ = SUB84(dVar91,0);
      auVar99._0_8_ = dVar46;
      auVar99._12_4_ = uVar105;
      auVar47._8_4_ = SUB84(dVar91,0);
      auVar47._0_8_ = dVar46;
      auVar47._12_4_ = uVar105;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar32;
      auVar66 = blendpd(auVar47,auVar9,2);
      auVar100._0_8_ = auVar99._8_8_ * dVar63 - dVar97 * dVar46;
      auVar100._8_8_ = dVar32 * dVar73 - auVar37._8_8_ * dVar91;
      auVar77._8_4_ = SUB84(auVar100._8_8_,0);
      auVar77._0_8_ = auVar100._0_8_;
      auVar77._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
      auVar48._0_8_ = auVar66._0_8_ * dVar6 - auVar34._0_8_ * dVar32;
      auVar48._8_8_ = auVar66._8_8_ * dVar7 - auVar34._8_8_ * 0.0;
      auVar66 = *(undefined1 (*) [16])(this_00->Scale3D).ZW.m128d_f64;
      auVar52 = blendpd(auVar100,auVar48,2);
      local_2e8 = (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                   *)(double)GlobalVectorConstants::SmallNumber.m128_f32[0];
      dStack_2e0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
      dVar76 = auVar77._8_8_ + auVar77._8_8_;
      dVar82 = auVar48._0_8_ + auVar48._0_8_;
      auVar101._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar101._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar87._8_4_ = SUB84(dVar82,0);
      auVar87._0_8_ = dVar76;
      uVar74 = (undefined4)((ulonglong)dVar82 >> 0x20);
      auVar87._12_4_ = uVar74;
      auVar52 = blendpd(auVar87,auVar101,2);
      auVar92._8_4_ = SUB84(dVar82,0);
      auVar92._0_8_ = dVar76;
      auVar92._12_4_ = uVar74;
      local_2c8 = (int *)(double)GlobalVectorConstants::SmallNumber.m128_f32[2];
      plStack_2c0 = (longlong *)(double)GlobalVectorConstants::SmallNumber.m128_f32[3];
      auVar49._8_4_ = SUB84(dVar7,0);
      auVar49._0_8_ = dVar7;
      auVar49._12_4_ = uVar75;
      auVar88._0_8_ = auVar52._0_8_ * dVar6 - auVar34._0_8_ * auVar101._0_8_;
      auVar88._8_8_ = auVar52._8_8_ * dVar7 - auVar34._8_8_ * auVar101._8_8_;
      auVar67._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(this_00->Scale3D).XY.m128d_f64);
      auVar67._8_4_ = _UNK_15061cc88 & *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1);
      auVar67._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar66._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar66._0_4_) <=
                (double)local_2c8);
      local_2d8 = 0;
      lStack_2d0 = 0;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this_00->Scale3D).XY.m128d_f64);
      lVar31 = -(ulonglong)(auVar67._8_8_ <= dStack_2e0);
      auVar68._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar67._0_8_ <= (double)local_2e8) >> 0x20) &
                            auVar34._4_4_,
                            ~(uint)-(ulonglong)(auVar67._0_8_ <= (double)local_2e8) & auVar34._0_4_)
      ;
      auVar68._8_4_ = ~(uint)lVar31 & auVar34._8_4_;
      auVar68._12_4_ = ~(uint)((ulonglong)lVar31 >> 0x20) & auVar34._12_4_;
      auVar93._0_8_ = auVar92._8_8_ * dVar63 - dVar97 * dVar76;
      auVar93._8_8_ = auVar101._0_8_ * dVar73 - dVar6 * dVar82;
      auVar38._8_4_ = SUB84(auVar93._8_8_,0);
      auVar38._0_8_ = auVar93._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
      local_1d8 = auVar68._0_8_ * (dVar7 * dVar76 + dVar46 + auVar38._8_8_);
      dStack_1d0 = auVar68._8_8_ * (auVar49._8_8_ * dVar82 + dVar91 + auVar88._0_8_);
      auVar34 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      dVar63 = auVar34._0_8_;
      auVar94 = blendpd(auVar93,auVar88,2);
      auVar52._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar52._0_8_ = auVar66._0_8_;
      auVar52._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
      dVar97 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar83 = dVar83 * (param_1->Scale3D).XY.m128d_f64[0];
      dVar76 = (param_2->Max).field0_0x0._s_0.Y * (param_1->Scale3D).XY.m128d_f64[1];
      auVar78._8_4_ = SUB84(dVar76,0);
      auVar78._0_8_ = dVar83;
      uVar74 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar78._12_4_ = uVar74;
      auVar66 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar95._0_8_ = (param_1->Scale3D).ZW.m128d_f64[0] * 0.0;
      auVar95._8_8_ = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_1c8 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar52._4_4_,
                                   ~(uint)lVar19 & auVar52._0_4_) *
                  (dVar7 * auVar101._0_8_ + dVar32 + auVar94._0_8_);
      auVar52 = blendpd(auVar66,auVar34,2);
      auVar79._0_8_ = auVar78._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar83;
      auVar79._8_8_ = auVar95._0_8_ * auVar66._8_8_ - dVar63 * dVar76;
      auVar39._8_4_ = SUB84(dVar76,0);
      auVar39._0_8_ = dVar83;
      auVar39._12_4_ = uVar74;
      auVar66 = blendpd(auVar39,auVar95,2);
      auVar40._0_8_ = auVar66._0_8_ * dVar63 - auVar52._0_8_ * auVar95._0_8_;
      auVar40._8_8_ = auVar66._8_8_ * auVar34._8_8_ - auVar52._8_8_ * auVar95._8_8_;
      auVar66 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      auVar52 = blendpd(auVar79,auVar40,2);
      dVar46 = auVar79._8_8_ + auVar79._8_8_;
      dVar91 = auVar40._0_8_ + auVar40._0_8_;
      uVar74 = (undefined4)((ulonglong)dVar91 >> 0x20);
      auVar80._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar80._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar69._8_4_ = SUB84(dVar91,0);
      auVar69._0_8_ = dVar46;
      auVar69._12_4_ = uVar74;
      auVar58._8_4_ = SUB84(dVar91,0);
      auVar58._0_8_ = dVar46;
      auVar58._12_4_ = uVar74;
      auVar52 = blendpd(auVar58,auVar80,2);
      auVar70._0_8_ = auVar69._8_8_ * auVar66._0_8_ - auVar66._8_8_ * dVar46;
      auVar70._8_8_ = auVar80._0_8_ * auVar66._8_8_ - dVar63 * dVar91;
      auVar66 = blendpd(auVar66,auVar34,2);
      auVar41._8_4_ = SUB84(auVar70._8_8_,0);
      auVar41._0_8_ = auVar70._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
      dVar6 = (this_00->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar7 = (this_00->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar75 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar59._0_8_ = auVar52._0_8_ * dVar63 - auVar66._0_8_ * auVar80._0_8_;
      auVar59._8_8_ = auVar52._8_8_ * auVar34._8_8_ - auVar66._8_8_ * auVar80._8_8_;
      auVar96._8_4_ = SUB84(dVar7,0);
      auVar96._0_8_ = dVar6;
      auVar96._12_4_ = uVar75;
      auVar66 = blendpd(auVar70,auVar59,2);
      dVar63 = (this_00->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar73 = (this_00->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar32 = (auVar80._0_8_ * dVar97 + auVar95._0_8_ + auVar66._0_8_ +
               (param_1->Translation).ZW.m128d_f64[0]) - (this_00->Translation).ZW.m128d_f64[0];
      dVar83 = (dVar46 * dVar97 + dVar83 + auVar41._8_8_ + (param_1->Translation).XY.m128d_f64[0]) -
               (this_00->Translation).XY.m128d_f64[0];
      dVar46 = (dVar91 * dVar97 + dVar76 + auVar59._0_8_ + (param_1->Translation).XY.m128d_f64[1]) -
               (this_00->Translation).XY.m128d_f64[1];
      uVar105 = (undefined4)((ulonglong)dVar46 >> 0x20);
      auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(this_00->Scale3D).XY.m128d_f64);
      auVar54._8_4_ = SUB84(dVar73,0);
      auVar54._0_8_ = dVar63;
      uVar74 = (undefined4)((ulonglong)dVar73 >> 0x20);
      auVar54._12_4_ = uVar74;
      auVar60._8_4_ = SUB84(dVar73,0);
      auVar60._0_8_ = dVar63;
      auVar60._12_4_ = uVar74;
      auVar34._8_4_ = SUB84(dVar7,0);
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = uVar75;
      auVar34 = blendpd(auVar60,auVar34,2);
      dVar91 = auVar54._8_8_;
      auVar102._8_4_ = SUB84(dVar46,0);
      auVar102._0_8_ = dVar83;
      auVar102._12_4_ = uVar105;
      auVar42._8_4_ = SUB84(dVar6,0);
      auVar42._0_8_ = dVar91;
      auVar42._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar50._8_4_ = SUB84(dVar46,0);
      auVar50._0_8_ = dVar83;
      auVar50._12_4_ = uVar105;
      auVar103._0_8_ = auVar102._8_8_ * dVar63 - dVar91 * dVar83;
      auVar103._8_8_ = dVar32 * dVar73 - auVar42._8_8_ * dVar46;
      auVar81._8_4_ = SUB84(auVar103._8_8_,0);
      auVar81._0_8_ = auVar103._0_8_;
      auVar81._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar32;
      auVar66 = blendpd(auVar50,auVar8,2);
      auVar51._0_8_ = auVar66._0_8_ * dVar6 - auVar34._0_8_ * dVar32;
      auVar51._8_8_ = auVar66._8_8_ * dVar7 - auVar34._8_8_ * 0.0;
      dVar97 = auVar81._8_8_ + auVar81._8_8_;
      dVar76 = auVar51._0_8_ + auVar51._0_8_;
      auVar66 = blendpd(auVar103,auVar51,2);
      auVar104._0_8_ = auVar66._0_8_ + auVar66._0_8_;
      auVar104._8_8_ = auVar66._8_8_ + auVar66._8_8_;
      uVar74 = SUB84(dVar76,0);
      auVar89._8_4_ = uVar74;
      auVar89._0_8_ = dVar97;
      uVar75 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar89._12_4_ = uVar75;
      auVar43._8_4_ = uVar74;
      auVar43._0_8_ = dVar97;
      auVar43._12_4_ = uVar75;
      auVar71._8_4_ = uVar74;
      auVar71._0_8_ = dVar97;
      auVar71._12_4_ = uVar75;
      auVar90._0_8_ = auVar89._8_8_ * dVar63 - dVar97 * dVar91;
      auVar90._8_8_ = auVar104._0_8_ * dVar73 - auVar43._8_8_ * dVar6;
      auVar66 = blendpd(auVar71,auVar104,2);
      auVar44._8_4_ = SUB84(auVar104._8_8_,0);
      auVar44._0_8_ = auVar104._0_8_;
      auVar44._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
      auVar61._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(this_00->Scale3D).XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar61._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar61._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      lVar19 = -(ulonglong)(auVar61._8_8_ <= dStack_2e0);
      auVar62._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar61._0_8_ <= (double)local_2e8) >> 0x20) &
                            auVar52._4_4_,
                            ~(uint)-(ulonglong)(auVar61._0_8_ <= (double)local_2e8) & auVar52._0_4_)
      ;
      auVar62._8_4_ = ~(uint)lVar19 & auVar52._8_4_;
      auVar62._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar52._12_4_;
      auVar72._0_8_ = auVar66._0_8_ * dVar6 - auVar104._0_8_ * auVar34._0_8_;
      auVar72._8_8_ = auVar66._8_8_ * dVar7 - auVar44._8_8_ * auVar34._8_8_;
      auVar66 = *(undefined1 (*) [16])(this_00->Scale3D).ZW.m128d_f64;
      auVar45._8_4_ = SUB84(auVar90._8_8_,0);
      auVar45._0_8_ = auVar90._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(auVar66._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar66._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)local_2c8);
      auVar94._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar94._0_8_ = auVar66._0_8_;
      auVar94._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
      auVar66 = blendpd(auVar90,auVar72,2);
      local_1b0 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar34._4_4_,
                                   ~(uint)lVar19 & auVar34._0_4_) *
                  (auVar104._0_8_ * auVar96._8_8_ + dVar32 + auVar66._0_8_);
      local_1c0 = auVar62._0_8_ * (dVar97 * auVar96._8_8_ + dVar83 + auVar45._8_8_);
      dStack_1b8 = auVar62._8_8_ * (dVar76 * dVar7 + dVar46 + auVar72._0_8_);
      UE::Math::TBox<double>::TBox<double>
                ((TBox<double> *)&local_118._s_0,(TVector<double> *)&local_208._s_0,4);
      dVar83 = __real_3ff0000000000000 / (double)this->ComponentSizeQuads;
      iVar25 = (int)ROUND((dVar83 * local_118._s_0.X + dVar83 * local_118._s_0.X) -
                          __real_3fe0000000000000) >> 1;
      uStack_30c = (int)ROUND((dVar83 * local_118._s_0.Y + dVar83 * local_118._s_0.Y) -
                              __real_3fe0000000000000) >> 1;
      iStack_304 = (int)ROUND((dVar83 * local_f8 + dVar83 * local_f8) - __real_3fe0000000000000) >>
                   1;
      local_308 = (int)ROUND((dVar83 * local_100 + dVar83 * local_100) - __real_3fe0000000000000) >>
                  1;
      iVar20 = iStack_304 + 1;
      iVar18 = local_308 + 1;
      _local_33c = CONCAT44(iVar20,iVar18);
      if ((int)uStack_30c < iVar20) {
        iVar29 = uStack_350._4_4_;
        iVar24 = (int)uStack_350;
        iVar30 = local_358._4_4_;
        iVar28 = (int)local_358;
        local_310 = iVar25;
        uVar23 = uStack_30c;
        do {
          local_328.Key = (TIntPoint<int> *)(ulonglong)uVar23;
          if (iVar25 < iVar18) {
            local_2e8 = (TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                         *)&this->XYtoComponentMap;
            do {
              iVar18 = (int)local_328.Key;
              TVar10.field0_0x0._s_0.Y = iVar18;
              TVar10.field0_0x0._s_0.X = iVar25;
              local_318 = iVar25;
              iStack_314 = iVar18;
              pTVar17 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                        ::Find(local_2e8,TVar10);
              param_3 = (TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
                         *)local_348;
              if (pTVar17 == (TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *)0x0) {
                local_300 = 0;
              }
              else {
                local_300 = *(longlong *)&pTVar17->field_0x8;
                if (local_300 != 0) {
                  iVar22 = iVar25 + 1;
                  iVar20 = iVar18 + 1;
                  local_328.Value = (ULandscapeComponent **)CONCAT44(iVar20,iVar22);
                  iVar14 = iVar25;
                  if (iVar28 < iVar25) {
                    iVar14 = iVar28;
                  }
                  iVar28 = iVar14;
                  if (iVar30 < iVar18) {
                    iVar18 = iVar30;
                  }
                  iVar30 = iVar18;
                  if (iVar22 < iVar24) {
                    iVar22 = iVar24;
                  }
                  iVar24 = iVar22;
                  uStack_350 = CONCAT44(uStack_350._4_4_,iVar24);
                  if (iVar20 < iVar29) {
                    iVar20 = iVar29;
                  }
                  iVar29 = iVar20;
                  local_2c8 = &local_318;
                  plStack_2c0 = &local_300;
                  TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&>_>
                            (local_348,&local_288,(bool *)&local_2c8);
                }
              }
              iVar25 = iVar25 + 1;
              uVar23 = (uint)local_328.Key;
            } while (iVar25 < local_33c);
            uStack_350 = CONCAT44(iVar29,(int)uStack_350);
            local_358 = CONCAT44(iVar30,iVar28);
            this = local_330;
            iVar25 = local_310;
            iVar20 = iStack_338;
            iVar18 = local_33c;
          }
          uVar23 = uVar23 + 1;
          param_4 = local_2f8;
        } while ((int)uVar23 < iVar20);
      }
    }
    if (*(int *)&(((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                    *)param_3)->Elements).field_0x8 !=
        *(int *)&(((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                    *)param_3)->Elements).field_0x34) {
      *(undefined8 *)&param_4->field0_0x0 = local_358;
      *(undefined8 *)((longlong)&param_4->field0_0x0 + 8) = uStack_350;
      return true;
    }
  }
  return false;
}

// GetSortedStreamingProxies @ 145f136b0

TArray<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall ULandscapeInfo::GetSortedStreamingProxies(ULandscapeInfo *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr *pFVar6;
  
  pTVar4 = &this->SortedStreamingProxies;
  iVar1 = (this->SortedStreamingProxies).ArrayNum;
  if (iVar1 != 0) {
    pFVar5 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
    pFVar6 = pFVar5;
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
      pFVar6 = pFVar6 + 1;
      bVar3 = UE::Landscape::LandscapeProxySortPredicate
                        ((TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)*pFVar6,
                         (TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)*pFVar5);
      if (bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(SortedStreamingProxies, UE::Landscape::LandscapeProxySortPredicate)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x177a,L"");
        if (!bVar3) {
          return pTVar4;
        }
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar4;
      }
      pFVar5 = pFVar5 + 1;
    }
  }
  return pTVar4;
}

// Initialize @ 145f147a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeInfo::Initialize(ULandscapeInfo *this,UWorld *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2->B;
  uVar2 = param_2->C;
  uVar3 = param_2->D;
  (this->LandscapeGuid).A = param_2->A;
  (this->LandscapeGuid).B = uVar1;
  (this->LandscapeGuid).C = uVar2;
  (this->LandscapeGuid).D = uVar3;
  return;
}

// IsRegistered @ 145f15b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ULandscapeInfo::IsRegistered(ULandscapeInfo *this,ALandscapeProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  ALandscapeProxy *pAVar5;
  FScriptContainerElement *this_00;
  FWeakObjectPtr local_res10;
  ALandscapeProxy *local_res18;
  
  if (param_1 == (ALandscapeProxy *)0x0) {
    return false;
  }
  pUVar4 = ALandscape::StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar4->_padding_)) {
    pAVar5 = (ALandscapeProxy *)FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
    return pAVar5 == param_1;
  }
  pUVar4 = ALandscapeStreamingProxy::StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar4->_padding_)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    this_00 = (this->SortedStreamingProxies).AllocatorInstance.Data;
    pFVar1 = this_00 + (longlong)(this->SortedStreamingProxies).ArrayNum * 8;
    for (; this_00 != pFVar1; this_00 = this_00 + 8) {
      bVar3 = TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
              UEOpEquals<ALandscapeStreamingProxy_const_,bool>
                        ((TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)this_00,
                         (TWeakObjectPtr<ALandscapeStreamingProxy_const_,FWeakObjectPtr> *)
                         &local_res10);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// RegisterActor @ 145f182b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeInfo::RegisterActor
          (ULandscapeInfo *this,ALandscapeProxy *param_1,bool param_2,bool param_3)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  UObject *pUVar6;
  uint *puVar7;
  UClass *pUVar8;
  ALandscapeProxy *pAVar9;
  ALandscapeStreamingProxy *pAVar10;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FWeakObjectPtr *pFVar15;
  TArray<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  ALandscapeProxy *local_res10;
  bool local_res18;
  undefined1 local_118 [8];
  FWeakObjectPtr local_110;
  undefined1 local_108 [8];
  longlong local_100;
  int local_f8;
  int iStack_f4;
  TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeHeightfieldCollisionComponent_*_const_&>
  local_f0;
  ALandscapeProxy *local_e0;
  FWeakObjectPtr local_d8;
  ALandscapeStreamingProxy *local_d0 [2];
  TIntPoint<int>_u_0 local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  code *local_a0;
  longlong **local_98;
  TIntPoint<int>_u_0 *local_90;
  longlong *local_88;
  FString local_80;
  FString local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  local_res10 = param_1;
  local_res18 = param_2;
  AActor::GetWorld((AActor *)param_1);
  piVar5 = (int *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_60);
  if ((((piVar5[3] == 0 && piVar5[2] == 0) && piVar5[1] == 0) && *piVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy->GetLandscapeGuid().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1873,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((((this->LandscapeGuid).D == 0 && (this->LandscapeGuid).B == 0) &&
       (this->LandscapeGuid).A == 0) && (this->LandscapeGuid).C == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1874,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
  if ((((!bVar3) ||
       (pUVar6 = FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr), pUVar6 == (UObject *)0x0)) ||
      (*(longlong *)(pUVar6 + 0xb) == 0)) ||
     ((*(byte *)(*(longlong *)(pUVar6 + 0xb) + 0x98) & 1) == 0)) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5741,"ULandscapeInfo::GetCurrentLevelLandscapeProxy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                 ,0x166d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5741);
    }
    local_b0 = &local_100;
    local_100 = 0;
    local_98 = &local_b0;
    local_a8 = 1;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`ULandscapeInfo::GetCurrentLevelLandscapeProxy'::__l2::<lambda_1>,bool,ALandscapeProxy_*>
               ::Call;
    ForEachLandscapeProxy(this,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_a0);
    lVar17 = local_100;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (lVar17 == 0) {
      pFVar14 = (this->SortedStreamingProxies).AllocatorInstance.Data;
      iVar4 = (this->SortedStreamingProxies).ArrayNum;
      pFVar12 = pFVar14 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->SortedStreamingProxies).ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar14 == pFVar12) break;
        local_f0.Value = *(ULandscapeHeightfieldCollisionComponent ***)pFVar14;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_f0.Value);
        if (((pUVar6 != (UObject *)0x0) && (*(longlong *)(pUVar6 + 0xb) != 0)) &&
           ((*(byte *)(*(longlong *)(pUVar6 + 0xb) + 0x98) & 1) != 0)) goto LAB_145f184a4;
        pFVar14 = pFVar14 + 8;
      }
      this->ComponentSizeQuads = param_1->ComponentSizeQuads;
      this->ComponentNumSubsections = param_1->NumSubsections;
      this->SubsectionSizeQuads = param_1->SubsectionSizeQuads;
    }
  }
LAB_145f184a4:
  puVar7 = (uint *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_50);
  if ((((puVar7[3] != (this->LandscapeGuid).D || puVar7[2] != (this->LandscapeGuid).C) ||
       puVar7[1] != (this->LandscapeGuid).B) || *puVar7 != (this->LandscapeGuid).A) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeGuid == Proxy->GetLandscapeGuid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1880,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ComponentSizeQuads != param_1->ComponentSizeQuads) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentSizeQuads == Proxy->ComponentSizeQuads",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1881,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ComponentNumSubsections != param_1->NumSubsections) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentNumSubsections == Proxy->NumSubsections",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1882,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->SubsectionSizeQuads != param_1->SubsectionSizeQuads) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubsectionSizeQuads == Proxy->SubsectionSizeQuads",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                         ,0x1883,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar8 = ALandscape::StaticClass();
  iVar4 = (int)pUVar8->_padding_;
  if (((*(int *)(param_1->_padding_ + 0x38) < iVar4) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
       != &pUVar8->_padding_)) || (param_1 == (ALandscapeProxy *)0x0)) {
    pAVar10 = CastChecked<ALandscapeStreamingProxy,ALandscapeProxy>(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (ALandscapeStreamingProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    iVar4 = 0;
    iVar18 = 0;
    local_110.ObjectIndex = 0;
    local_110.ObjectSerialNumber = 0;
    local_d0[0] = pAVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (ALandscapeStreamingProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    FWeakObjectPtr::operator=(&local_110,(FObjectPtr)local_d0);
    pFVar14 = (this->SortedStreamingProxies).AllocatorInstance.Data;
    pFVar12 = pFVar14 + (longlong)(this->SortedStreamingProxies).ArrayNum * 8;
    for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 8) {
      bVar3 = TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
              UEOpEquals<ALandscapeStreamingProxy,bool>
                        ((TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)pFVar14,
                         (TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)&local_110);
      if (bVar3) goto LAB_145f18894;
    }
    uVar13 = (this->SortedStreamingProxies).ArrayNum;
    pFVar12 = (this->SortedStreamingProxies).AllocatorInstance.Data;
    if (0 < (int)uVar13) {
      do {
        uVar19 = uVar13 >> 1;
        bVar3 = UE::Landscape::LandscapeProxySortPredicate
                          ((TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(pFVar12 + (longlong)(int)(uVar19 + iVar4) * 8),
                           (TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)local_110);
        iVar18 = iVar4;
        if (bVar3) {
          iVar18 = (uVar13 & 1) + uVar19 + iVar4;
        }
        param_1 = local_res10;
        uVar13 = uVar19;
        iVar4 = iVar18;
      } while (uVar19 != 0);
    }
    pTVar16 = &this->SortedStreamingProxies;
    pFVar1 = (FWeakObjectPtr *)(pTVar16->AllocatorInstance).Data;
    if (((pFVar1 <= &local_110) && (&local_110 < pFVar1 + (this->SortedStreamingProxies).ArrayMax))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (this->SortedStreamingProxies).ArrayNum;
    piVar5 = &(this->SortedStreamingProxies).ArrayMax;
    if (iVar4 == *piVar5) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar16->AllocatorInstance,piVar5);
      (this->SortedStreamingProxies).ArrayNum = iVar4;
    }
    pFVar12 = (pTVar16->AllocatorInstance).Data;
    (this->SortedStreamingProxies).ArrayNum = iVar4 + 1;
    pFVar12 = pFVar12 + (longlong)iVar18 * 8;
    memmove(pFVar12 + 8,pFVar12,(longlong)(iVar4 - iVar18) << 3);
    *(FWeakObjectPtr *)((pTVar16->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_110;
LAB_145f18894:
    bVar3 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
    param_2 = local_res18;
    if (bVar3) {
      RegisterLandscapeActorWithProxyInternal(this,(ALandscapeProxy *)pAVar10,local_res18);
      param_2 = local_res18;
    }
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&(this->LandscapeActor).WeakPtr);
    if (bVar3) {
      bVar3 = TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals<ALandscape,bool>
                        (&this->LandscapeActor,(ALandscape *)param_1);
      if ((!bVar3) && (2 < (byte)LogLandscape._0_1_)) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_70,(UObject *)0x0);
        pUVar6 = FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_80,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_e0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(this->LandscapeActor).WeakPtr,(FObjectPtr)&local_e0);
      RegisterLandscapeActorWithProxyInternal(this,param_1,param_2);
      pFVar15 = (FWeakObjectPtr *)(this->SortedStreamingProxies).AllocatorInstance.Data;
      iVar4 = (this->SortedStreamingProxies).ArrayNum;
      pFVar1 = pFVar15 + iVar4;
      while( true ) {
        if ((this->SortedStreamingProxies).ArrayNum != iVar4) {
          local_118[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_118);
        }
        if (pFVar15 == pFVar1) break;
        local_d8 = *pFVar15;
        pAVar9 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_d8);
        if (pAVar9 != (ALandscapeProxy *)0x0) {
          RegisterLandscapeActorWithProxyInternal(this,pAVar9,param_2);
        }
        pFVar15 = pFVar15 + 1;
      }
    }
  }
  uVar13 = 0;
  if (0 < (param_1->LandscapeComponents).ArrayNum) {
    lVar17 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar13 < (param_1->LandscapeComponents).ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RegisterActorComponent
                (this,*(ULandscapeComponent **)
                       ((param_1->LandscapeComponents).AllocatorInstance.Data + lVar17),param_2);
      uVar13 = uVar13 + 1;
      lVar17 = lVar17 + 8;
    } while ((int)uVar13 < (param_1->LandscapeComponents).ArrayNum);
  }
  pFVar14 = (param_1->CollisionComponents).AllocatorInstance.Data;
  iVar4 = (param_1->CollisionComponents).ArrayNum;
  pFVar12 = pFVar14 + (longlong)iVar4 * 8;
  while( true ) {
    if ((param_1->CollisionComponents).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeHeightfieldCollisionComponent>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (pFVar14 == pFVar12) break;
    lVar17 = *(longlong *)pFVar14;
    local_b8 = lVar17;
    if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x98) & 1) != 0)) {
      local_f8 = *(int *)(lVar17 + 0x558) / *(int *)(lVar17 + 0x560);
      iStack_f4 = *(int *)(lVar17 + 0x55c) / *(int *)(lVar17 + 0x560);
      local_c0._s_0.Y = iStack_f4;
      local_c0._s_0.X = local_f8;
      pTVar11 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                        *)&this->XYtoCollisionComponentMap,(TIntPoint<int>)local_c0);
      if ((pTVar11 ==
           (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) ||
         ((*(longlong *)&pTVar11->field_0x8 != lVar17 && (*(longlong *)&pTVar11->field_0x8 == 0))))
      {
        local_90 = &local_c0;
        local_88 = &local_b8;
        TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeHeightfieldCollisionComponent_*_const_&>_>
                  ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                    *)&this->XYtoCollisionComponentMap,&local_f0,(bool *)&local_90);
      }
    }
    pFVar14 = pFVar14 + 8;
  }
  return;
}

// RegisterActorComponent @ 145f18a20

void __thiscall
ULandscapeInfo::RegisterActorComponent
          (ULandscapeInfo *this,ULandscapeComponent *param_1,bool param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *pTVar5;
  ULandscapeComponent *pUVar6;
  int iVar7;
  int iVar8;
  ULandscapeComponent *local_res10 [2];
  int local_res20;
  int iStackX_24;
  int local_38;
  int iStack_34;
  int *local_30;
  ULandscapeComponent **local_28;
  
  if ((param_1 != (ULandscapeComponent *)0x0) && ((param_1->_padding_ & 1) != 0)) {
    uVar2 = (longlong)param_1->SectionBaseX / (longlong)param_1->ComponentSizeQuads;
    iVar8 = (int)uVar2;
    lVar3 = (longlong)param_1->SectionBaseY / (longlong)param_1->ComponentSizeQuads;
    iVar7 = (int)lVar3;
    local_res10[0] = param_1;
    local_res20 = iVar8;
    iStackX_24 = iVar7;
    local_38 = iVar8;
    iStack_34 = iVar7;
    pTVar5 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                     *)&this->XYtoComponentMap,(TIntPoint<int>)(lVar3 << 0x20 | uVar2 & 0xffffffff))
    ;
    pUVar6 = (ULandscapeComponent *)0x0;
    if (pTVar5 != (TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *)0x0) {
      pUVar6 = *(ULandscapeComponent **)&pTVar5->field_0x8;
    }
    if ((pUVar6 != param_1) && (pUVar6 == (ULandscapeComponent *)0x0)) {
      local_30 = &local_38;
      local_28 = local_res10;
      TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&>_>
                ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                  *)&this->XYtoComponentMap,
                 (TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeComponent_*_const_&> *
                 )&local_res20,(bool *)&local_30);
      iVar8 = local_38;
      iVar7 = iStack_34;
    }
    iVar1 = *(int *)&(this->XYComponentBounds).field0_0x0;
    iVar4 = iVar8;
    if (iVar1 < iVar8) {
      iVar4 = iVar1;
    }
    iVar1 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 4);
    *(int *)&(this->XYComponentBounds).field0_0x0 = iVar4;
    iVar4 = iVar7;
    if (iVar1 < iVar7) {
      iVar4 = iVar1;
    }
    *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 4) = iVar4;
    iVar1 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 8);
    if (iVar8 < iVar1) {
      iVar8 = iVar1;
    }
    iVar1 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 0xc);
    *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 8) = iVar8;
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 0xc) = iVar7;
  }
  return;
}

// RegisterCollisionComponent @ 145f18b40

void __thiscall
ULandscapeInfo::RegisterCollisionComponent
          (ULandscapeInfo *this,ULandscapeHeightfieldCollisionComponent *param_1)

{
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar1;
  ULandscapeHeightfieldCollisionComponent *pUVar2;
  ULandscapeHeightfieldCollisionComponent *local_res10;
  TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeHeightfieldCollisionComponent_*_const_&>
  local_res18;
  ULandscapeHeightfieldCollisionComponent ***local_18;
  ULandscapeHeightfieldCollisionComponent **local_10;
  
  if ((param_1 != (ULandscapeHeightfieldCollisionComponent *)0x0) &&
     ((param_1->field_0x98 & 1) != 0)) {
    local_res18.Key._0_4_ = param_1->SectionBaseX / param_1->CollisionSizeQuads;
    local_res18.Key._4_4_ = param_1->SectionBaseY / param_1->CollisionSizeQuads;
    local_res18.Value._4_4_ = local_res18.Key._4_4_;
    local_res18.Value._0_4_ = (int)local_res18.Key;
    local_res10 = param_1;
    pTVar1 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                     *)&this->XYtoCollisionComponentMap,(TIntPoint<int>)local_res18.Value);
    pUVar2 = (ULandscapeHeightfieldCollisionComponent *)0x0;
    if (pTVar1 != (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0)
    {
      pUVar2 = *(ULandscapeHeightfieldCollisionComponent **)&pTVar1->field_0x8;
    }
    if ((pUVar2 != param_1) && (pUVar2 == (ULandscapeHeightfieldCollisionComponent *)0x0)) {
      local_18 = &local_res18.Value;
      local_10 = &local_res10;
      TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,ULandscapeHeightfieldCollisionComponent_*_const_&>_>
                ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                  *)&this->XYtoCollisionComponentMap,&local_res18,(bool *)&local_18);
    }
  }
  return;
}

// RegisterLandscapeActorWithProxyInternal @ 145f18c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeInfo::RegisterLandscapeActorWithProxyInternal
          (ULandscapeInfo *this,ALandscapeProxy *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  int *piVar6;
  int *piVar7;
  UObject *local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pUVar4 = FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Landscape",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x17ed,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != (ALandscapeProxy *)0x0) {
    pUVar5 = ALandscapeStreamingProxy::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      piVar6 = (int *)(**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_28);
      piVar7 = (int *)(**(code **)(*(longlong *)&pUVar4[0x11].field_0x18 + 0x10))
                                (&pUVar4[0x11].field_0x18,local_18);
      if (((piVar6[3] != piVar7[3] || piVar6[2] != piVar7[2]) || piVar6[1] != piVar7[1]) ||
          *piVar7 != *piVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Landscape->GetLandscapeGuid() == StreamingProxy->GetLandscapeGuid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                           ,0x17f2,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_res8 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(param_1 + 1),(FObjectPtr)&local_res8);
      param_1->bIsLandscapeActorRegisteredWithLandscapeInfo = true;
      FLandscapeGroup::RegisterAllComponentsOnStreamingProxy((ALandscapeStreamingProxy *)param_1);
    }
  }
  return;
}

// RemoveLandscapeInfo @ 145f1a2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl ULandscapeInfo::RemoveLandscapeInfo(UWorld *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ULandscapeInfoMap *pUVar4;
  ulong64 uVar5;
  
  if (((param_2->D == 0 && param_2->C == 0) && param_2->B == 0) && param_2->A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LandscapeGuid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x176c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x176d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pUVar4 = ULandscapeInfoMap::GetLandscapeInfoMap(param_1);
  if (*(int *)&(pUVar4->Map).field_0x8 != *(int *)&(pUVar4->Map).field_0x34) {
    uVar5 = CityHash64((char *)param_2,0x10);
    iVar3 = TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TObjectPtr<ULandscapeInfo>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<ULandscapeInfo>,0>,FDefaultSetAllocator>
                                 *)&pUVar4->Map,(uint)uVar5,param_2);
    return iVar3;
  }
  return 0;
}

// Serialize @ 145f1dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULandscapeInfo::Serialize(ULandscapeInfo *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// SortStreamingProxies @ 145f1e720

void __thiscall ULandscapeInfo::SortStreamingProxies(ULandscapeInfo *this)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,int,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,bool___cdecl(TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)>_>
            ((TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)
             (this->SortedStreamingProxies).AllocatorInstance.Data,
             (this->SortedStreamingProxies).ArrayNum,local_res8,
             (TDereferenceWrapper<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,bool___cdecl(TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>)>
              )0x145fc5390);
  return;
}

// UnregisterActor @ 145f1f5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeInfo::UnregisterActor(ULandscapeInfo *this,ALandscapeProxy *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *pFVar3;
  ULandscapeComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  ALandscapeProxy *pAVar10;
  UObject *pUVar11;
  ALandscapeStreamingProxy *pAVar12;
  int iVar13;
  uint uVar14;
  FWeakObjectPtr *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  undefined8 local_70;
  FWeakObjectPtr local_68;
  UObject *local_60;
  ALandscapeStreamingProxy *local_58;
  ALandscapeStreamingProxy *local_50;
  
  AActor::GetWorld((AActor *)param_1);
  if (param_1 != (ALandscapeProxy *)0x0) {
    pUVar9 = ALandscape::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      pAVar10 = (ALandscapeProxy *)FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
      if (pAVar10 == param_1) {
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_70 = 0;
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
        (this->LandscapeActor).WeakPtr = local_res20;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UPackage::PackageMarkedDirtyEvent,this);
      }
      pFVar15 = (FWeakObjectPtr *)(this->SortedStreamingProxies).AllocatorInstance.Data;
      iVar1 = (this->SortedStreamingProxies).ArrayNum;
      pFVar2 = pFVar15 + iVar1;
      while( true ) {
        if ((this->SortedStreamingProxies).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar15 == pFVar2) break;
        local_68 = *pFVar15;
        pUVar11 = FWeakObjectPtr::Get(&local_68);
        if (pUVar11 != (UObject *)0x0) {
          local_60 = FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_60);
          }
          FSoftObjectPtr::operator=
                    ((FSoftObjectPtr *)&pUVar11[0x32].field_0x20,(FObjectPtr)&local_60);
        }
        pFVar15 = pFVar15 + 1;
      }
      goto LAB_145f1f883;
    }
  }
  pAVar12 = CastChecked<ALandscapeStreamingProxy,ALandscapeProxy>(param_1);
  local_50 = pAVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar12 != (ALandscapeStreamingProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar12);
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_58 = pAVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar12 != (ALandscapeStreamingProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar12);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_58);
  pFVar2 = (FWeakObjectPtr *)(this->SortedStreamingProxies).AllocatorInstance.Data;
  if (((pFVar2 <= &local_78) && (&local_78 < pFVar2 + (this->SortedStreamingProxies).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = (this->SortedStreamingProxies).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->SortedStreamingProxies).AllocatorInstance.Data;
    iVar19 = 0;
    iVar13 = 0;
    bVar7 = TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
            UEOpEquals<ALandscapeStreamingProxy,bool>
                      ((TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)pFVar3,
                       (TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)&local_78);
    bVar7 = !bVar7;
    iVar17 = iVar13;
joined_r0x000145f1f7fd:
    do {
      local_res18 = iVar17;
      iVar13 = iVar13 + 1;
      if (iVar13 < iVar1) {
        bVar6 = TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr>::
                UEOpEquals<ALandscapeStreamingProxy,bool>
                          ((TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)
                           (pFVar3 + (longlong)iVar13 * 8),
                           (TWeakObjectPtr<ALandscapeStreamingProxy,FWeakObjectPtr> *)&local_78);
        iVar17 = local_res18;
        if (bVar7 == !bVar6) goto joined_r0x000145f1f7fd;
      }
      iVar17 = iVar13 - local_res18;
      if (bVar7 != false) {
        if (iVar19 != local_res18) {
          memmove(pFVar3 + (longlong)iVar19 * 8,pFVar3 + (longlong)local_res18 * 8,
                  (longlong)iVar17 << 3);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar17 = iVar13;
    } while (iVar13 < iVar1);
    (this->SortedStreamingProxies).ArrayNum = iVar19;
    pAVar12 = local_50;
  }
  FLandscapeGroup::UnregisterAllComponentsOnStreamingProxy(pAVar12);
LAB_145f1f883:
  lVar18 = 0;
  uVar14 = 0;
  if (0 < (param_1->LandscapeComponents).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar14 < (param_1->LandscapeComponents).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(ULandscapeComponent **)
                ((param_1->LandscapeComponents).AllocatorInstance.Data + lVar18);
      if (pUVar4 != (ULandscapeComponent *)0x0) {
        UnregisterActorComponent(this,pUVar4);
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar14 < (param_1->LandscapeComponents).ArrayNum);
  }
  TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
             *)&this->XYtoComponentMap);
  pFVar16 = (param_1->CollisionComponents).AllocatorInstance.Data;
  iVar1 = (param_1->CollisionComponents).ArrayNum;
  pFVar3 = pFVar16 + (longlong)iVar1 * 8;
  while( true ) {
    if ((param_1->CollisionComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeHeightfieldCollisionComponent>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar16 == pFVar3) break;
    if (*(ULandscapeHeightfieldCollisionComponent **)pFVar16 !=
        (ULandscapeHeightfieldCollisionComponent *)0x0) {
      UnregisterCollisionComponent(this,*(ULandscapeHeightfieldCollisionComponent **)pFVar16);
    }
    pFVar16 = pFVar16 + 8;
  }
  TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
             *)&this->XYtoCollisionComponentMap);
  param_1->bIsLandscapeActorRegisteredWithLandscapeInfo = false;
  return;
}

// UnregisterActorComponent @ 145f1f9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ULandscapeInfo::UnregisterActorComponent(ULandscapeInfo *this,ULandscapeComponent *param_1)

{
  TMap<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *pTVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  TIntPoint<int>_u_0 TVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  TIntPoint<int>_u_0 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 == (ULandscapeComponent *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5887638317222074964>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x1a54,"Component");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    lVar10 = (longlong)param_1->SectionBaseY / (longlong)param_1->ComponentSizeQuads;
    this_00 = &this->XYtoComponentMap;
    uVar4 = (longlong)param_1->SectionBaseX / (longlong)param_1->ComponentSizeQuads;
    TVar13 = (TIntPoint<int>_u_0)(lVar10 << 0x20 | uVar4 & 0xffffffff);
    pTVar8 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                     *)this_00,(TIntPoint<int>)TVar13);
    if (((pTVar8 != (TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*> *)0x0) &&
        (*(ULandscapeComponent **)&pTVar8->field_0x8 == param_1)) &&
       (local_res20 = TVar13,
       *(int *)&(this->XYtoComponentMap).field_0x8 != *(int *)&(this->XYtoComponentMap).field_0x34))
    {
      uVar11 = (uint)lVar10;
      uVar12 = (int)uVar4 - uVar11 ^ uVar11 >> 0xd;
      uVar9 = (-0x61c88647 - uVar12) - uVar11 ^ uVar12 << 8;
      uVar11 = (uVar11 - uVar12) - uVar9 ^ uVar9 >> 0xd;
      uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xc;
      uVar9 = (uVar9 - uVar12) - uVar11 ^ uVar12 << 0x10;
      uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 >> 5;
      uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 3;
      uVar9 = (uVar9 - uVar12) - uVar11 ^ uVar12 << 10;
      TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Math::TIntPoint<int>_>
                ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>,FDefaultSetAllocator>
                  *)this_00,(uVar11 - uVar9) - uVar12 ^ uVar9 >> 0xf,
                 (TIntPoint<int> *)&local_res20._s_0);
    }
    TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
    Remove(&this->SelectedComponents,param_1);
    TSet<ULandscapeComponent_*,DefaultKeyFuncs<ULandscapeComponent_*,0>,FDefaultSetAllocator>::
    Remove(&this->SelectedRegionComponents,param_1);
    TVar13 = _UNK_151199df8;
    puVar1 = &(this->XYtoComponentMap).field_0x10;
    iVar14 = 0;
    (this->XYComponentBounds).field0_0x0._s_0.Min.field0_0x0 =
         ___xmm_80000000800000007fffffff7fffffff;
    uVar9 = 1;
    (this->XYComponentBounds).field0_0x0._s_0.Max.field0_0x0 = TVar13;
    iVar2 = *(int *)&(this->XYtoComponentMap).field_0x28;
    iVar16 = 0;
    iVar7 = 0;
    if (iVar2 != 0) {
      puVar17 = *(uint **)&(this->XYtoComponentMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar11 = *puVar17;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar7 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145f1fbbe;
        uVar11 = puVar17[lVar10 + 1];
      }
      uVar9 = -uVar11 & uVar11;
      uVar4 = (ulonglong)uVar9 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iVar7 = local_res18 + -1 + iVar16;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
    }
LAB_145f1fbbe:
    uVar11 = *(uint *)&(this->XYtoComponentMap).field_0x28;
    uVar12 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar9,iVar14);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->XYtoComponentMap).field_0x8 -
                         *(int *)&(this->XYtoComponentMap).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)&(this->XYtoComponentMap).field_0x28;
    if (uVar11 != uVar9) {
      puVar15 = *(undefined1 **)&(this->XYtoComponentMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar11 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_145f1fcd0;
        uVar11 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar9 < (int)uVar11) {
        uVar11 = uVar9;
      }
    }
LAB_145f1fcd0:
    while( true ) {
      if (*(int *)&(this->XYtoComponentMap).field_0x8 - *(int *)&(this->XYtoComponentMap).field_0x34
          != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      uVar3 = *(undefined8 *)
               (*(longlong *)&this_00->field_0x0 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      iVar2 = *(int *)&(this->XYComponentBounds).field0_0x0;
      iVar16 = (int)uVar3;
      iVar14 = iVar16;
      if (iVar2 < iVar16) {
        iVar14 = iVar2;
      }
      iVar2 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 4);
      *(int *)&(this->XYComponentBounds).field0_0x0 = iVar14;
      iVar7 = (int)((ulonglong)uVar3 >> 0x20);
      iVar14 = iVar7;
      if (iVar2 < iVar7) {
        iVar14 = iVar2;
      }
      *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 4) = iVar14;
      iVar2 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 8);
      if (iVar16 < iVar2) {
        iVar16 = iVar2;
      }
      iVar2 = *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 0xc);
      *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 8) = iVar16;
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      *(int *)((longlong)&(this->XYComponentBounds).field0_0x0 + 0xc) = iVar7;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// UnregisterCollisionComponent @ 145f1feb0

void __thiscall
ULandscapeInfo::UnregisterCollisionComponent
          (ULandscapeInfo *this,ULandscapeHeightfieldCollisionComponent *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar5;
  uint uVar6;
  uint uVar7;
  TIntPoint<int>_u_0 TVar8;
  uint uVar9;
  TIntPoint<int>_u_0 local_res10;
  
  if (param_1 == (ULandscapeHeightfieldCollisionComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5887638317222074825>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\Landscape.cpp"
                       ,0x19c9,"Component");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    lVar1 = (longlong)param_1->SectionBaseY / (longlong)param_1->CollisionSizeQuads;
    uVar2 = (longlong)param_1->SectionBaseX / (longlong)param_1->CollisionSizeQuads;
    TVar8 = (TIntPoint<int>_u_0)(lVar1 << 0x20 | uVar2 & 0xffffffff);
    pTVar5 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                     *)&this->XYtoCollisionComponentMap,(TIntPoint<int>)TVar8);
    if (((pTVar5 != (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)
                    0x0) &&
        (*(ULandscapeHeightfieldCollisionComponent **)&pTVar5->field_0x8 == param_1)) &&
       (*(int *)&(this->XYtoCollisionComponentMap).field_0x8 !=
        *(int *)&(this->XYtoCollisionComponentMap).field_0x34)) {
      uVar6 = (uint)lVar1;
      uVar7 = (int)uVar2 - uVar6 ^ uVar6 >> 0xd;
      uVar9 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
      uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar9 >> 0xd;
      uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 0xc;
      uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 << 0x10;
      uVar6 = (uVar6 - uVar9) - uVar7 ^ uVar9 >> 5;
      uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 3;
      uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 << 10;
      local_res10 = TVar8;
      TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Math::TIntPoint<int>_>
                ((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                  *)&this->XYtoCollisionComponentMap,(uVar6 - uVar9) - uVar7 ^ uVar9 >> 0xf,
                 (TIntPoint<int> *)&local_res10._s_0);
    }
  }
  return;
}

// UpdateNanite @ 145f20010

void __thiscall ULandscapeInfo::UpdateNanite(ULandscapeInfo *this,ITargetPlatform *param_1)

{
  FWeakObjectPtr::Get(&(this->LandscapeActor).WeakPtr);
  return;
}

// StaticClass @ 145f66480

UClass * __cdecl ULandscapeInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfo",
               &Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton,
               StaticRegisterNativesULandscapeInfo,0x210,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeInfo>,
               InternalVTableHelperCtorCaller<ULandscapeInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton;
}

// ULandscapeInfo @ 145f7b830

ULandscapeInfo * __thiscall
ULandscapeInfo::ULandscapeInfo(ULandscapeInfo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeInfo__6B_;
  (this->LandscapeActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  *(undefined8 *)&this->XYtoComponentMap = 0;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x34 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->XYtoComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->XYtoComponentMap).field_0x48 = 0;
  *(undefined8 *)&this->XYtoCollisionComponentMap = 0;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x34 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->XYtoCollisionComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x48 = 0;
  (this->StreamingProxies_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingProxies_DEPRECATED).ArrayNum = 0;
  (this->StreamingProxies_DEPRECATED).ArrayMax = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedComponents).Elements.field_0x30 = 0xffffffff;
  (this->SelectedComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedComponents).HashSize = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedRegionComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedRegionComponents).Elements.field_0x30 = 0xffffffff;
  (this->SelectedRegionComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedRegionComponents).HashSize = 0;
  (this->XYComponentBounds).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->XYComponentBounds).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  *(undefined8 *)&this->SelectedRegion = 0;
  *(undefined8 *)&(this->SelectedRegion).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedRegion).field_0x20 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedRegion).field_0x34 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SelectedRegion).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedRegion).field_0x48 = 0;
  (this->SortedStreamingProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedStreamingProxies).ArrayNum = 0;
  (this->SortedStreamingProxies).ArrayMax = 0;
  return this;
}

// ~ULandscapeInfo @ 145f7e250

void __thiscall ULandscapeInfo::~ULandscapeInfo(ULandscapeInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7ULandscapeInfo__6B_;
  pFVar1 = (this->SortedStreamingProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SelectedRegion).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SelectedRegion).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SelectedRegion);
  (this->SelectedRegionComponents).HashSize = 0;
  FVar3 = (this->SelectedRegionComponents).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedRegionComponents).Elements);
  (this->SelectedComponents).HashSize = 0;
  FVar3 = (this->SelectedComponents).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULandscapeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedComponents).Elements);
  pFVar1 = (this->StreamingProxies_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->XYtoCollisionComponentMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->XYtoCollisionComponentMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->XYtoCollisionComponentMap);
  *(undefined4 *)&(this->XYtoComponentMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->XYtoComponentMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->XYtoComponentMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145f938e0

UClass * __cdecl ULandscapeInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeInfo",
               &Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton,
               StaticRegisterNativesULandscapeInfo,0x210,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeInfo>,
               InternalVTableHelperCtorCaller<ULandscapeInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeInfo.InnerSingleton;
}

// Serialize @ 145fa1b30

void __thiscall ULandscapeInfo::Serialize(ULandscapeInfo *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesULandscapeInfo @ 145fa47a0

void __cdecl ULandscapeInfo::StaticRegisterNativesULandscapeInfo(void)

{
  return;
}

// __VTableCtorCaller @ 145fa97e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl ULandscapeInfo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULandscapeInfo__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x4 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

