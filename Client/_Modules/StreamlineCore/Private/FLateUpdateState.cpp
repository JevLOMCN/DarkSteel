// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 2

// FLateUpdateState @ 14de6fcb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLateUpdateState * __thiscall
FStreamlineCameraManager::FLateUpdateState::FLateUpdateState(FLateUpdateState *this)

{
  void *pvVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
  FVar3;
  FName local_res8;
  
  *(undefined8 *)&this->Primitives = 0;
  *(undefined8 *)&(this->Primitives).field_0x8 = 0;
  *(undefined8 *)&(this->Primitives).field_0x20 = 0;
  *(undefined4 *)&(this->Primitives).field_0x28 = 0;
  *(undefined4 *)&(this->Primitives).field_0x2c = 0x80;
  *(undefined4 *)&(this->Primitives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Primitives).field_0x34 = 0;
  *(undefined8 *)&(this->Primitives).field_0x40 = 0;
  *(undefined4 *)&(this->Primitives).field_0x48 = 0;
  (this->CollisionParams).StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->CollisionParams).OwnerTag.ComparisonIndex = 0;
  (this->CollisionParams).OwnerTag.Number = 0;
  (this->CollisionParams).IgnoreComponents.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CollisionParams).IgnoreComponents.ArrayNum = 0;
  (this->CollisionParams).IgnoreComponents.ArrayMax = 8;
  (this->CollisionParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CollisionParams).IgnoreSourceObjects.ArrayNum = 0;
  (this->CollisionParams).IgnoreSourceObjects.ArrayMax = 4;
  (this->CollisionParams).TraceTag.ComparisonIndex = 0;
  pvVar1 = ThreadLocalStoragePointer;
  (this->CollisionParams).TraceTag.Number = 0;
  (this->CollisionParams).bTraceComplex = false;
  (this->CollisionParams).bFindInitialOverlaps = true;
  (this->CollisionParams).bReturnFaceIndex = false;
  (this->CollisionParams).bReturnPhysicalMaterial = false;
  (this->CollisionParams).MobilityType = Any;
  (this->CollisionParams).bComponentListUnique = true;
  (this->CollisionParams).IgnoreMask = '\0';
  (this->CollisionParams).bIgnoreBlocks = false;
  (this->CollisionParams).bIgnoreTouches = false;
  (this->CollisionParams).bSkipNarrowPhase = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar2 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar2,L"UnknownSceneQuery","STATGROUP_Collision"
               ,"STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar3 = `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
          __l2::StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar2 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FVar3 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                          ::__l2::StatPtr_UnknownSceneQuery,*pFVar2,L"UnknownSceneQuery",
                         "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,
                         true,false,MCR_Invalid);
  }
  (this->CollisionParams).StatId.StatIdPtr = (TStatIdData *)FVar3;
  (this->CollisionParams).bDebugQuery = false;
  (this->CollisionParams).bTraceIntoSubComponents = true;
  (this->CollisionParams).bReplaceHitWithSubComponents = true;
  return this;
}

// ~FLateUpdateState @ 14de70b70

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
FStreamlineCameraManager::FLateUpdateState::~FLateUpdateState(FLateUpdateState *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = (this->CollisionParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->CollisionParams).IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->Primitives).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Primitives).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Primitives);
  return;
}

