// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// FCollisionQueryParams @ 14d2b8620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCollisionQueryParams * __thiscall
FCollisionQueryParams::FCollisionQueryParams
          (FCollisionQueryParams *this,FName param_1,bool param_2,AActor *param_3)

{
  FName *pFVar1;
  TStatId local_res8;
  FName local_28 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
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
    pFVar1 = ::FName::FName(local_28,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar1,L"UnknownSceneQuery","STATGROUP_Collision"
               ,"STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res8.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar1 = ::FName::FName(local_28,"UnknownSceneQuery");
    local_res8.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar1,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  FCollisionQueryParams(this,param_1,&local_res8,param_2,param_3);
  return this;
}

