// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 106

// EditGeneratedData<FNDI_StaticMesh_GeneratedData> @ 148ef3780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDI_StaticMesh_GeneratedData * __thiscall
FNiagaraWorldManager::EditGeneratedData<FNDI_StaticMesh_GeneratedData>(FNiagaraWorldManager *this)

{
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNDI_StaticMesh_GeneratedData **ppFVar5;
  FNDI_StaticMesh_GeneratedData **ppFVar6;
  FNDI_StaticMesh_GeneratedData *pFVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FNDI_StaticMesh_GeneratedData_*_&&> local_res10;
  uint *local_28;
  FNDI_StaticMesh_GeneratedData ***local_20;
  
  ppFVar6 = (FNDI_StaticMesh_GeneratedData **)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    uVar12 = 0;
    pwVar11 = L"FNDI_StaticMesh_GeneratedData";
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNDI_StaticMesh_GeneratedData *)(*pcVar2)();
      return pFVar7;
    }
    uVar9 = 0x46;
    do {
      pwVar11 = pwVar11 + 1;
      uVar8 = (short)uVar9 - (-(ushort)(uVar9 - 0x61 < 0x1a) & 0x20);
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar12 ^ (byte)uVar8)];
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar8 >> 8 ^ uVar12) & 0xff];
      uVar9 = (uint)(ushort)*pwVar11;
    } while (*pwVar11 != L'\0');
    `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'::__l2::
    Hash = uVar12;
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00 = &this->DIGeneratedData;
  local_res8[0] =
       `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'::__l2
       ::Hash;
  if (*(int *)&(this->DIGeneratedData).field_0x8 != *(int *)&(this->DIGeneratedData).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DIGeneratedData).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DIGeneratedData).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->DIGeneratedData).field_0x48 - 1U &
                    `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'
                    ::__l2::Hash) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) ==
            `public:_static_unsigned_int___cdecl_FNDI_StaticMesh_GeneratedData::GetTypeHash(void)'::
            __l2::Hash) {
          ppFVar5 = (FNDI_StaticMesh_GeneratedData **)(lVar1 + 8);
          if (lVar1 == 0) {
            ppFVar5 = ppFVar6;
          }
          if (ppFVar5 != (FNDI_StaticMesh_GeneratedData **)0x0) {
            return *ppFVar5;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  ppFVar5 = ::operator_new(0x20);
  if (ppFVar5 != (FNDI_StaticMesh_GeneratedData **)0x0) {
    *ppFVar5 = (FNDI_StaticMesh_GeneratedData *)&___7FNDI_StaticMesh_GeneratedData__6B_;
    ppFVar5[1] = (FNDI_StaticMesh_GeneratedData *)0x0;
    ppFVar5[2] = (FNDI_StaticMesh_GeneratedData *)0x0;
    ppFVar5[3] = (FNDI_StaticMesh_GeneratedData *)0x0;
    ppFVar6 = ppFVar5;
  }
  local_28 = local_res8;
  local_20 = &local_res10.Value;
  local_res10.Value = ppFVar6;
  TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FNDI_StaticMesh_GeneratedData_*_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res10,(bool *)&local_28);
  return *(FNDI_StaticMesh_GeneratedData **)
          (*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_res10.Key * 0x18);
}

// EditGeneratedData<FNDI_Landscape_GeneratedData> @ 14915e680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDI_Landscape_GeneratedData * __thiscall
FNiagaraWorldManager::EditGeneratedData<FNDI_Landscape_GeneratedData>(FNiagaraWorldManager *this)

{
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNDI_Landscape_GeneratedData **ppFVar5;
  FNDI_Landscape_GeneratedData **ppFVar6;
  FNDI_Landscape_GeneratedData *pFVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FNDI_Landscape_GeneratedData_*_&&> local_res10;
  uint *local_28;
  FNDI_Landscape_GeneratedData ***local_20;
  
  ppFVar6 = (FNDI_Landscape_GeneratedData **)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uVar12 = 0;
    pwVar11 = L"FNDI_Landscape_GeneratedData";
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNDI_Landscape_GeneratedData *)(*pcVar2)();
      return pFVar7;
    }
    uVar9 = 0x46;
    do {
      pwVar11 = pwVar11 + 1;
      uVar8 = (short)uVar9 - (-(ushort)(uVar9 - 0x61 < 0x1a) & 0x20);
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar12 ^ (byte)uVar8)];
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar8 >> 8 ^ uVar12) & 0xff];
      uVar9 = (uint)(ushort)*pwVar11;
    } while (*pwVar11 != L'\0');
    ::Hash = uVar12;
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = &this->DIGeneratedData;
  local_res8[0] = ::Hash;
  if (*(int *)&(this->DIGeneratedData).field_0x8 != *(int *)&(this->DIGeneratedData).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DIGeneratedData).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DIGeneratedData).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->DIGeneratedData).field_0x48 - 1U & ::Hash) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == ::Hash) {
          ppFVar5 = (FNDI_Landscape_GeneratedData **)(lVar1 + 8);
          if (lVar1 == 0) {
            ppFVar5 = ppFVar6;
          }
          if (ppFVar5 != (FNDI_Landscape_GeneratedData **)0x0) {
            return *ppFVar5;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  ppFVar5 = ::operator_new(0x30);
  if (ppFVar5 != (FNDI_Landscape_GeneratedData **)0x0) {
    *ppFVar5 = (FNDI_Landscape_GeneratedData *)&___7FNDI_Landscape_GeneratedData__6B_;
    ppFVar5[1] = (FNDI_Landscape_GeneratedData *)0x0;
    ppFVar5[2] = (FNDI_Landscape_GeneratedData *)0x0;
    ppFVar5[3] = (FNDI_Landscape_GeneratedData *)0x0;
    ppFVar5[4] = (FNDI_Landscape_GeneratedData *)0x0;
    ppFVar5[5] = (FNDI_Landscape_GeneratedData *)0x0;
    ppFVar6 = ppFVar5;
  }
  local_28 = local_res8;
  local_20 = &local_res10.Value;
  local_res10.Value = ppFVar6;
  TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FNDI_Landscape_GeneratedData_*_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res10,(bool *)&local_28);
  return *(FNDI_Landscape_GeneratedData **)
          (*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_res10.Key * 0x18);
}

// AddReferencedObject @ 1491b54d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::AddReferencedObject(FNiagaraWorldManager *this,UObject *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UObject *local_18 [2];
  
  pTVar2 = &this->ReferencedObjects;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar6 + (longlong)(this->ReferencedObjects).ArrayNum * 8;
  do {
    if (pFVar6 == pFVar3) {
LAB_1491b553c:
      local_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(this->ReferencedObjects).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = (this->ReferencedObjects).ArrayNum;
      piVar1 = &(this->ReferencedObjects).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ReferencedObjects).ArrayNum = iVar5 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18[0]);
      }
      return;
    }
    if (*(UObject **)pFVar6 == (UObject *)0x0) {
      bVar7 = param_1 == (UObject *)0x0;
    }
    else {
      bVar7 = *(UObject **)pFVar6 == param_1;
    }
    if (bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReferencedObjects.Contains(InObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraWorldManager.h"
                         ,0x130,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1491b553c;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// RemoveReferencedObject @ 1491deaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::RemoveReferencedObject(FNiagaraWorldManager *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  TObjectPtr<UObject>_u_0 local_res8;
  
  pFVar3 = (this->ReferencedObjects).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ReferencedObjects).ArrayNum * 8;
  for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
    if (*(UObject **)pFVar3 == (UObject *)0x0) {
      bVar4 = param_1 == (UObject *)0x0;
    }
    else {
      bVar4 = *(UObject **)pFVar3 == param_1;
    }
    if (bVar4) goto LAB_1491deb0a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ReferencedObjects.Contains(InObject)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraWorldManager.h"
                     ,0x135,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1491deb0a:
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->ReferencedObjects,(TObjectPtr<UObject> *)&local_res8.ObjectPtr,Default);
  return;
}

// EditGeneratedData<FNDI_SkeletalMesh_GeneratedData> @ 1491f68d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDI_SkeletalMesh_GeneratedData * __thiscall
FNiagaraWorldManager::EditGeneratedData<FNDI_SkeletalMesh_GeneratedData>(FNiagaraWorldManager *this)

{
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNDI_SkeletalMesh_GeneratedData **ppFVar5;
  FNDI_SkeletalMesh_GeneratedData **ppFVar6;
  FNDI_SkeletalMesh_GeneratedData *pFVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FNDI_SkeletalMesh_GeneratedData_*_&&> local_res10;
  uint *local_28;
  FNDI_SkeletalMesh_GeneratedData ***local_20;
  
  ppFVar6 = (FNDI_SkeletalMesh_GeneratedData **)0x0;
  uVar12 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    pwVar11 = L"FNDI_SkeletalMesh_GeneratedData";
    if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CRCTable_DEPRECATED[1] != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                           ,0xb4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FNDI_SkeletalMesh_GeneratedData *)(*pcVar2)();
      return pFVar7;
    }
    uVar9 = 0x46;
    do {
      pwVar11 = pwVar11 + 1;
      uVar8 = (short)uVar9 - (-(ushort)(uVar9 - 0x61 < 0x1a) & 0x20);
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar12 ^ (byte)uVar8)];
      uVar12 = uVar12 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar8 >> 8 ^ uVar12) & 0xff];
      uVar9 = (uint)(ushort)*pwVar11;
    } while (*pwVar11 != L'\0');
    `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'::__l2::
    Hash = uVar12;
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00 = &this->DIGeneratedData;
  local_res8[0] =
       `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'::
       __l2::Hash;
  if (*(int *)&(this->DIGeneratedData).field_0x8 != *(int *)&(this->DIGeneratedData).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DIGeneratedData).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DIGeneratedData).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->DIGeneratedData).field_0x48 - 1U &
                    `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'
                    ::__l2::Hash) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) ==
            `public:_static_unsigned_int___cdecl_FNDI_SkeletalMesh_GeneratedData::GetTypeHash(void)'
            ::__l2::Hash) {
          ppFVar5 = (FNDI_SkeletalMesh_GeneratedData **)(lVar1 + 8);
          if (lVar1 == 0) {
            ppFVar5 = ppFVar6;
          }
          if (ppFVar5 != (FNDI_SkeletalMesh_GeneratedData **)0x0) {
            return *ppFVar5;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  ppFVar5 = ::operator_new(0x90);
  if (ppFVar5 != (FNDI_SkeletalMesh_GeneratedData **)0x0) {
    ppFVar5[4] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[5] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[9] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0xb] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    *ppFVar5 = (FNDI_SkeletalMesh_GeneratedData *)&___7FNDI_SkeletalMesh_GeneratedData__6B_;
    ppFVar5[1] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[2] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[3] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[6] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    *(undefined4 *)(ppFVar5 + 7) = 0;
    *(undefined4 *)((longlong)ppFVar5 + 0x3c) = 0x80;
    *(undefined4 *)(ppFVar5 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)ppFVar5 + 0x44) = 0;
    ppFVar5[10] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0xc] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0xd] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0xe] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0xf] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0x10] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar5[0x11] = (FNDI_SkeletalMesh_GeneratedData *)0x0;
    ppFVar6 = ppFVar5;
  }
  local_28 = local_res8;
  local_20 = &local_res10.Value;
  local_res10.Value = ppFVar6;
  TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FNDI_SkeletalMesh_GeneratedData_*_&&>_>
            ((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_res10,(bool *)&local_28);
  return *(FNDI_SkeletalMesh_GeneratedData **)
          (*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_res10.Key * 0x18);
}

// FNiagaraWorldManager @ 149427ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraWorldManager * __thiscall
FNiagaraWorldManager::FNiagaraWorldManager(FNiagaraWorldManager *this)

{
  TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
  *pTVar1;
  FNiagaraDataChannelManager *this_00;
  FNiagaraDataChannelManager *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FTickFunction *this_01;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->ActiveNiagaraTickGroup = -1;
  pFVar2 = (FNiagaraDataChannelManager *)0x0;
  this->_padding_ = (longlong)&___7FNiagaraWorldManager__6B_;
  this->World = (UWorld *)0x0;
  this_01 = (FTickFunction *)this->TickFunctions;
  lVar4 = 0xe;
  this->bUseTickPasses = GNiagaraWorldManagerUseTickPasses;
  lVar3 = 0xe;
  do {
    FTickFunction::FTickFunction(this_01);
    this_01->_padding_ = (longlong)&___7FNiagaraWorldManagerTickFunction__6B_;
    this_01[1]._padding_ = 0;
    this_01[1].TickGroup = '\x02';
    this_01[1].EndTickGroup = '\0';
    *(undefined2 *)&this_01[1].field_0xa = 0;
    this_01 = (FTickFunction *)&this_01[1].Prerequisites;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)&this->ParameterCollections = 0;
  pTVar1 = this->SystemSimulations[0];
  *(undefined8 *)&(this->ParameterCollections).field_0x8 = 0;
  *(undefined8 *)&(this->ParameterCollections).field_0x20 = 0;
  *(undefined4 *)&(this->ParameterCollections).field_0x28 = 0;
  *(undefined4 *)&(this->ParameterCollections).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterCollections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterCollections).field_0x34 = 0;
  *(undefined8 *)&(this->ParameterCollections).field_0x40 = 0;
  *(undefined4 *)&(this->ParameterCollections).field_0x48 = 0;
  do {
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&pTVar1->field_0x8 = 0;
    *(undefined8 *)&pTVar1->field_0x20 = 0;
    *(undefined4 *)&pTVar1->field_0x28 = 0;
    *(undefined4 *)&pTVar1->field_0x2c = 0x80;
    *(undefined4 *)&pTVar1->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar1->field_0x34 = 0;
    *(undefined8 *)&pTVar1->field_0x40 = 0;
    *(undefined4 *)&pTVar1->field_0x48 = 0;
    pTVar1 = pTVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (this->SimulationsWithPostActorWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationsWithPostActorWork).ArrayNum = 0;
  (this->SimulationsWithPostActorWork).ArrayMax = 0;
  (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationsWithEndOfFrameWait).ArrayNum = 0;
  (this->SimulationsWithEndOfFrameWait).ArrayMax = 0;
  (this->CachedViewInfo).AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraCachedViewInfo>)0x0;
  (this->CachedViewInfo).ArrayNum = 0;
  (this->CachedViewInfo).ArrayMax = 8;
  (this->ComponentPool).field0_0x0.DebugPtr = (UNiagaraComponentPool *)0x0;
  *(undefined8 *)&this->DIGeneratedData = 0;
  *(undefined8 *)&(this->DIGeneratedData).field_0x8 = 0;
  *(undefined8 *)&(this->DIGeneratedData).field_0x20 = 0;
  this->bPoolIsPrimed = false;
  *(undefined4 *)&(this->DIGeneratedData).field_0x28 = 0;
  *(undefined4 *)&(this->DIGeneratedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DIGeneratedData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DIGeneratedData).field_0x34 = 0;
  *(undefined8 *)&(this->DIGeneratedData).field_0x40 = 0;
  *(undefined4 *)&(this->DIGeneratedData).field_0x48 = 0;
  (this->DeferredDeletionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  (this->DeferredDeletionQueue).ArrayMax = 0;
  *(undefined8 *)&this->ScalabilityManagers = 0;
  *(undefined8 *)&(this->ScalabilityManagers).field_0x8 = 0;
  *(undefined8 *)&(this->ScalabilityManagers).field_0x20 = 0;
  this->bScalabilityManagersLocked = false;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x28 = 0;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x34 = 0;
  *(undefined8 *)&(this->ScalabilityManagers).field_0x40 = 0;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x48 = 0;
  (this->DeferredMethods).Queue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredMethods).Queue.ArrayNum = 0;
  (this->DeferredMethods).Queue.ArrayMax = 0;
  this->bAppHasFocus = true;
  this->bIsTearingDown = false;
  this->bIsCleaningUp = false;
  this->WorldLoopTime = 0.0;
  this->RequestedDebugPlaybackMode = Play;
  this->DebugPlaybackMode = Play;
  this->DebugPlaybackRate = 1.0;
  (this->NiagaraDebugHud).Ptr = (FNiagaraDebugHud *)0x0;
  *(undefined8 *)&this->SystemScalabilityKillCounts = 0;
  *(undefined8 *)&(this->SystemScalabilityKillCounts).field_0x8 = 0;
  *(undefined8 *)&(this->SystemScalabilityKillCounts).field_0x20 = 0;
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x28 = 0;
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x34 = 0;
  *(undefined8 *)&(this->SystemScalabilityKillCounts).field_0x40 = 0;
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x48 = 0;
  (this->ComponentLeakDetector).Ptr = (FNiagaraComponentLeakDetector *)0x0;
  *(undefined8 *)&this->CullProxyMap = 0;
  *(undefined8 *)&(this->CullProxyMap).field_0x8 = 0;
  *(undefined8 *)&(this->CullProxyMap).field_0x20 = 0;
  *(undefined4 *)&(this->CullProxyMap).field_0x28 = 0;
  *(undefined4 *)&(this->CullProxyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CullProxyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CullProxyMap).field_0x34 = 0;
  *(undefined8 *)&(this->CullProxyMap).field_0x40 = 0;
  *(undefined4 *)&(this->CullProxyMap).field_0x48 = 0;
  (this->ReferencedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedObjects).ArrayNum = 0;
  (this->ReferencedObjects).ArrayMax = 0;
  this_00 = ::operator_new(0x60);
  if (this_00 != (FNiagaraDataChannelManager *)0x0) {
    pFVar2 = FNiagaraDataChannelManager::FNiagaraDataChannelManager(this_00,this);
  }
  (this->DataChannelManager).Ptr = pFVar2;
  (this->ObjectPool).Ptr = (FNiagaraSimpleObjectPool *)0x0;
  (this->FXTypeCSVListener).Object = (FParticlePerfStatsListener *)0x0;
  (this->FXTypeCSVListener).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastRenderThreadUpdateTime).Object = (atomic<float> *)0x0;
  (this->LastRenderThreadUpdateTime).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RenderThreadWorldTimeLag = 0.0;
  return this;
}

// ~FNiagaraWorldManager @ 14942c110

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::~FNiagaraWorldManager(FNiagaraWorldManager *this)

{
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FNiagaraDataChannelManager *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FNiagaraComponentLeakDetector *pFVar4;
  FNiagaraDebugHud *this_01;
  ForElementType<FNiagaraCachedViewInfo> FVar5;
  TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  FTickFunction *this_02;
  longlong lVar7;
  longlong lVar8;
  
  this->_padding_ = (longlong)&___7FNiagaraWorldManager__6B_;
  OnWorldCleanup(this,true,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastRenderThreadUpdateTime).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FXTypeCSVListener).SharedReferenceCount.ReferenceController);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->ObjectPool).Ptr;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  pFVar1 = (this->DataChannelManager).Ptr;
  if (pFVar1 != (FNiagaraDataChannelManager *)0x0) {
    *(undefined4 *)&(pFVar1->Channels).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->Channels).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->Channels);
    ::operator_delete(pFVar1,0x60);
  }
  pFVar3 = (this->ReferencedObjects).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->CullProxyMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CullProxyMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CullProxyMap);
  pFVar4 = (this->ComponentLeakDetector).Ptr;
  if (pFVar4 != (FNiagaraComponentLeakDetector *)0x0) {
    *(undefined4 *)&(pFVar4->PerSystemData).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar4->PerSystemData).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar4->PerSystemData);
    ::operator_delete(pFVar4,0x58);
  }
  *(undefined4 *)&(this->SystemScalabilityKillCounts).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SystemScalabilityKillCounts).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemScalabilityKillCounts);
  this_01 = (this->NiagaraDebugHud).Ptr;
  if (this_01 != (FNiagaraDebugHud *)0x0) {
    FNiagaraDebugHud::~FNiagaraDebugHud(this_01);
    ::operator_delete(this_01,0x348);
  }
  DestructItems<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->DeferredMethods).Queue.AllocatorInstance.Data,
             (this->DeferredMethods).Queue.ArrayNum);
  pFVar3 = (this->DeferredMethods).Queue.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ScalabilityManagers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ScalabilityManagers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalabilityManagers);
  DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
            ((TSharedPtr<FNiagaraSystemInstance,1> *)
             (this->DeferredDeletionQueue).AllocatorInstance.Data,
             (this->DeferredDeletionQueue).ArrayNum);
  pFVar3 = (this->DeferredDeletionQueue).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->DIGeneratedData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DIGeneratedData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DIGeneratedData);
  FVar5 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
    FVar5 = (ForElementType<FNiagaraCachedViewInfo>)&this->CachedViewInfo;
  }
  DestructItems<FNiagaraCachedViewInfo,int>
            ((FNiagaraCachedViewInfo *)FVar5,(this->CachedViewInfo).ArrayNum);
  FVar5 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FNiagaraCachedViewInfo>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
            ((TSharedRef<FNiagaraSystemSimulation,1> *)
             (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data,
             (this->SimulationsWithEndOfFrameWait).ArrayNum);
  pFVar3 = (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar6 = (TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&this->SimulationsWithPostActorWork;
  DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
            ((TSharedRef<FNiagaraSystemSimulation,1> *)
             (((TArray<TSharedRef<FNiagaraSystemSimulation,1>,TSizedDefaultAllocator<32>_> *)pTVar6)
             ->AllocatorInstance).Data,(this->SimulationsWithPostActorWork).ArrayNum);
  pFVar3 = (((TArray<TSharedRef<FNiagaraSystemSimulation,1>,TSizedDefaultAllocator<32>_> *)pTVar6)->
           AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar8 = 0xe;
  lVar7 = 0xe;
  do {
    lVar7 = lVar7 + -1;
    *(undefined4 *)((longlong)(pTVar6 + 0xffffffffffffffff) + 0x30) = 0;
    if (*(void **)((longlong)(pTVar6 + 0xffffffffffffffff) + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar6 + 0xffffffffffffffff) + 0x28));
    }
    TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)(pTVar6 + 0xfffffffffffffffe) + 0x20U));
    pTVar6 = (TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)(pTVar6 + 0xfffffffffffffffe) + 0x20U);
  } while (lVar7 != 0);
  this_02 = (FTickFunction *)&this->ParameterCollections;
  *(undefined4 *)&(this->ParameterCollections).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParameterCollections).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_02);
  do {
    this_02 = (FTickFunction *)&this_02[-2].Prerequisites.ArrayNum;
    FTickFunction::~FTickFunction(this_02);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddDebugHUDMessage @ 149430820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::AddDebugHUDMessage
          (FNiagaraWorldManager *this,FName param_1,FNiagaraDebugMessage *param_2)

{
  FNiagaraDebugHud *pFVar1;
  uint uVar2;
  FNiagaraDebugMessage *pFVar3;
  FName FStackX_10;
  
  pFVar1 = (this->NiagaraDebugHud).Ptr;
  if (pFVar1 == (FNiagaraDebugHud *)0x0) {
    return;
  }
  FStackX_10 = param_1;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
                       *)&pFVar1->Messages,uVar2 + param_1.Number,&FStackX_10);
  pFVar3->Type = param_2->Type;
  ::FString::operator=(&pFVar3->Message,&param_2->Message);
  pFVar3->Lifetime = param_2->Lifetime;
  return;
}

// AddReferencedObjects @ 149430bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::AddReferencedObjects(FNiagaraWorldManager *this,FReferenceCollector *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FReferenceCollector::
  AddReferencedObjects<UNiagaraParameterCollection,UNiagaraParameterCollectionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
            (param_1,(TMapBase<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
                      *)&this->ParameterCollections,(UObject *)0x0,(FProperty *)0x0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ComponentPool);
  puVar2 = &(this->ScalabilityManagers).field_0x10;
  iVar10 = 0;
  iVar3 = *(int *)&(this->ScalabilityManagers).field_0x28;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149430caf;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_149430caf:
  uVar9 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ScalabilityManagers).field_0x8 -
                       *(int *)&(this->ScalabilityManagers).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149430dd0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_149430dd0:
  while( true ) {
    if (*(int *)&(this->ScalabilityManagers).field_0x8 -
        *(int *)&(this->ScalabilityManagers).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    lVar8 = *(longlong *)&this->ScalabilityManagers + (longlong)TStack_60.CurrentBitIndex * 0xf8;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar8);
    FNiagaraScalabilityManager::AddReferencedObjects
              ((FNiagaraScalabilityManager *)(lVar8 + 8),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FReferenceCollector::
  AddReferencedObjects<UNiagaraSystem,UNiagaraCullProxyComponent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
            (param_1,(TMapBase<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
                      *)&this->CullProxyMap,(UObject *)0x0,(FProperty *)0x0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ReferencedObjects).AllocatorInstance.Data,
             (this->ReferencedObjects).ArrayNum,0,0);
  FNiagaraDataChannelManager::AddReferencedObjects((this->DataChannelManager).Ptr,param_1);
  return;
}

// CalculateScalabilityState @ 14943d6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::CalculateScalabilityState
          (FNiagaraWorldManager *this,UNiagaraSystem *param_1,
          FNiagaraSystemScalabilitySettings *param_2,UNiagaraEffectType *param_3,
          UNiagaraComponent *param_4,bool param_5,float param_6,FNiagaraScalabilityState *param_7)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  UWorld *pUVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  double dVar8;
  bool bVar9;
  TVector<double>_u_0 local_b8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_68;
  
  if (ScalabilityCullingMode == Disabled) {
    return;
  }
  param_7->bCulled = '\0';
  DistanceCull(this,param_3,param_2,param_4,param_7);
  if (GEnableNiagaraVisCulling != 0) {
    (**(code **)(param_4->_padding_ + 0x598))(param_4);
    pUVar4 = this->World;
    fVar1 = this->RenderThreadWorldTimeLag;
    dVar8 = (double)GLastRenderTimeSafetyBias;
    fVar2 = pUVar4->DeltaTimeSeconds;
    fVar7 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)param_4);
    dVar8 = (((pUVar4->LastRenderTime - (double)fVar7) - (double)fVar2) - (double)fVar1) - dVar8;
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    if (param_5) {
      bVar9 = param_5;
      if (param_1->bFixedBounds == 0) goto LAB_14943d853;
    }
    else {
      if ((GbAllowVisibilityCullingForDynamicBounds == 0) && (param_1->bFixedBounds == 0))
      goto LAB_14943d853;
      bVar9 = false;
    }
    local_b8._s_0.X = local_98;
    local_b8._s_0.Y = dStack_90;
    uStack_a0 = (undefined4)local_68;
    uStack_9c = (undefined4)((ulonglong)local_68 >> 0x20);
    local_b8._16_4_ = local_88;
    local_b8._20_4_ = uStack_84;
    ViewBasedCulling(this,param_3,param_2,(TSphere<double> *)&local_b8._s_0,(float)dVar8,bVar9,
                     param_7);
  }
LAB_14943d853:
  if (((GEnableNiagaraInstanceCountCulling != 0) && (param_5)) &&
     ((param_3->SignificanceHandler).field0_0x0.DebugPtr == (UNiagaraSignificanceHandler *)0x0)) {
    InstanceCountCull(this,param_3,param_1,param_2,param_7);
  }
  if (((GEnableNiagaraGlobalBudgetCulling == 0) || (FFXBudget::bEnabled == false)) ||
     (INiagaraModule::bUseGlobalFXBudget == false)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  uVar3 = param_7->field_0xa;
  if (((param_7->bCulled == '\0') && (bVar9)) && ((param_2->BudgetScaling).bCullByGlobalBudget != 0)
     ) {
    if ((ScalabilityCullingMode != Enabled) ||
       (param_6 < (param_2->BudgetScaling).MaxGlobalBudgetUsage)) {
      bVar5 = 0;
      bVar6 = 0;
    }
    else {
      bVar5 = 4;
      bVar6 = 0x80;
    }
    param_7->field_0xa = (uVar3 & 4 | bVar5) ^ uVar3 & 0xfb | bVar6;
  }
  return;
}

// CalculateScalabilityState @ 14943d920

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::CalculateScalabilityState
          (FNiagaraWorldManager *this,UNiagaraSystem *param_1,
          FNiagaraSystemScalabilitySettings *param_2,UNiagaraEffectType *param_3,
          TVector<double> *param_4,bool param_5,float param_6,FNiagaraScalabilityState *param_7)

{
  undefined1 uVar1;
  double dVar2;
  bool bVar3;
  TBox<double> *pTVar4;
  byte bVar5;
  byte bVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auStackY_c8 [32];
  TVector<double>_u_0 local_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (ScalabilityCullingMode != Disabled) {
    param_7->bCulled = '\0';
    local_88._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    DistanceCull(this,param_3,param_2,(TVector<double> *)&local_88._s_0,param_7);
    if ((GEnableNiagaraVisCulling != 0) && (param_1->bFixedBounds != 0)) {
      pTVar4 = UNiagaraSystem::GetFixedBounds(param_1,(TBox<double> *)&local_88._s_0);
      dVar10 = (pTVar4->Max).field0_0x0._s_0.Y - (pTVar4->Min).field0_0x0._s_0.Y;
      dVar7 = (pTVar4->Max).field0_0x0._s_0.X - (pTVar4->Min).field0_0x0._s_0.X;
      dVar2 = (pTVar4->Max).field0_0x0._s_0.Z - (pTVar4->Min).field0_0x0._s_0.Z;
      auVar8._0_8_ = dVar7 * dVar7;
      auVar8._8_8_ = 0;
      local_88._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (dVar10 * dVar10 + auVar8._0_8_ + dVar2 * dVar2) * __real_3fd0000000000000;
      auVar9 = sqrtpd(auVar8,auVar9);
      uStack_70 = auVar9._0_4_;
      uStack_6c = auVar9._4_4_;
      ViewBasedCulling(this,param_3,param_2,(TSphere<double> *)&local_88._s_0,0.0,param_5,param_7);
    }
    if (((GEnableNiagaraInstanceCountCulling != 0) && (param_5)) &&
       ((param_3->SignificanceHandler).field0_0x0.DebugPtr == (UNiagaraSignificanceHandler *)0x0)) {
      InstanceCountCull(this,param_3,param_1,param_2,param_7);
    }
    if (((GEnableNiagaraGlobalBudgetCulling == 0) || (FFXBudget::bEnabled == false)) ||
       (INiagaraModule::bUseGlobalFXBudget == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar1 = param_7->field_0xa;
    if (((param_7->bCulled == '\0') && (bVar3)) &&
       ((param_2->BudgetScaling).bCullByGlobalBudget != 0)) {
      if ((ScalabilityCullingMode != Enabled) ||
         (param_6 < (param_2->BudgetScaling).MaxGlobalBudgetUsage)) {
        bVar5 = 0;
        bVar6 = 0;
      }
      else {
        bVar5 = 4;
        bVar6 = 0x80;
      }
      param_7->field_0xa = (uVar1 & 4 | bVar5) ^ uVar1 & 0xfb | bVar6;
    }
  }
  return;
}

// CanPreCull @ 14943dc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
FNiagaraWorldManager::CanPreCull(FNiagaraWorldManager *this,UNiagaraEffectType *param_1)

{
  if ((param_1->CullReaction != Deactivate) && (param_1->CullReaction != DeactivateImmediate)) {
    return false;
  }
  return true;
}

// CleanupParameterCollections @ 14943dc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::CleanupParameterCollections(FNiagaraWorldManager *this)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->ParameterCollections).field_0x10;
  iVar10 = 0;
  iVar3 = *(int *)&(this->ParameterCollections).field_0x28;
  this_00 = &this->ParameterCollections;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->ParameterCollections).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14943dd2d;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14943dd2d:
  uVar9 = *(uint *)&(this->ParameterCollections).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ParameterCollections).field_0x8 -
                       *(int *)&(this->ParameterCollections).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ParameterCollections).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->ParameterCollections).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14943de40;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14943de40:
  while( true ) {
    if (*(int *)&(this->ParameterCollections).field_0x8 -
        *(int *)&(this->ParameterCollections).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    UNiagaraParameterCollectionInstance::Unbind
              (*(UNiagaraParameterCollectionInstance **)
                (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18),
               this->World);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->ParameterCollections).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ParameterCollections).field_0xc;
  *(undefined4 *)&(this->ParameterCollections).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ParameterCollections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterCollections).field_0x34 = 0;
  iVar3 = *(int *)&(this->ParameterCollections).field_0x2c;
  *(undefined4 *)&(this->ParameterCollections).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ParameterCollections).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ParameterCollections).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ParameterCollections).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// CleanupTransientObjectsAndManagers @ 14943df40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::CleanupTransientObjectsAndManagers(FNiagaraWorldManager *this)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
  *this_00;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *this_01;
  UNiagaraComponentPool *this_02;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_02 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_02 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_02,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  this_00 = &this->CullProxyMap;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar2 = *(longlong **)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x4a0))();
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar5 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar3 = 1 < *(int *)&(this->CullProxyMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->CullProxyMap).field_0xc;
  *(undefined4 *)&(this->CullProxyMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CullProxyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CullProxyMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->CullProxyMap).field_0x2c;
  *(undefined4 *)&(this->CullProxyMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->CullProxyMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CullProxyMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CullProxyMap).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ScalabilityManagers;
  bVar3 = 1 < *(int *)&(this->ScalabilityManagers).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->ScalabilityManagers).field_0x8);
  puVar1 = &(this->ScalabilityManagers).field_0xc;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf8,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ScalabilityManagers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x34 = 0;
  iVar5 = *(int *)&(this->ScalabilityManagers).field_0x2c;
  *(undefined4 *)&(this->ScalabilityManagers).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ScalabilityManagers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScalabilityManagers).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ScalabilityManagers).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

// DestroyAllSystemSimulations @ 14943fb60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::DestroyAllSystemSimulations(UNiagaraSystem *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1204,"FNiagaraWorldManager::DestroyAllSystemSimulations",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
               ,0x4b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1204);
  }
  iVar10 = 0;
  uVar5 = 1;
  iVar11 = 0;
  uVar9 = WorldManagers._40_4_;
  uVar6 = 0;
  if (uVar9 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar6 = *puVar12;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar6 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14943fc4e;
      uVar6 = puVar12[lVar7 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uVar6 = local_res18 + -1 + iVar11;
    if ((int)uVar9 < (int)uVar6) {
      uVar6 = uVar9;
    }
  }
LAB_14943fc4e:
  bVar3 = WorldManagers._40_1_;
  uVar13 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar10);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uVar6 = uVar9;
  if ((int)uVar9 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = WorldManagers._40_4_;
  }
  if (uVar9 != uVar6) {
    lVar7 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar7 = WorldManagers._32_8_;
    }
    uVar9 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14943fd70;
      uVar9 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14943fd70:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    DestroySystemSimulation
              (*(FNiagaraWorldManager **)
                (WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18),param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DestroySystemInstance @ 149440420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::DestroySystemInstance
          (FNiagaraWorldManager *this,TSharedPtr<FNiagaraSystemInstance,1> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x315,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x316,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->DeferredDeletionQueue).ArrayNum;
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->DeferredDeletionQueue).AllocatorInstance,piVar1);
  }
  (this->DeferredDeletionQueue).ArrayNum = iVar4 + 1;
  pFVar5 = (this->DeferredDeletionQueue).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(FNiagaraSystemInstance **)pFVar5 = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FNiagaraSystemInstance *)0x0;
  return;
}

// DestroySystemSimulation @ 1494404f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::DestroySystemSimulation(FNiagaraWorldManager *this,UNiagaraSystem *param_1)

{
  UNiagaraComponentPool *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  longlong local_68;
  longlong local_60;
  
  local_60 = 7;
  uVar5 = (uint)((ulonglong)param_1 >> 4);
  piVar17 = (int *)&this->SystemSimulations[0][0].field_0x34;
  uVar16 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar5) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  do {
    local_68 = 2;
    do {
      pFVar10 = (FScriptContainerElement *)0x0;
      if (piVar17[-0xb] != *piVar17) {
        piVar9 = *(int **)(piVar17 + 3);
        if (*(int **)(piVar17 + 3) == (int *)0x0) {
          piVar9 = piVar17 + 1;
        }
        iVar13 = piVar9[piVar17[5] - 1U & (uVar16 >> 0x10 ^ uVar16)];
        if (iVar13 != -1) {
LAB_1494405b0:
          plVar6 = (longlong *)((longlong)iVar13 * 0x20 + *(longlong *)(piVar17 + -0xd));
          if ((UNiagaraSystem *)*plVar6 != param_1) goto code_r0x0001494405bf;
          pFVar18 = (FScriptContainerElement *)(plVar6 + 1);
          if (plVar6 == (longlong *)0x0) {
            pFVar18 = pFVar10;
          }
          if (pFVar18 == (FScriptContainerElement *)0x0) goto LAB_14944091b;
          pFVar4 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
          if (((pFVar4 <= pFVar18) &&
              (pFVar18 < pFVar4 + (longlong)(this->SimulationsWithPostActorWork).ArrayMax * 0x10))
             && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar13 = (this->SimulationsWithPostActorWork).ArrayNum;
          lVar7 = (longlong)iVar13;
          if (iVar13 != 0) {
            pFVar4 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
            bVar2 = *(longlong *)pFVar4 != *(longlong *)pFVar18;
            pFVar14 = pFVar10;
            pFVar21 = pFVar10;
            do {
              iVar13 = (int)pFVar14;
              pFVar10 = pFVar10 + 1;
              pFVar14 = (FScriptContainerElement *)(ulonglong)(iVar13 + 1);
              if ((longlong)pFVar10 < lVar7) {
                pFVar8 = pFVar4 + (longlong)pFVar10 * 0x10;
                do {
                  if (bVar2 != (*(longlong *)pFVar8 != *(longlong *)pFVar18)) break;
                  pFVar14 = (FScriptContainerElement *)(ulonglong)((int)pFVar14 + 1);
                  pFVar10 = pFVar10 + 1;
                  pFVar8 = pFVar8 + 0x10;
                } while ((longlong)pFVar10 < lVar7);
              }
              iVar12 = (int)pFVar14 - iVar13;
              if (bVar2 == false) {
                DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
                          ((TSharedRef<FNiagaraSystemSimulation,1> *)
                           (pFVar4 + (longlong)iVar13 * 0x10),iVar12);
              }
              else {
                iVar19 = (int)pFVar21;
                if (iVar19 != iVar13) {
                  memmove(pFVar4 + (longlong)iVar19 * 0x10,pFVar4 + (longlong)iVar13 * 0x10,
                          (longlong)iVar12 << 4);
                }
                pFVar21 = (FScriptContainerElement *)(ulonglong)(uint)(iVar19 + iVar12);
              }
              bVar2 = (bool)(bVar2 ^ 1);
            } while ((longlong)pFVar10 < lVar7);
            (this->SimulationsWithPostActorWork).ArrayNum = (int)pFVar21;
          }
          uVar11 = 0;
          pFVar10 = (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data;
          if (((pFVar10 <= pFVar18) &&
              (pFVar18 < pFVar10 + (longlong)(this->SimulationsWithEndOfFrameWait).ArrayMax * 0x10))
             && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar13 = (this->SimulationsWithEndOfFrameWait).ArrayNum;
          lVar7 = (longlong)iVar13;
          if (iVar13 != 0) {
            pFVar10 = (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data;
            bVar2 = *(longlong *)pFVar10 != *(longlong *)pFVar18;
            uVar15 = uVar11;
            uVar20 = uVar11;
            do {
              iVar13 = (int)uVar15;
              uVar11 = uVar11 + 1;
              uVar15 = (ulonglong)(iVar13 + 1);
              if ((longlong)uVar11 < lVar7) {
                pFVar4 = pFVar10 + uVar11 * 0x10;
                do {
                  if (bVar2 != (*(longlong *)pFVar4 != *(longlong *)pFVar18)) break;
                  uVar15 = (ulonglong)((int)uVar15 + 1);
                  uVar11 = uVar11 + 1;
                  pFVar4 = pFVar4 + 0x10;
                } while ((longlong)uVar11 < lVar7);
              }
              iVar12 = (int)uVar15 - iVar13;
              if (bVar2 == false) {
                DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
                          ((TSharedRef<FNiagaraSystemSimulation,1> *)
                           (pFVar10 + (longlong)iVar13 * 0x10),iVar12);
              }
              else {
                iVar19 = (int)uVar20;
                if (iVar19 != iVar13) {
                  memmove(pFVar10 + (longlong)iVar19 * 0x10,pFVar10 + (longlong)iVar13 * 0x10,
                          (longlong)iVar12 << 4);
                }
                uVar20 = (ulonglong)(uint)(iVar19 + iVar12);
              }
              bVar2 = (bool)(bVar2 ^ 1);
            } while ((longlong)uVar11 < lVar7);
            (this->SimulationsWithEndOfFrameWait).ArrayNum = (int)uVar20;
          }
          FNiagaraSystemSimulation::Destroy(*(FNiagaraSystemSimulation **)pFVar18);
          if (piVar17[-0xb] != *piVar17) {
            piVar9 = *(int **)(piVar17 + 3);
            uVar3 = ((uint)(((ulonglong)param_1 >> 4) >> 0x10) & 0xffff ^ uVar5) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            if (piVar9 == (int *)0x0) {
              piVar9 = piVar17 + 1;
            }
            iVar13 = piVar9[(longlong)piVar17[5] - 1U & (longlong)(int)(uVar3 >> 0x10 ^ uVar3)];
            if (iVar13 == -1) goto LAB_14944091b;
            do {
              if (*(UNiagaraSystem **)((longlong)iVar13 * 0x20 + *(longlong *)(piVar17 + -0xd)) ==
                  param_1) {
                TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
                                 *)(piVar17 + -0xd),iVar13);
                break;
              }
              iVar13 = *(int *)((longlong)iVar13 * 0x20 + 0x18 + *(longlong *)(piVar17 + -0xd));
            } while (iVar13 != -1);
          }
        }
      }
LAB_14944091b:
      piVar17 = piVar17 + 0x14;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_60 = local_60 + -1;
    if (local_60 == 0) {
      this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
      if (this_00 != (UNiagaraComponentPool *)0x0) {
        UNiagaraComponentPool::RemoveComponentsBySystem(this_00,param_1);
      }
      return;
    }
  } while( true );
code_r0x0001494405bf:
  iVar13 = (int)plVar6[3];
  if (iVar13 == -1) goto LAB_14944091b;
  goto LAB_1494405b0;
}

// DistanceCull @ 149440b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::DistanceCull
          (FNiagaraWorldManager *this,UNiagaraEffectType *param_1,
          FNiagaraSystemScalabilitySettings *param_2,UNiagaraComponent *param_3,
          FNiagaraScalabilityState *param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  ForElementType<FNiagaraCachedViewInfo> FVar9;
  byte bVar10;
  ForElementType<FNiagaraCachedViewInfo> FVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  fVar16 = 0.0;
  if (param_3->bEnablePreviewLODDistance == 0) {
    iVar1 = (this->CachedViewInfo).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar12 = __real_7f7fffff;
    if (0 < iVar1) {
      FVar11 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
      iVar1 = (this->CachedViewInfo).ArrayNum;
      dVar5 = (double)param_3->_padding_;
      dVar6 = (double)param_3->_padding_;
      dVar4 = (double)param_3->_padding_;
      if (FVar11 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
        FVar11 = (ForElementType<FNiagaraCachedViewInfo>)&this->CachedViewInfo;
      }
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar9 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)iVar1 * 0x2e0 + (longlong)FVar11);
      while (fVar16 = fVar12, FVar11 != FVar9) {
        dVar3 = dVar4 - *(double *)((longlong)FVar11 + 0x1f0);
        dVar14 = dVar5 - *(double *)((longlong)FVar11 + 0x1e0);
        dVar15 = dVar6 - *(double *)((longlong)FVar11 + 0x1e8);
        FVar11 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)FVar11 + 0x2e0);
        fVar12 = (float)(dVar15 * dVar15 + dVar14 * dVar14 + dVar3 * dVar3);
        if (fVar16 <= fVar12) {
          fVar12 = fVar16;
        }
      }
      fVar16 = SQRT(fVar16);
    }
  }
  else {
    fVar16 = param_3->PreviewLODDistance;
  }
  fVar12 = param_2->MaxDistance;
  fVar13 = fVar12;
  if (fVar12 <= __real_3f800000) {
    fVar13 = __real_3f800000;
  }
  UNiagaraComponent::SetLODDistance(param_3,fVar16,fVar13);
  if (((ScalabilityCullingMode == Enabled) && (GEnableNiagaraDistanceCulling != 0)) &&
     (param_2->bCullByDistance != 0)) {
    bVar8 = fVar12 < fVar16;
    bVar10 = (bVar8 << 2 | param_4->field_0xa & 4) ^ param_4->field_0xa & 0xfb;
    param_4->field_0xa = bVar10;
    if (((GEnableNiagaraGlobalBudgetCulling == 0) || (FFXBudget::bEnabled == false)) ||
       (INiagaraModule::bUseGlobalFXBudget == false)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar8) {
      bVar10 = bVar10 & 0x7f;
    }
    else if ((bVar7) && ((param_2->BudgetScaling).bScaleMaxDistanceByGlobalBudgetUse != 0)) {
      fVar13 = FNiagaraLinearRamp::Evaluate
                         (&(param_2->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse,
                          FFXBudget::WorstAdjustedUsage);
      bVar8 = fVar13 * fVar12 < fVar16;
      bVar10 = bVar8 << 7 | bVar10;
    }
    param_4->field_0xa = (bVar8 << 2 | bVar10 & 4) ^ (bVar10 & 0xeb | bVar8 << 4);
  }
  return;
}

// DistanceCull @ 149440db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::DistanceCull
          (FNiagaraWorldManager *this,UNiagaraEffectType *param_1,
          FNiagaraSystemScalabilitySettings *param_2,TVector<double> *param_3,
          FNiagaraScalabilityState *param_4)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ForElementType<FNiagaraCachedViewInfo> FVar6;
  ForElementType<FNiagaraCachedViewInfo> FVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  fVar12 = __real_7f7fffff;
  if (ScalabilityCullingMode == Enabled) {
    iVar2 = (this->CachedViewInfo).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (0 < iVar2) {
      FVar7 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
      iVar2 = (this->CachedViewInfo).ArrayNum;
      if (FVar7 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
        FVar7 = (ForElementType<FNiagaraCachedViewInfo>)&this->CachedViewInfo;
      }
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar6 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)iVar2 * 0x2e0 + (longlong)FVar7);
      if (FVar7 != FVar6) {
        do {
          dVar9 = (param_3->field0_0x0)._s_0.Z - *(double *)((longlong)FVar7 + 0x1f0);
          dVar10 = (param_3->field0_0x0)._s_0.X - *(double *)((longlong)FVar7 + 0x1e0);
          dVar11 = (param_3->field0_0x0)._s_0.Y - *(double *)((longlong)FVar7 + 0x1e8);
          FVar7 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)FVar7 + 0x2e0);
          fVar8 = (float)(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9);
          if (fVar12 <= fVar8) {
            fVar8 = fVar12;
          }
          fVar12 = fVar8;
        } while (FVar7 != FVar6);
      }
      if ((GEnableNiagaraDistanceCulling != 0) && (param_2->bCullByDistance != 0)) {
        fVar12 = SQRT(fVar12);
        pfVar1 = &param_2->MaxDistance;
        bVar5 = *pfVar1 <= fVar12 && fVar12 != *pfVar1;
        if ((GEnableNiagaraGlobalBudgetCulling == 0) ||
           ((FFXBudget::bEnabled == false || (INiagaraModule::bUseGlobalFXBudget == false)))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((NAN(fVar12) || NAN(*pfVar1)) || (*pfVar1 > fVar12 || fVar12 == *pfVar1)) {
          if ((bVar4) && ((param_2->BudgetScaling).bScaleMaxDistanceByGlobalBudgetUse != 0)) {
            fVar8 = FNiagaraLinearRamp::Evaluate
                              (&(param_2->BudgetScaling).MaxDistanceScaleByGlobalBudgetUse,
                               FFXBudget::WorstAdjustedUsage);
            bVar5 = fVar8 * param_2->MaxDistance < fVar12;
            param_4->field_0xa = param_4->field_0xa | bVar5 << 7;
          }
        }
        else {
          param_4->bCulledByGlobalBudget = '\0';
        }
        param_4->field_0xa =
             (bVar5 << 2 | param_4->field_0xa & 4) ^ param_4->field_0xa & 0xeb | bVar5 << 4;
      }
    }
  }
  return;
}

// DumpDetails @ 149440fa0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::DumpDetails(FNiagaraWorldManager *this,FOutputDevice *param_1,bool param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FNiagaraSystemSimulation *this_00;
  code *pcVar7;
  int *piVar8;
  longlong *plVar9;
  bool bVar10;
  size_t sVar11;
  void *pvVar12;
  longlong lVar13;
  ulong64 uVar14;
  int iVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  wchar_t *pwVar19;
  undefined8 *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint *puVar22;
  int iVar23;
  undefined1 auStack_198 [32];
  int local_178;
  char local_168;
  undefined1 local_167 [3];
  int local_164;
  undefined8 *local_160;
  byte *local_158;
  int *local_150;
  longlong local_148;
  byte *local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  FNiagaraWorldManager *local_128;
  UEnum *local_120;
  undefined1 *local_118;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0 [2];
  undefined4 local_74;
  TStringBuilderBase<wchar_t> local_70;
  wchar_t local_50 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168 = param_2;
  local_128 = this;
  FOutputDevice::Log(param_1,L"=== FNiagaraWorldManager Dumping Information");
  local_120 = StaticEnum<enum_ETickingGroup>();
  local_158 = (byte *)((longlong)&this->TickFunctions[0][1]._padding_ + 3);
  local_140 = (byte *)((longlong)&this->TickFunctions[0][0]._padding_ + 3);
  local_118 = &this->SystemSimulations[0][0].field_0x20;
  local_164 = 0;
  local_150 = (int *)&this->SystemSimulations[0][0].field_0x8;
  local_138 = 0;
  do {
    lVar13 = local_138;
    piVar8 = local_150;
    local_70.Base = local_50;
    pwVar19 = L".";
    local_70.End = (wchar_t *)&local_40;
    local_70.bIsDynamic = false;
    local_70.bIsExternal = false;
    if ((*local_140 & 0xc) != 0) {
      pwVar19 = L"X";
    }
    local_70.CurPos = local_50;
    sVar11 = wcslen(pwVar19);
    uVar14 = (ulong64)(int)sVar11;
    pwVar16 = local_50;
    if (&local_40 < local_50 + uVar14) {
      TStringBuilderBase<wchar_t>::Extend(&local_70,uVar14);
      pwVar16 = local_70.CurPos;
    }
    if ((int)sVar11 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(pwVar16,pwVar19,uVar14 * 2);
      pwVar16 = (wchar_t *)((longlong)pvVar12 + uVar14 * 2);
      local_70.CurPos = pwVar16;
    }
    pwVar19 = L".";
    iVar15 = *piVar8;
    iVar3 = piVar8[0xb];
    if ((*local_158 & 0xc) != 0) {
      pwVar19 = L"X";
    }
    sVar11 = wcslen(pwVar19);
    uVar14 = (ulong64)(int)sVar11;
    if (local_70.End < pwVar16 + uVar14) {
      TStringBuilderBase<wchar_t>::Extend(&local_70,uVar14);
      pwVar16 = local_70.CurPos;
    }
    if ((int)sVar11 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(pwVar16,pwVar19,uVar14 * 2);
      pwVar16 = (wchar_t *)((longlong)pvVar12 + uVar14 * 2);
      local_70.CurPos = pwVar16;
    }
    iVar4 = *(int *)(&local_128->SystemSimulations[0][1].field_0x8 + lVar13);
    iVar5 = *(int *)(&local_128->SystemSimulations[0][1].field_0x34 + lVar13);
    if (local_70.End < pwVar16 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      pwVar16 = local_70.CurPos;
    }
    iVar23 = local_164;
    *pwVar16 = L'\0';
    UEnum::GetNameStringByIndex(local_120,&local_b0,local_164);
    local_178 = (iVar15 - iVar3) + (iVar4 - iVar5);
    FOutputDevice::LogfImpl(param_1,L"%-20s | TickState(%s) | %d Simulations");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_168 != '\0') {
      puVar20 = (undefined8 *)(local_118 + lVar13);
      local_148 = 2;
      do {
        uVar18 = *(uint *)(puVar20 + 1);
        iStack_108 = 0;
        uStack_104 = 1;
        local_f0 = 0;
        uStack_f4 = 0;
        if (uVar18 != 0) {
          puVar22 = (uint *)*puVar20;
          if ((uint *)*puVar20 == (uint *)0x0) {
            puVar22 = (uint *)(puVar20 + -2);
          }
          uVar17 = *puVar22;
          local_f0 = 0;
          while (uVar17 == 0) {
            lVar13 = (longlong)iStack_108;
            local_f0 = local_f0 + 0x20;
            iStack_108 = iStack_108 + 1;
            uStack_f4 = uVar18;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_108)
            goto LAB_149441240;
            uVar17 = puVar22[lVar13 + 1];
          }
          uStack_104 = -uVar17 & uVar17;
          uVar2 = (ulonglong)uStack_104 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_130 = (int)lVar13;
          uStack_f4 = local_f0 + -1 + local_130;
          if ((int)uVar18 < (int)uStack_f4) {
            uStack_f4 = uVar18;
          }
        }
LAB_149441240:
        local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar20 + -2);
        plVar1 = puVar20 + -4;
        uStack_ec = local_74;
        iStack_e8 = *(int *)(puVar20 + -3) - *(int *)((longlong)puVar20 + 0x14);
        uVar17 = uVar18 & 0xffffffe0;
        TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
        uStack_f8 = 0xffffffff;
        TStack_d8.CurrentBitIndex = uStack_f4;
        TStack_d8.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar18 >> 5;
        TStack_d8._28_4_ = local_74;
        TStack_d8.BaseBitIndex = local_f0;
        uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
        local_160 = puVar20;
        local_110 = plVar1;
        local_e0 = plVar1;
        TStack_d8.Array = local_100;
        if (((int)uVar18 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar6 = *(uint *)(puVar20 + 1);
        if (uVar18 != uVar6) {
          pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)*local_160;
          if ((TBitArray<FDefaultBitArrayAllocator> *)*local_160 ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar20 + -2);
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                   *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
          while (uVar18 == 0) {
            lVar13 = (longlong)iVar15;
            uVar17 = uVar17 + 0x20;
            iVar15 = iVar15 + 1;
            uVar18 = uVar6;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_149441341;
            uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_12c = (int)lVar13;
          uVar18 = local_12c + -1 + uVar17;
          if ((int)uVar6 < (int)uVar18) {
            uVar18 = uVar6;
          }
        }
LAB_149441341:
        while( true ) {
          plVar9 = local_e0;
          if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
            local_167[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
          }
          if (((TStack_d8.CurrentBitIndex == uVar18) &&
              (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(puVar20 + -2))) &&
             (plVar9 == plVar1)) break;
          this_00 = *(FNiagaraSystemSimulation **)
                     ((longlong)TStack_d8.CurrentBitIndex * 0x20 + 8 + *plVar9);
          if (((this_00->bCanExecute != 0) && (this_00->World != (UWorld *)0x0)) &&
             ((this_00->System != (UNiagaraSystem *)0x0 &&
              (((uint)this_00->System->_padding_ >> 0x1e & 1) == 0)))) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00->System,local_a0,(UObject *)0x0,None);
            FOutputDevice::LogfImpl(param_1,L"\tSimulation %s");
            if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
            }
            FNiagaraSystemSimulation::DumpTickInfo(this_00,param_1);
          }
          TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
        }
        puVar20 = local_160 + 10;
        local_148 = local_148 + -1;
      } while (local_148 != 0);
      local_148 = 0;
      lVar13 = local_138;
      iVar23 = local_164;
      local_160 = puVar20;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_70);
    local_150 = local_150 + 0x28;
    local_164 = iVar23 + 1;
    local_158 = local_158 + 0x70;
    local_140 = local_140 + 0x70;
    local_138 = lVar13 + 0xa0;
    if (6 < local_164) {
      return;
    }
  } while( true );
}

// DumpScalabilityState @ 1494414b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::DumpScalabilityState(FNiagaraWorldManager *this)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_98;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if ((3 < (byte)LogNiagara._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
     3 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->World,&local_98,(UObject *)0x0);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  iStack_80 = 0;
  puVar1 = &(this->ScalabilityManagers).field_0x10;
  iVar4 = *(int *)&(this->ScalabilityManagers).field_0x28;
  pTVar2 = &this->ScalabilityManagers;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_1494415dd;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_7c = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_6c = local_68 + -1 + local_res10;
    if (iVar4 < iStack_6c) {
      iStack_6c = iVar4;
    }
  }
LAB_1494415dd:
  iStack_60 = *(int *)&(this->ScalabilityManagers).field_0x8 -
              *(int *)&(this->ScalabilityManagers).field_0x34;
  uVar12 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uStack_70 = 0xffffffff;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.CurrentBitIndex = iStack_6c;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  uStack_30 = CONCAT44(uStack_5c,iStack_60);
  local_88 = pTVar2;
  local_78 = puVar1;
  iStack_64 = iStack_6c;
  local_58 = pTVar2;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1494416e0;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_1494416e0:
  while( true ) {
    pTVar7 = local_58;
    if (*(int *)&local_58->field_0x8 - *(int *)&local_58->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_50.CurrentBitIndex == uVar12) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    FNiagaraScalabilityManager::Dump
              ((FNiagaraScalabilityManager *)
               ((longlong)TStack_50.CurrentBitIndex * 0xf8 + *(longlong *)pTVar7 + 8));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  if (3 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  return;
}

// EnqueueGlobalDeferredCallback @ 149441b80

/* WARNING: Removing unreachable block (ram,0x000149441bd7) */

void __cdecl
FNiagaraWorldManager::EnqueueGlobalDeferredCallback(TFunction<void___cdecl(void)> *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  undefined8 *puVar5;
  
  pTVar4 = ::operator_new(0x40);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    lVar1 = *(longlong *)param_1;
    *(longlong *)&pTVar4->Item = lVar1;
    *(undefined8 *)&(pTVar4->Item).field_0x28 = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar5)();
    }
    pTVar3 = NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Head;
    LOCK();
    UNLOCK();
    uVar2 = (ulonglong)NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Head & 7;
    NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Head = pTVar4;
    if (uVar2 != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar3->NextNode = pTVar4;
    UNLOCK();
  }
  return;
}

// ExecutePostTickWork @ 149443d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::ExecutePostTickWork
          (FNiagaraWorldManager *this,ETickingGroup param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FNiagaraSystemSimulation *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_void___cdecl_FNiagaraWorldManager::ExecutePostTickWork(ETickingGroup,float)_::_5_::FStat_STAT_NiagaraSpawnPerTickGroup_GT>
  FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar12;
  FName FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  FColor_u_0 local_res20 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48 [2];
  
  UpdateScalabilityManagers(this,param_2,true);
  if (GNiagaraSpawnPerTickGroup == 0) {
    return;
  }
  if ((this->SimulationsWithPostActorWork).ArrayNum < 1) {
    return;
  }
  uVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NiagaraSpawnPerTickGroup_GT ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FNiagaraWorldManager::ExecutePostTickWork(ETickingGroup,float)_::_5_::FStat_STAT_NiagaraSpawnPerTickGroup_GT>
         )0x0) {
      pFVar10 = ::FName::FName(&local_68,"STAT_NiagaraSpawnPerTickGroup_GT");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSpawnPerTickGroup_GT,*pFVar10,
                 L"STAT_NiagaraSpawnPerTickGroup_GT","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_NiagaraSpawnPerTickGroup_GT;
  if (StatPtr_STAT_NiagaraSpawnPerTickGroup_GT ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FNiagaraWorldManager::ExecutePostTickWork(ETickingGroup,float)_::_5_::FStat_STAT_NiagaraSpawnPerTickGroup_GT>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_NiagaraSpawnPerTickGroup_GT");
    FVar11 = (FThreadSafeStaticStat<_private:_void___cdecl_FNiagaraWorldManager::ExecutePostTickWork(ETickingGroup,float)_::_5_::FStat_STAT_NiagaraSpawnPerTickGroup_GT>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSpawnPerTickGroup_GT,
                          *pFVar10,L"STAT_NiagaraSpawnPerTickGroup_GT","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar12.Value;
        local_78.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x70b);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70.s.LowPart = FVar12.Value;
      local_70.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_149443f02;
    }
  }
  bVar6 = false;
  FVar13 = local_58;
LAB_149443f02:
  uVar16 = uVar14;
  if (0 < (this->SimulationsWithPostActorWork).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < (this->SimulationsWithPostActorWork).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
      lVar3 = *(longlong *)(pFVar2 + uVar14);
      if (((((*(byte *)(lVar3 + 0x30) & 1) != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) &&
          (*(longlong *)(lVar3 + 0x10) != 0)) &&
         (((*(uint *)(*(longlong *)(lVar3 + 0x10) + 8) >> 0x1e & 1) == 0 &&
          (this_00 = *(FNiagaraSystemSimulation **)(pFVar2 + uVar14),
          (int)this_00->SystemTickGroup < (int)param_1)))) {
        FNiagaraSystemSimulation::Spawn_GameThread(this_00,param_2,false);
      }
      uVar14 = uVar14 + 0x10;
      uVar16 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < (this->SimulationsWithPostActorWork).ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// ExecutePreTickWork @ 149444170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::ExecutePreTickWork
          (FNiagaraWorldManager *this,ETickingGroup param_1,float param_2)

{
  TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int *piVar1;
  UNiagaraComponent *this_01;
  ForElementType<FNiagaraCachedViewInfo> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<bool> aVar5;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  char cVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  UClass *pUVar11;
  UWorld *pUVar12;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  *pTVar13;
  APlayerController *pAVar14;
  FNiagaraCachedViewInfo *pFVar15;
  int iVar16;
  ForElementType<FNiagaraCachedViewInfo> FVar17;
  longlong lVar18;
  uint uVar19;
  void *_Dst;
  uint uVar20;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_88;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  TObjectIterator<UNiagaraComponent> local_68;
  TObjectIterator<UNiagaraSystem> local_50;
  
  NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
  FNiagaraDeferredMethodQueue::ExecuteAndClear(&this->DeferredMethods);
  FNiagaraDataChannelManager::Tick((this->DataChannelManager).Ptr,param_2,param_1);
  if (param_1 == TG_PrePhysics) {
    this->DebugPlaybackMode = this->RequestedDebugPlaybackMode;
    uVar20 = 0;
    if (0.0 < GWorldLoopTime) {
      if (this->WorldLoopTime <= 0.0) {
        this->WorldLoopTime = GWorldLoopTime;
        local_68.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ObjectArray.ArrayNum = 0;
        local_68.ObjectArray.ArrayMax = 0;
        local_68.Index = 0xffffffff;
        EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar11 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        GetObjectsOfClass(pUVar11,&local_68.ObjectArray,true,RF_ClassDefaultObject,
                          EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<UNiagaraComponent>::Advance(&local_68);
          lVar18 = (longlong)local_68.Index;
          if ((local_68.Index < 0) || (local_68.ObjectArray.ArrayNum <= local_68.Index)) break;
          uVar10 = 0;
          if (local_68.Index < local_68.ObjectArray.ArrayNum) {
            uVar10 = (uint)~local_68.Index >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_01 = *(UNiagaraComponent **)
                     (local_68.ObjectArray.AllocatorInstance.Data + lVar18 * 8);
          if (this_01 != (UNiagaraComponent *)0x0) {
            pUVar12 = (UWorld *)this_01->_padding_;
            if (pUVar12 == (UWorld *)0x0) {
              pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
            }
            if (pUVar12 == this->World) {
              UNiagaraComponent::ResetSystem(this_01);
            }
          }
        }
        if (local_68.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.ObjectArray.AllocatorInstance.Data);
        }
      }
      this->WorldLoopTime = this->WorldLoopTime - param_2;
    }
    aVar5 = bInvalidateCachedSystemScalabilityData;
    LOCK();
    bInvalidateCachedSystemScalabilityData = (atomic<bool>)0x0;
    UNLOCK();
    if (aVar5 != (atomic<bool>)0x0) {
      InvalidateCachedSystemScalabilityDataForAllWorlds();
    }
    if (this->bPoolIsPrimed == false) {
      if ((((GNigaraAllowPrimedPools != 0) && (pUVar12 = this->World, pUVar12 != (UWorld *)0x0)) &&
          (pUVar12->bIsWorldInitialized != '\0')) &&
         (((pUVar12->bIsTearingDown == '\0' && (this->bIsTearingDown == false)) &&
          ((this->bIsCleaningUp == false &&
           ((bVar7 = UWorld::IsGameWorld(pUVar12), bVar7 &&
            ((this->ComponentPool).field0_0x0.DebugPtr != (UNiagaraComponentPool *)0x0)))))))) {
        local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_50.ObjectArray.ArrayNum = 0;
        local_50.ObjectArray.ArrayMax = 0;
        local_50.Index = 0xffffffff;
        EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar11 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        GetObjectsOfClass(pUVar11,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                          EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        while( true ) {
          TObjectIterator<UNiagaraSystem>::Advance(&local_50);
          lVar18 = (longlong)local_50.Index;
          if ((local_50.Index < 0) || (local_50.ObjectArray.ArrayNum <= local_50.Index)) break;
          uVar10 = 0;
          if (local_50.Index < local_50.ObjectArray.ArrayNum) {
            uVar10 = (uint)~local_50.Index >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(UNiagaraSystem **)(local_50.ObjectArray.AllocatorInstance.Data + lVar18 * 8) !=
              (UNiagaraSystem *)0x0) {
            UNiagaraComponentPool::PrimePool
                      ((this->ComponentPool).field0_0x0.DebugPtr,
                       *(UNiagaraSystem **)
                        (local_50.ObjectArray.AllocatorInstance.Data + lVar18 * 8),this->World);
          }
        }
        if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
        }
      }
      this->bPoolIsPrimed = true;
    }
    this->bAppHasFocus = true;
    if (this->DebugPlaybackMode != Paused) {
      if (__CsvProfilerStat1685 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("CoreSystems_NiagaraCacheViewInformation",_GCsvCategory_Particles.Index);
        __CsvProfilerStat1685 = true;
      }
      uVar10 = _GCsvCategory_Particles.Index;
      FCsvProfiler::BeginStat
                ("CoreSystems_NiagaraCacheViewInformation",_GCsvCategory_Particles.Index,
                 "CSV_CoreSystems_NiagaraCacheViewInformation");
      pTVar13 = UWorld::GetPlayerControllerIterator(this->World,&local_78);
      if ((pTVar13->Index < 0) || (pTVar13->Container->ArrayNum <= pTVar13->Index)) {
        pUVar12 = this->World;
        if (0 < (pUVar12->CachedViewInfoRenderedLastFrame).ArrayNum) {
          do {
            uVar19 = 0;
            if ((int)uVar20 < (pUVar12->CachedViewInfoRenderedLastFrame).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar16 = (this->CachedViewInfo).ArrayNum;
            pFVar3 = (pUVar12->CachedViewInfoRenderedLastFrame).AllocatorInstance.Data;
            if (iVar16 == (this->CachedViewInfo).ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraCachedViewInfo>_>
                                 (0x2e0,0x10,&(this->CachedViewInfo).AllocatorInstance,
                                  &(this->CachedViewInfo).ArrayMax);
            }
            (this->CachedViewInfo).ArrayNum = iVar16 + 1;
            FVar2 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
            FVar17 = (ForElementType<FNiagaraCachedViewInfo>)&this->CachedViewInfo;
            if (FVar2 != (ForElementType<FNiagaraCachedViewInfo>)0x0) {
              FVar17 = FVar2;
            }
            pFVar15 = (FNiagaraCachedViewInfo *)((longlong)iVar16 * 0x2e0 + (longlong)FVar17);
            DefaultConstructItems<FNiagaraCachedViewInfo,int>(pFVar15,1);
            FNiagaraCachedViewInfo::Init
                      (pFVar15,(FWorldCachedViewInfo *)(pFVar3 + (longlong)(int)uVar20 * 0x200));
            pUVar12 = this->World;
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < (pUVar12->CachedViewInfoRenderedLastFrame).ArrayNum);
        }
      }
      else {
        UWorld::GetPlayerControllerIterator(this->World,&local_88);
        for (; (iVar16 = local_88.Index, pTVar6 = local_88.Container, -1 < local_88.Index &&
               (local_88.Index < (local_88.Container)->ArrayNum));
            local_88.Index = local_88.Index + 1) {
          uVar20 = 0;
          if (local_88.Index < (local_88.Container)->ArrayNum) {
            uVar20 = (uint)~local_88.Index >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pAVar14 = (APlayerController *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 8));
          if (((pAVar14 != (APlayerController *)0x0) && ((pAVar14->_padding_ & 2) != 0)) &&
             (cVar8 = (**(code **)(pAVar14->_padding_ + 0x7f0))(pAVar14), cVar8 != '\0')) {
            this_00 = &this->CachedViewInfo;
            pFVar15 = TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                      ::AddDefaulted_GetRef(this_00);
            bVar7 = PrepareCachedViewInfo(pAVar14,pFVar15);
            if (!bVar7) {
              iVar16 = (this->CachedViewInfo).ArrayNum;
              uVar19 = iVar16 - 1;
              uVar20 = 0;
              if ((int)uVar19 < iVar16) {
                uVar20 = ~uVar19 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar2 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
              FVar17 = (ForElementType<FNiagaraCachedViewInfo>)this_00;
              if (FVar2 != (ForElementType<FNiagaraCachedViewInfo>)0x0) {
                FVar17 = FVar2;
              }
              _Dst = (void *)((longlong)(int)uVar19 * 0x2e0 + (longlong)FVar17);
              if (*(void **)((longlong)_Dst + 0x2c0) != (void *)0x0) {
                FMemory::Free(*(void **)((longlong)_Dst + 0x2c0));
              }
              iVar16 = (this->CachedViewInfo).ArrayNum + ~uVar19;
              if (iVar16 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 0x2e0),(longlong)iVar16 * 0x2e0);
              }
              piVar1 = &(this->CachedViewInfo).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraCachedViewInfo>_>
                        (0x2e0,0x10,&this_00->AllocatorInstance,(this->CachedViewInfo).ArrayNum,
                         &(this->CachedViewInfo).ArrayMax);
            }
          }
        }
      }
      FCsvProfiler::EndStat("CoreSystems_NiagaraCacheViewInformation",uVar10);
      UpdateScalabilityManagers(this,param_2,false);
      TickParameterCollections(this);
    }
  }
  else if (NiagaraWorldManagerInternal::GTickParameterCollectionsOncePerFrame == false) {
    TickParameterCollections(this);
  }
  return;
}

// ExecuteSimulations @ 149444800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::ExecuteSimulations
          (FNiagaraWorldManager *this,ENiagaraWorldManagerTickPass param_1,ETickingGroup param_2,
          float param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  FNiagaraSystemSimulation *this_00;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ETickingGroup EVar5;
  int iVar6;
  ulonglong uVar7;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *pTVar8;
  byte bVar9;
  uint uVar10;
  ETickingGroup EVar11;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  EVar5 = TG_LastDemotable;
  if ((int)param_2 < 6) {
    EVar5 = param_2;
  }
  bVar9 = 1;
  EVar11 = TG_PrePhysics;
  if (0 < (int)EVar5) {
    EVar11 = EVar5;
  }
  bVar2 = false;
  this->ActiveNiagaraTickGroup = EVar11;
  pTVar8 = (TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
            *)(this->SystemSimulations[(int)EVar11] + (int)param_1);
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_a8,pTVar8);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar7 = local_a8._24_8_ >> 0x20;
  uVar10 = local_a8._28_4_;
  local_48 = pTVar8;
  bVar3 = false;
  if ((int)uVar10 < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      bVar2 = bVar3;
      this_00 = *(FNiagaraSystemSimulation **)((longlong)(int)uVar7 * 0x20 + 8 + *local_78);
      lVar1 = *(longlong *)((longlong)(int)uVar10 * 0x20 + 0x10 + *local_78);
      if ((((lVar1 == 0) || (*(int *)(lVar1 + 8) != 1)) && (this_00->bCanExecute != 0)) &&
         (((this_00->World != (UWorld *)0x0 && (this_00->System != (UNiagaraSystem *)0x0)) &&
          (((uint)this_00->System->_padding_ >> 0x1e & 1) == 0)))) {
        bVar2 = true;
        FNiagaraSystemSimulation::Tick_GameThread(this_00,param_3,param_4);
        bVar9 = bVar9 & this_00->System->bAllDIsPostStageCanOverlapTickGroups;
      }
      else {
        FNiagaraSystemSimulation::Destroy(this_00);
        TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uVar10);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar7 = (ulonglong)uStack_5c;
      uVar10 = uStack_5c;
      bVar3 = bVar2;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar10 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_48->HashSize < iVar6)) || (iVar6 < local_48->HashSize)) {
        local_48->HashSize = iVar6;
        TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  if (this->bUseTickPasses == false) {
    uVar4 = (undefined1)EVar11;
    if (bVar9 != 0) {
      uVar4 = 6;
    }
    *(undefined1 *)((longlong)&this->TickFunctions[(int)EVar11][(int)param_1]._padding_ + 1) = uVar4
    ;
  }
  else if ((param_1 == First) && (!bVar2)) {
    FTickFunction::SetTickFunctionEnable((FTickFunction *)(this->TickFunctions + (int)EVar11),false)
    ;
  }
  this->ActiveNiagaraTickGroup = -1;
  return;
}

// FindDataChannelHandler @ 149444da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __thiscall
FNiagaraWorldManager::FindDataChannelHandler
          (FNiagaraWorldManager *this,UNiagaraDataChannel *param_1)

{
  UNiagaraDataChannelHandler *pUVar1;
  
  pUVar1 = FNiagaraDataChannelManager::FindDataChannelHandler
                     ((this->DataChannelManager).Ptr,param_1);
  return pUVar1;
}

// FlushComputeAndDeferredQueues @ 149445420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::FlushComputeAndDeferredQueues(FNiagaraWorldManager *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraGpuComputeDispatchInterface *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x9d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FNiagaraGpuComputeDispatchInterface::Get(this->World);
  if (pFVar3 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    if (param_1) {
      (**(code **)(pFVar3->_padding_ + 0x100))();
      NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
      return;
    }
    (**(code **)(pFVar3->_padding_ + 0xf8))(pFVar3);
  }
  NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
  return;
}

// Get @ 149448410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraWorldManager * __cdecl FNiagaraWorldManager::Get(UWorld *param_1)

{
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FName local_res10 [3];
  FString local_18;
  
  puVar3 = (undefined8 *)0x0;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  pTVar1 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    puVar2 = puVar3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FNiagaraWorldManager *)*puVar2;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    if (param_1 != (UWorld *)0x0) {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_18);
      puVar3 = (undefined8 *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((puVar3 != (undefined8 *)0x0) &&
       (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (FNiagaraWorldManager *)0x0;
}

// GetCullProxy @ 149448c70

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraCullProxyComponent * __thiscall
FNiagaraWorldManager::GetCullProxy(FNiagaraWorldManager *this,UNiagaraComponent *param_1)

{
  float fVar1;
  TObjectPtr<UNiagaraSystem>_u_0 TVar2;
  UWorld *pUVar3;
  code *pcVar4;
  bool bVar5;
  UNiagaraCullProxyComponent *pUVar6;
  TObjectPtr<UNiagaraCullProxyComponent>_u_0 *pTVar7;
  UClass *pUVar8;
  uint uVar9;
  longlong *plVar10;
  TObjectPtr<UNiagaraSystem>_u_0 TVar11;
  undefined1 auStackY_148 [32];
  TObjectPtr<UNiagaraSystem>_u_0 local_118 [2];
  TRotator<double> local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  TVar2 = (TObjectPtr<UNiagaraSystem>_u_0)(param_1->Asset).field0_0x0.DebugPtr;
  if ((NiagaraRollbackCVars::NewWorldCleanup) &&
     ((this->bIsTearingDown != false || (this->bIsCleaningUp != false)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (TVar2.DebugPtr == (UNiagaraSystem *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4138563643849572962>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x262,"System");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UNiagaraCullProxyComponent *)(*pcVar4)();
      return pUVar6;
    }
  }
  else if ((GNiagaraAllowCullProxies != 0) && (!bVar5)) {
    TVar11 = TVar2;
    local_118[0] = TVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       ((UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr), TVar11 = local_118[0],
        UE::GC::GIsIncrementalReachabilityPending != false &&
        (local_118[0].DebugPtr != (UNiagaraSystem *)0x0)))) {
      UE::GC::MarkAsReachable((UObject *)local_118[0].DebugPtr);
    }
    uVar9 = ((uint)((ulonglong)TVar11.DebugPtr >> 0x14) & 0xffff ^
            (uint)((ulonglong)TVar11.DebugPtr >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    pTVar7 = &TMapBase<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
              ::FindOrAddImpl<TObjectPtr<UNiagaraSystem>_>
                        ((TMapBase<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
                          *)&this->CullProxyMap,uVar9 >> 0x10 ^ uVar9,
                         (TObjectPtr<UNiagaraSystem> *)&local_118[0].ObjectPtr)->field0_0x0;
    if (pTVar7->DebugPtr == (UNiagaraCullProxyComponent *)0x0) {
      pUVar3 = this->World;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar8);
      local_a8._8_8_ = pUVar3;
      pUVar6 = (UNiagaraCullProxyComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar10 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UNiagaraCullProxyComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pTVar7->DebugPtr = pUVar6;
      UNiagaraComponent::SetAsset((UNiagaraComponent *)pUVar6,TVar2.DebugPtr,true);
      UNiagaraComponent::SetAllowScalability((UNiagaraComponent *)pTVar7->DebugPtr,false);
      pTVar7->DebugPtr->field_0x9a = pTVar7->DebugPtr->field_0x9a | 8;
      UNiagaraComponent::SetAutoDestroy((UNiagaraComponent *)pTVar7->DebugPtr,false);
      pTVar7->DebugPtr->field_0x9a = pTVar7->DebugPtr->field_0x9a | 4;
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)pTVar7->DebugPtr,this->World,(FRegisterComponentContext *)0x0);
      USceneComponent::SetAbsolute((USceneComponent *)pTVar7->DebugPtr,true,true,true);
      local_108.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_108.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_108.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      USceneComponent::SetWorldLocationAndRotation
                ((USceneComponent *)pTVar7->DebugPtr,(TVector<double> *)&local_e8._s_0,&local_108,
                 false,(FHitResult *)0x0,None);
      local_c8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_c8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_c8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      USceneComponent::SetRelativeScale3D
                ((USceneComponent *)pTVar7->DebugPtr,(TVector<double> *)&local_c8._s_0);
      (**(code **)(*(longlong *)pTVar7->DebugPtr + 0x2b8))(pTVar7->DebugPtr,1);
      UNiagaraComponent::SetPaused((UNiagaraComponent *)pTVar7->DebugPtr,true);
      fVar1 = (TVar2.DebugPtr)->CurrentScalabilitySettings->MaxDistance;
      UNiagaraComponent::SetPreviewLODDistance
                ((UNiagaraComponent *)pTVar7->DebugPtr,true,fVar1 * __real_3f7fbe77,fVar1);
      FNiagaraParameterStore::CopyParametersTo
                ((FNiagaraParameterStore *)&param_1->OverrideParameters,
                 (FNiagaraParameterStore *)&pTVar7->DebugPtr->field_0x560,false,Value);
    }
    return pTVar7->DebugPtr;
  }
  return (UNiagaraCullProxyComponent *)0x0;
}

// GetLODDistance @ 149449c90

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

double __thiscall
FNiagaraWorldManager::GetLODDistance(FNiagaraWorldManager *this,TVector<double> *param_1)

{
  ForElementType<UE::Math::TVector<double>_> FVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  undefined1 auVar4 [16];
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  *pTVar9;
  UObject *pUVar10;
  uint uVar11;
  ForElementType<FNiagaraCachedViewInfo> FVar12;
  ForElementType<FNiagaraCachedViewInfo> FVar13;
  ForElementType<UE::Math::TVector<double>_> FVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStackY_188 [32];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_118;
  undefined1 local_108 [24];
  ForElementType<UE::Math::TVector<double>_> local_f0;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar2 = (this->CachedViewInfo).ArrayNum;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      dVar16 = (double)(*pcVar3)();
      return dVar16;
    }
  }
  else if (0 < iVar2) {
    FVar13 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
    iVar2 = (this->CachedViewInfo).ArrayNum;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = __real_4550000000000000;
    if (FVar13 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
      FVar13 = (ForElementType<FNiagaraCachedViewInfo>)&this->CachedViewInfo;
    }
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), in_XMM0 = extraout_XMM0, bVar6)) {
      pcVar3 = (code *)swi(3);
      dVar16 = (double)(*pcVar3)();
      return dVar16;
    }
    FVar12 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)iVar2 * 0x2e0 + (longlong)FVar13);
    if (FVar13 != FVar12) {
      do {
        dVar18 = *(double *)((longlong)FVar13 + 0x1e8) - (param_1->field0_0x0)._s_0.Y;
        dVar17 = *(double *)((longlong)FVar13 + 0x1e0) - (param_1->field0_0x0)._s_0.X;
        dVar16 = *(double *)((longlong)FVar13 + 0x1f0) - (param_1->field0_0x0)._s_0.Z;
        FVar13 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)FVar13 + 0x2e0);
        in_XMM0._0_8_ = dVar16 * dVar16;
        in_XMM0._8_8_ = 0;
        dVar16 = dVar18 * dVar18 + dVar17 * dVar17 + in_XMM0._0_8_;
        if (auVar22._0_8_ <= dVar16) {
          dVar16 = auVar22._0_8_;
        }
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar16;
      } while (FVar13 != FVar12);
    }
    auVar22 = sqrtpd(in_XMM0,auVar22);
    return auVar22._0_8_;
  }
  bVar6 = IsInGameThread();
  if (!bVar6) {
    local_148[0] = bVar6;
    `FNiagaraWorldManager::GetLODDistance'::__l11::<lambda_1>::operator()(local_148);
  }
  local_f0.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_28 = 0;
  local_24 = 8;
  pTVar9 = UWorld::GetPlayerControllerIterator
                     (this->World,
                      (TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
                       *)local_138);
  if ((pTVar9->Index < 0) || (pTVar9->Container->ArrayNum <= pTVar9->Index)) {
    uVar8 = (this->World->ViewLocationsRenderedLastFrame).ArrayNum;
    _Src = (this->World->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
    local_28 = uVar8;
    if ((uVar8 == 0) && (local_24 == 0)) {
      local_24 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                (0x18,8,uVar8,local_24,&local_f0,uVar8,(int *)&local_24);
      FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_f0;
      if (local_f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar14 = local_f0.SecondaryData;
      }
      if (uVar8 != 0) {
        memcpy((void *)FVar14,_Src,(longlong)(int)uVar8 * 0x18);
      }
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(this->World,&local_118);
    for (; (iVar2 = local_118.Index, pTVar5 = local_118.Container, -1 < local_118.Index &&
           (local_118.Index < (local_118.Container)->ArrayNum));
        local_118.Index = local_118.Index + 1) {
      if ((local_118.Index < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        dVar16 = (double)(*pcVar3)();
        return dVar16;
      }
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar5->AllocatorInstance).Data + (longlong)iVar2 * 8));
      if (((pUVar10 != (UObject *)0x0) && ((pUVar10[0x15].field_0x20 & 2) != 0)) &&
         (cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x7f0))(), cVar7 != '\0')) {
        uVar8 = local_28;
        if (local_28 == local_24) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                            (0x818,&local_f0,(int *)&local_24);
        }
        local_28 = uVar8 + 1;
        uVar11 = 0;
        if ((int)uVar8 < (int)local_28) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          dVar16 = (double)(*pcVar3)();
          return dVar16;
        }
        FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_f0;
        if (local_f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar14 = local_f0.SecondaryData;
        }
        (**(code **)(*(longlong *)pUVar10 + 0x840))
                  (pUVar10,(double *)((longlong)FVar14 + (longlong)(int)uVar8 * 0x18),local_108);
      }
    }
  }
  uVar8 = local_28;
  lVar15 = (longlong)(int)local_28;
  FVar14 = (ForElementType<UE::Math::TVector<double>_>)&local_f0;
  if (local_f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FVar14 = local_f0.SecondaryData;
  }
  if (((int)local_28 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    dVar16 = (double)(*pcVar3)();
    return dVar16;
  }
  local_128 = (param_1->field0_0x0)._s_0.Z;
  auVar21 = ZEXT816(0);
  dVar16 = 0.0;
  local_138._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_138._8_8_ = (param_1->field0_0x0)._s_0.Y;
  if (0 < (int)uVar8) {
    uVar19 = (undefined4)__real_4550000000000000;
    uVar20 = (undefined4)(__real_4550000000000000 >> 0x20);
    FVar1 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar14 + lVar15 * 0x18);
    if (FVar14 != FVar1) {
      auVar21._8_8_ = 0;
      auVar21._0_8_ = local_138._0_8_;
      do {
        dVar16 = *(double *)FVar14;
        dVar17 = *(double *)((longlong)FVar14 + 8) - (double)local_138._8_8_;
        dVar18 = *(double *)((longlong)FVar14 + 0x10) - local_128;
        FVar14 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar14 + 0x18);
        dVar16 = (dVar16 - (double)local_138._0_8_) * (dVar16 - (double)local_138._0_8_) +
                 dVar17 * dVar17 + dVar18 * dVar18;
        if ((double)CONCAT44(uVar20,uVar19) <= dVar16) {
          dVar16 = (double)CONCAT44(uVar20,uVar19);
        }
        uVar19 = SUB84(dVar16,0);
        uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
      } while (FVar14 != FVar1);
    }
    auVar4._4_4_ = uVar20;
    auVar4._0_4_ = uVar19;
    auVar4._8_8_ = 0;
    auVar22 = sqrtpd(auVar21,auVar4);
    dVar16 = auVar22._0_8_;
  }
  if (local_f0.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
    FMemory::Free((void *)local_f0.SecondaryData);
  }
  return dVar16;
}

// GetLODDistance @ 14944a100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

double __thiscall
FNiagaraWorldManager::GetLODDistance
          (FNiagaraWorldManager *this,TVector<double> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  
  if (param_2->ArrayNum < 1) {
    return 0.0;
  }
  pTVar2 = param_2->DataPtr;
  uVar6 = (undefined4)__real_4550000000000000;
  uVar8 = (undefined4)((ulonglong)__real_4550000000000000 >> 0x20);
  pTVar1 = pTVar2 + param_2->ArrayNum;
  if (pTVar2 != pTVar1) {
    do {
      dVar7 = (pTVar2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
      dVar5 = (pTVar2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
      dVar3 = (pTVar2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
      pTVar2 = pTVar2 + 1;
      in_XMM0._0_8_ = dVar3 * dVar3;
      in_XMM0._8_8_ = 0;
      dVar3 = dVar7 * dVar7 + dVar5 * dVar5 + in_XMM0._0_8_;
      if ((double)CONCAT44(uVar8,uVar6) <= dVar3) {
        dVar3 = (double)CONCAT44(uVar8,uVar6);
      }
      uVar6 = SUB84(dVar3,0);
      uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
    } while (pTVar2 != pTVar1);
  }
  auVar4._4_4_ = uVar8;
  auVar4._0_4_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4 = sqrtpd(in_XMM0,auVar4);
  return auVar4._0_8_;
}

// GetParameterCollection @ 14944ae10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraParameterCollectionInstance * __thiscall
FNiagaraWorldManager::GetParameterCollection
          (FNiagaraWorldManager *this,UNiagaraParameterCollection *param_1)

{
  longlong lVar1;
  UWorld *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UNiagaraParameterCollectionInstance *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  TKeyInitializer<TObjectPtr<UNiagaraParameterCollection>_&&> local_res10;
  undefined8 local_res18;
  TObjectPtr<UNiagaraParameterCollection_const_>_u_0 local_res20;
  UNiagaraParameterCollection *local_68;
  UNiagaraParameterCollection **local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((((param_1 == (UNiagaraParameterCollection *)0x0) ||
        (pUVar2 = this->World, pUVar2 == (UWorld *)0x0)) || (pUVar2->bIsWorldInitialized == '\0'))
      || ((pUVar2->bIsTearingDown != '\0' || (this->bIsTearingDown != false)))) ||
     (this->bIsCleaningUp != false)) {
    return (UNiagaraParameterCollectionInstance *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  iVar5 = TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UNiagaraParameterCollection_const_>_>
                    ((TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
                      *)&this->ParameterCollections,uVar9 >> 0x10 ^ uVar9,
                     (TObjectPtr<UNiagaraParameterCollection_const_> *)&local_res20.ObjectPtr);
  if (((iVar5 == -1) ||
      (lVar1 = *(longlong *)&this->ParameterCollections + (longlong)iVar5 * 0x18, lVar1 == 0)) ||
     (plVar11 = (longlong *)(lVar1 + 8), plVar11 == (longlong *)0x0)) {
    pUVar6 = (param_1->DefaultInstance).field0_0x0.DebugPtr;
    local_68 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60 = &local_68;
    TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TObjectPtr<UNiagaraParameterCollection>_&&>_>
              ((TSet<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>,FDefaultSetAllocator>
                *)&this->ParameterCollections,&local_res10,(bool *)&local_60);
    plVar11 = (longlong *)
              (*(longlong *)&this->ParameterCollections +
              ((longlong)(int)local_res10.Key * 3 + 1) * 8);
    local_res18 = 0;
    pUVar6 = (UNiagaraParameterCollectionInstance *)
             StaticDuplicateObject
                       ((UObject *)pUVar6,(UObject *)this->World,(FName)0x0,
                        RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                        RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                        RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                        RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                        RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                        RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                        RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                        RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                        RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                        RF_Public,(UClass *)0x0,Normal,
                        PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
    if (pUVar6 == (UNiagaraParameterCollectionInstance *)0x0) {
      pFVar8 = GetTypeName<UNiagaraParameterCollectionInstance>(&local_58);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar7 = Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<UNiagaraParameterCollectionInstance>(&local_48);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<UObject>(&local_38,(UObject *)pUVar6);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar12);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *plVar11 = (longlong)pUVar6;
    UNiagaraParameterCollectionInstance::Bind(pUVar6,this->World);
  }
  if (*plVar11 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverrideInst && *OverrideInst",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x2a7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UNiagaraParameterCollectionInstance *)(*pcVar3)();
      return pUVar6;
    }
  }
  return (UNiagaraParameterCollectionInstance *)*plVar11;
}

// GetReferencerName @ 14944cb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FString * __thiscall
FNiagaraWorldManager::GetReferencerName(FNiagaraWorldManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FNiagaraWorldManager");
  return __return_storage_ptr__;
}

// GetScalabilityState @ 14944d5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraWorldManager::GetScalabilityState
          (FNiagaraWorldManager *this,UNiagaraComponent *param_1,FNiagaraScalabilityState *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  UNiagaraSystem *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FNiagaraScalabilityManager *pFVar7;
  uint uVar8;
  UNiagaraEffectType *local_res10;
  
  if (param_1 != (UNiagaraComponent *)0x0) {
    uVar2 = param_1->ScalabilityManagerHandle;
    if (((uVar2 != 0xffffffff) &&
        (this_00 = (param_1->Asset).field0_0x0.DebugPtr, this_00 != (UNiagaraSystem *)0x0)) &&
       (local_res10 = UNiagaraSystem::GetEffectType(this_00),
       local_res10 != (UNiagaraEffectType *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      pFVar7 = TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
               ::Find((TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
                       *)&this->ScalabilityManagers,
                      (TObjectPtr<UNiagaraEffectType_const_>)&local_res10);
      if (pFVar7 != (FNiagaraScalabilityManager *)0x0) {
        uVar8 = 0;
        if ((int)uVar2 < (pFVar7->State).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (pFVar7->State).AllocatorInstance.Data;
        uVar1 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar2 * 0xc);
        param_2->Significance = (float)(int)uVar1;
        param_2->LastVisibleTime = (float)(int)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)&param_2->SystemDataIndex =
             *(undefined4 *)(pFVar3 + (longlong)(int)uVar2 * 0xc + 8);
        return true;
      }
    }
  }
  return false;
}

// GetSystemSimulation @ 14944efc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedRef<FNiagaraSystemSimulation,1> * __thiscall
FNiagaraWorldManager::GetSystemSimulation
          (FNiagaraWorldManager *this,TSharedRef<FNiagaraSystemSimulation,1> *__return_storage_ptr__
          ,ETickingGroup param_1,UNiagaraSystem *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ETickingGroup EVar7;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar8;
  ETickingGroup EVar9;
  TReferenceControllerBase<1> *pTVar10;
  ETickingGroup EVar11;
  FNiagaraSystemSimulation *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FLLMScope local_res8 [2];
  UNiagaraSystem *local_res20;
  TPairInitializer<UNiagaraSystem_*_const_&,TSharedRef<FNiagaraSystemSimulation,1>_const_&> local_78
  ;
  longlong local_68;
  FMemScope local_60;
  FNiagaraSystemSimulation *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  UNiagaraSystem **local_48;
  FNiagaraSystemSimulation **local_40;
  
  local_res20 = param_2;
  FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_60,Niagara,true);
  EVar7 = TG_LastDemotable;
  if ((int)param_1 < 6) {
    EVar7 = param_1;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  EVar11 = TG_PrePhysics;
  if (0 < (int)EVar7) {
    EVar11 = EVar7;
  }
  EVar7 = EVar11;
  if (this->ActiveNiagaraTickGroup == EVar11) {
    EVar9 = TG_LastDemotable;
    if ((int)(param_1 + TG_StartPhysics) < 6) {
      EVar9 = param_1 + TG_StartPhysics;
    }
    EVar7 = TG_PrePhysics;
    if (0 < (int)EVar9) {
      EVar7 = EVar9;
    }
    if (EVar7 == EVar11) {
      EVar7 = TG_PrePhysics;
    }
  }
  if ((local_res20->bAllDIsPostStageCanOverlapTickGroups == 0) && (this->bUseTickPasses != false)) {
    local_78.Value = (TSharedRef<FNiagaraSystemSimulation,1> *)0x380;
    local_68 = 0x2b;
    lVar13 = 0x29;
    lVar14 = 0x20;
  }
  else {
    local_78.Value = (TSharedRef<FNiagaraSystemSimulation,1> *)0x3d0;
    local_68 = 99;
    lVar13 = 0x61;
    lVar14 = 0x58;
  }
  pTVar8 = TMapBase<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
           ::Find((TMapBase<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
                   *)((longlong)&local_78.Value[(longlong)(int)EVar7 * 10 + -2].Object +
                     (longlong)this->TickFunctions),local_res20);
  if (pTVar8 != (TSharedRef<FNiagaraSystemSimulation,1> *)0x0) {
    __return_storage_ptr__->Object = pTVar8->Object;
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_14944f286;
  }
  pTStack_50 = ::operator_new(0x6d8);
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTStack_50 = _UNK_150651568;
    pFVar12 = (FNiagaraSystemSimulation *)&DAT_00000010;
LAB_14944f163:
    if (((pFVar12->_padding_ == 0) || (*(longlong *)&pFVar12->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar12->_padding_ + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar12->_padding_ = (longlong)pFVar12;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar12->_padding_) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar12->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar12->_padding_ = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTStack_50->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_50->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_50->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSystemSimulation___00_SharedPointerInternals__6B_
    ;
    FNiagaraSystemSimulation::FNiagaraSystemSimulation((FNiagaraSystemSimulation *)(pTStack_50 + 1))
    ;
    pFVar12 = (FNiagaraSystemSimulation *)(pTStack_50 + 1);
    pTVar10 = pTStack_50;
    local_58 = pFVar12;
    if (pFVar12 != (FNiagaraSystemSimulation *)0x0) goto LAB_14944f163;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedRef<FNiagaraSystemSimulation,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_48 = &local_res20;
  local_40 = &local_58;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UNiagaraSystem_*_const_&,TSharedRef<FNiagaraSystemSimulation,1>_const_&>_>
            ((TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
              *)((longlong)&local_78.Value[(longlong)(int)EVar7 * 10 + -2].Object +
                (longlong)this->TickFunctions),&local_78,(bool *)&local_48);
  FNiagaraSystemSimulation::Init(local_58,local_res20,this->World,false,param_1);
  if (this->bUseTickPasses == false) {
    if (local_res20->bAllDIsPostStageCanOverlapTickGroups == 0) {
      *(char *)((longlong)&this->TickFunctions[(longlong)(int)EVar7 + -1][1]._padding_ + lVar13) =
           (char)EVar7;
    }
  }
  else if ((*(byte *)((longlong)&this->TickFunctions[(longlong)(int)EVar7 + -1][1]._padding_ +
                     local_68) & 0xc) == 0) {
    FTickFunction::SetTickFunctionEnable
              ((FTickFunction *)
               ((longlong)&this->TickFunctions[(longlong)(int)EVar7 + -1][1]._padding_ + lVar14),
               true);
  }
  __return_storage_ptr__->Object = local_58;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_50;
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
LAB_14944f286:
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// GetWorld @ 14944ff50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UWorld * __thiscall FNiagaraWorldManager::GetWorld(FNiagaraWorldManager *this)

{
  return this->World;
}

// GlobalBudgetCull @ 14944ff60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::GlobalBudgetCull
          (FNiagaraWorldManager *this,FNiagaraSystemScalabilitySettings *param_1,float param_2,
          FNiagaraScalabilityState *param_3)

{
  byte bVar1;
  byte bVar2;
  
  if ((ScalabilityCullingMode != Enabled) ||
     (param_2 < (param_1->BudgetScaling).MaxGlobalBudgetUsage)) {
    bVar1 = 0;
    bVar2 = 0;
  }
  else {
    bVar1 = 4;
    bVar2 = 0x80;
  }
  param_3->field_0xa = (param_3->field_0xa & 4 | bVar1) ^ param_3->field_0xa & 0xfb | bVar2;
  return;
}

// HandleCSVStats @ 14944ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::HandleCSVStats(FNiagaraWorldManager *this,float param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TSharedPtr<FParticlePerfStatsListener,1> *pTVar3;
  ulonglong uVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  FCsvProfiler *pFVar11;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  FParticlePerfStatsListener *pFVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res18 [8];
  int local_res20;
  FParticlePerfStatsListener *local_f8;
  FSharedReferencer<1> local_f0;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  FCsvProfiler *local_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  TSharedPtr<FParticlePerfStatsListener,1> local_58 [2];
  
  local_b0 = FCsvProfiler::Get();
  if (((local_b0 == (FCsvProfiler *)0x0) || (bVar13 = FCsvProfiler::IsCapturing(local_b0), !bVar13))
     || (FParticlePerfStats::bCSVStatsEnabled == (TAtomic<bool>)0x0)) {
    pTVar3 = &this->FXTypeCSVListener;
    if (pTVar3->Object == (FParticlePerfStatsListener *)0x0) {
      return;
    }
    FParticlePerfStatsManager::RemoveListener(pTVar3->Object);
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FParticlePerfStatsListener,1> *)&local_a8) {
      pTVar3->Object = (FParticlePerfStatsListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FXTypeCSVListener).SharedReferenceCount,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    return;
  }
  if ((0.0 < GNiagaraCSVSplitTime) &&
     (dVar5 = this->World->TimeSeconds,
     (int)((dVar5 - (double)param_1) * (__real_3ff0000000000000 / (double)GNiagaraCSVSplitTime)) <
     (int)((__real_3ff0000000000000 / (double)GNiagaraCSVSplitTime) * dVar5))) {
    ::FString::PrintfImpl(&local_68,L"SplitTime%d");
    FCsvProfiler::RecordEvent(_GCsvCategory_Particles.Index,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  puVar2 = &(this->ScalabilityManagers).field_0x10;
  iVar6 = *(int *)&(this->ScalabilityManagers).field_0x28;
  local_e8 = &this->ScalabilityManagers;
  iStack_e0 = 0;
  uStack_dc = 1;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar6 != 0) {
    puVar21 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar2;
    }
    uVar19 = *puVar21;
    local_c8 = 0;
    while (uVar19 == 0) {
      lVar15 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14945011d;
      uVar19 = puVar21[lVar15 + 1];
    }
    uStack_dc = -uVar19 & uVar19;
    uVar4 = (ulonglong)uStack_dc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    iStack_cc = local_c8 + -1 + local_res20;
    if (iVar6 < iStack_cc) {
      iStack_cc = iVar6;
    }
  }
LAB_14945011d:
  uVar19 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  iStack_c0 = *(int *)&(this->ScalabilityManagers).field_0x8 -
              *(int *)&(this->ScalabilityManagers).field_0x34;
  uVar17 = uVar19 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_cc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_90._28_4_ = iStack_cc;
  TStack_90.BaseBitIndex = local_c8;
  uStack_70 = CONCAT44(uStack_bc,iStack_c0);
  local_d8 = puVar2;
  iStack_c4 = iStack_cc;
  local_98 = local_e8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar6 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar11 = local_b0;
  uVar7 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar19 != uVar7) {
    puVar20 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14945021f;
      uVar19 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_b8 = (int)lVar15;
    uVar19 = local_b8 + -1 + uVar17;
    if ((int)uVar7 < (int)uVar19) {
      uVar19 = uVar7;
    }
  }
LAB_14945021f:
  while( true ) {
    pTVar12 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar15 = (longlong)TStack_90.CurrentBitIndex;
    if (((TStack_90.CurrentBitIndex == uVar19) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar12 == &this->ScalabilityManagers)) break;
    lVar8 = *(longlong *)pTVar12;
    if ((*(longlong *)(lVar15 * 0xf8 + lVar8) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("EffectType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                            ,0x5c3,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FNiagaraScalabilityManager::CSVProfilerUpdate
              ((FNiagaraScalabilityManager *)(lVar8 + 8 + lVar15 * 0xf8),pFVar11);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  if ((this->FXTypeCSVListener).Object != (FParticlePerfStatsListener *)0x0) {
    return;
  }
  pTVar14 = ::operator_new(0x28);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    pFVar18 = (FParticlePerfStatsListener *)&DAT_00000010;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pFVar18 = (FParticlePerfStatsListener *)(pTVar14 + 1);
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_EffectType___00_SharedPointerInternals__6B_
    ;
    pTVar14[1]._padding_ = (longlong)&___7FParticlePerfStatsListener_EffectType__6B_;
    pTVar14[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[2]._padding_ = 0;
    if (pFVar18 == (FParticlePerfStatsListener *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      goto LAB_1494503c4;
    }
  }
  if (((*(longlong *)&pFVar18->field_0x8 == 0) || (*(longlong *)&pFVar18->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar18->field_0x10 + 8) < 1)) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FParticlePerfStatsListener **)&pFVar18->field_0x8 = pFVar18;
    if (pTVar14 != *(TReferenceControllerBase<1> **)&pFVar18->field_0x10) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar9 = *(longlong **)&pFVar18->field_0x10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar18->field_0x10 = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_1494503c4:
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = pFVar18;
  local_f0.ReferenceController = pTVar14;
  if (&this->FXTypeCSVListener != (TSharedPtr<FParticlePerfStatsListener,1> *)&local_f8) {
    (this->FXTypeCSVListener).Object = pFVar18;
    local_f8 = (FParticlePerfStatsListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FXTypeCSVListener).SharedReferenceCount,&local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  local_58[0].Object = (this->FXTypeCSVListener).Object;
  local_58[0].SharedReferenceCount.ReferenceController =
       (this->FXTypeCSVListener).SharedReferenceCount.ReferenceController;
  if (local_58[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FParticlePerfStatsManager::AddListener(local_58,true);
  return;
}

// HasActiveWorld @ 1494504b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall FNiagaraWorldManager::HasActiveWorld(FNiagaraWorldManager *this)

{
  UWorld *pUVar1;
  
  pUVar1 = this->World;
  if ((((pUVar1 != (UWorld *)0x0) && (pUVar1->bIsWorldInitialized != '\0')) &&
      (pUVar1->bIsTearingDown == '\0')) &&
     ((this->bIsTearingDown == false && (this->bIsCleaningUp == false)))) {
    return true;
  }
  return false;
}

// Init @ 149450dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::Init(FNiagaraWorldManager *this,UWorld *param_1)

{
  TSharedPtr<std::atomic<float>,1> *pTVar1;
  byte bVar2;
  FNiagaraDebugHud *this_00;
  void *pvVar3;
  code *pcVar4;
  FNiagaraWorldManager *pFVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UNiagaraComponentPool *pUVar11;
  FNiagaraDebugHud *pFVar12;
  FNiagaraComponentLeakDetector *pFVar13;
  FNiagaraComponentLeakDetector *pFVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  FNiagaraWorldManager *pFVar20;
  byte *pbVar21;
  undefined1 auStack_f8 [32];
  TReferenceControllerBase<1> *local_d8;
  FSharedReferencer<1> FStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  this->ActiveNiagaraTickGroup = -1;
  (this->ComponentPool).field0_0x0.DebugPtr = (UNiagaraComponentPool *)0x0;
  this->World = param_1;
  this->bPoolIsPrimed = false;
  this->bAppHasFocus = true;
  this->bIsTearingDown = false;
  this->bIsCleaningUp = false;
  this->WorldLoopTime = 0.0;
  this->RequestedDebugPlaybackMode = Play;
  this->DebugPlaybackMode = Play;
  this->DebugPlaybackRate = 1.0;
  FStack_d0.ReferenceController = ::operator_new(0x18);
  if (FStack_d0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_d8 = ___xmm_00000000000000000000000000000010;
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_d0.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_d0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18 = FStack_d0.ReferenceController + 1;
    (FStack_d0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_d0.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_U__atomic_M_std___00_SharedPointerInternals__6B_;
    *(undefined4 *)&FStack_d0.ReferenceController[1]._padding_ = 0;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    (FStack_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar19 = FStack_d0.ReferenceController;
    local_d8 = pTVar18;
  }
  pTVar1 = &this->LastRenderThreadUpdateTime;
  if (pTVar1 != (TSharedPtr<std::atomic<float>,1> *)&local_d8) {
    pTVar1->Object = (atomic<float> *)pTVar18;
    local_d8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastRenderThreadUpdateTime).SharedReferenceCount,&FStack_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  if ((pTVar1->Object == (atomic<float> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  *pTVar1->Object = (atomic<float>)(float)param_1->TimeSeconds;
  UNLOCK();
  pUVar9 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UNiagaraComponentPool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar10);
  local_c8._8_8_ = pUVar9;
  pUVar11 = (UNiagaraComponentPool *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar15 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UNiagaraComponentPool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pbVar21 = (byte *)((longlong)&this->TickFunctions[0][0]._padding_ + 2);
  (this->ComponentPool).field0_0x0.DebugPtr = pUVar11;
  iVar17 = 0;
  pFVar20 = this;
  pFVar5 = this;
  do {
    bVar2 = *pbVar21;
    bVar8 = 0;
    bVar16 = (byte)iVar17;
    pbVar21[-2] = bVar16;
    pbVar21[-1] = bVar16;
    *pbVar21 = bVar2 & 0xf3 | 2;
    iVar6 = NiagaraWorldManagerInternal::GFirstHighPriTickGroup;
    *(FNiagaraWorldManager **)(pbVar21 + 0x1e) = this;
    if (iVar6 <= iVar17) {
      bVar8 = 0x20;
    }
    pbVar21[0x26] = 0;
    pbVar21[0x27] = 0;
    pbVar21[0x28] = 0;
    pbVar21[0x29] = 0;
    *pbVar21 = bVar8 | bVar2 & 0xd3 | 2;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)pFVar5->TickFunctions,false);
    FTickFunction::RegisterTickFunction
              ((FTickFunction *)(pbVar21 + -10),(param_1->PersistentLevel).field0_0x0.DebugPtr);
    *(byte *)&pFVar20->TickFunctions[0][1]._padding_ = bVar16;
    bVar8 = 0;
    *(undefined1 *)((longlong)&pFVar20->TickFunctions[0][1]._padding_ + 1) = 6;
    bVar2 = *(byte *)((longlong)&pFVar20->TickFunctions[0][1]._padding_ + 2);
    *(byte *)((longlong)&pFVar20->TickFunctions[0][1]._padding_ + 2) = bVar2 & 0xf7 | 6;
    if (NiagaraWorldManagerInternal::GFirstHighPriTickGroup <= iVar17) {
      bVar8 = 0x20;
    }
    *(byte *)((longlong)&pFVar20->TickFunctions[0][1]._padding_ + 2) = bVar8 | bVar2 & 0xd7 | 6;
    pFVar20->TickFunctions[0][1].Owner = this;
    pFVar20->TickFunctions[0][1].TickPass = Last;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)(pFVar20->TickFunctions[0] + 1),true);
    FTickFunction::RegisterTickFunction
              ((FTickFunction *)(pFVar20->TickFunctions[0] + 1),
               (param_1->PersistentLevel).field0_0x0.DebugPtr);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)(pFVar20->TickFunctions[0] + 1),
               (UObject *)(this->ComponentPool).field0_0x0.DebugPtr,(FTickFunction *)(pbVar21 + -10)
              );
    iVar17 = iVar17 + 1;
    pbVar21 = pbVar21 + 0x70;
    pFVar5 = (FNiagaraWorldManager *)&pFVar5->TickFunctions[0][1]._padding_;
    pFVar20 = (FNiagaraWorldManager *)&pFVar20->TickFunctions[0][1]._padding_;
  } while (iVar17 < 7);
  pFVar12 = ::operator_new(0x348);
  if (pFVar12 == (FNiagaraDebugHud *)0x0) {
    pFVar12 = (FNiagaraDebugHud *)0x0;
  }
  else {
    pFVar12 = FNiagaraDebugHud::FNiagaraDebugHud(pFVar12,this->World);
  }
  pFVar14 = (FNiagaraComponentLeakDetector *)0x0;
  this_00 = (this->NiagaraDebugHud).Ptr;
  if ((this_00 != pFVar12) &&
     ((this->NiagaraDebugHud).Ptr = pFVar12, this_00 != (FNiagaraDebugHud *)0x0)) {
    FNiagaraDebugHud::~FNiagaraDebugHud(this_00);
    ::operator_delete(this_00,0x348);
  }
  bVar7 = UWorld::IsGameWorld(this->World);
  if (bVar7) {
    pFVar13 = ::operator_new(0x58);
    if (pFVar13 != (FNiagaraComponentLeakDetector *)0x0) {
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x10 = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x18 = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x38 = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x48 = 0;
      pFVar13->NextUpdateTime = 0.0;
      *(undefined8 *)&pFVar13->PerSystemData = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x20 = 0;
      *(undefined4 *)&(pFVar13->PerSystemData).field_0x28 = 0;
      *(undefined4 *)&(pFVar13->PerSystemData).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar13->PerSystemData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar13->PerSystemData).field_0x34 = 0;
      *(undefined8 *)&(pFVar13->PerSystemData).field_0x40 = 0;
      pFVar14 = pFVar13;
    }
    pFVar13 = (this->ComponentLeakDetector).Ptr;
    if ((pFVar13 != pFVar14) &&
       ((this->ComponentLeakDetector).Ptr = pFVar14, pFVar13 != (FNiagaraComponentLeakDetector *)0x0
       )) {
      *(undefined4 *)&(pFVar13->PerSystemData).field_0x48 = 0;
      pvVar3 = *(void **)&(pFVar13->PerSystemData).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar13->PerSystemData);
      ::operator_delete(pFVar13,0x58);
    }
  }
  FNiagaraComponentSettings::UpdateSettings();
  return;
}

// InitDataChannel @ 149451b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::InitDataChannel
          (FNiagaraWorldManager *this,UNiagaraDataChannel *param_1,bool param_2)

{
  <lambda_1> local_res8;
  
  ForAllSystemSimulations<_FNiagaraWorldManager::WaitForAsyncWork_::__l2::<lambda_1>_>
            (this,local_res8);
  FNiagaraDataChannelManager::InitDataChannel((this->DataChannelManager).Ptr,param_1,param_2);
  return;
}

// InstanceCountCull @ 149452cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::InstanceCountCull
          (FNiagaraWorldManager *this,UNiagaraEffectType *param_1,UNiagaraSystem *param_2,
          FNiagaraSystemScalabilitySettings *param_3,FNiagaraScalabilityState *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = FFXBudget::WorstAdjustedUsage;
  if (ScalabilityCullingMode != Enabled) {
    return;
  }
  iVar8 = param_3->MaxSystemInstances;
  iVar9 = param_3->MaxInstances;
  if ((param_3->bCullMaxInstanceCount == 0) || (param_1->NumInstances < iVar9)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if ((param_3->bCullPerSystemMaxInstanceCount == 0) || (param_2->ActiveInstances < iVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = bVar6 | bVar5;
  if (((GEnableNiagaraGlobalBudgetCulling == 0) || (!FFXBudget::bEnabled)) ||
     (!INiagaraModule::bUseGlobalFXBudget)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar6 != 0) {
    param_4->bCulledByGlobalBudget = '\0';
    goto LAB_149452e4e;
  }
  if (!bVar2) goto LAB_149452e4e;
  uVar7 = (param_3->BudgetScaling).bScaleSystemInstanceCountByGlobalBudgetUse;
  if ((param_3->BudgetScaling).bScaleMaxInstanceCountByGlobalBudgetUse == 0) {
    if (uVar7 == 0) goto LAB_149452e4e;
LAB_149452dd5:
    fVar11 = FNiagaraLinearRamp::Evaluate
                       (&(param_3->BudgetScaling).MaxSystemInstanceCountScaleByGlobalBudgetUse,
                        fVar11);
    iVar8 = (int)(fVar11 * (float)iVar8);
  }
  else {
    fVar10 = FNiagaraLinearRamp::Evaluate
                       (&(param_3->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse,
                        FFXBudget::WorstAdjustedUsage);
    iVar9 = (int)(fVar10 * (float)iVar9);
    if (uVar7 != 0) goto LAB_149452dd5;
  }
  if ((param_3->bCullMaxInstanceCount == 0) || (param_1->NumInstances < iVar9)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if ((param_3->bCullPerSystemMaxInstanceCount == 0) || (param_2->ActiveInstances < iVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = bVar6 | bVar5;
  param_4->field_0xa =
       (bVar6 << 2 | param_4->field_0xa & 4) ^ param_4->field_0xa & 0xfb | bVar6 << 7;
LAB_149452e4e:
  bVar5 = (bVar6 << 2 | param_4->field_0xa & 4) ^ param_4->field_0xa & 0xfb;
  param_4->field_0xa = (bVar6 << 5 ^ bVar5) & 0x20 ^ bVar5;
  return;
}

// InvalidateCachedSystemScalabilityData @ 149453060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::InvalidateCachedSystemScalabilityData(FNiagaraWorldManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar11 = 0;
  puVar1 = &(this->ScalabilityManagers).field_0x10;
  iVar3 = *(int *)&(this->ScalabilityManagers).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14945310d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14945310d:
  uVar10 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ScalabilityManagers).field_0x8 -
                       *(int *)&(this->ScalabilityManagers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149453210;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_149453210:
  while( true ) {
    if (*(int *)&(this->ScalabilityManagers).field_0x8 -
        *(int *)&(this->ScalabilityManagers).field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FNiagaraScalabilityManager::InvalidateCachedSystemData
              ((FNiagaraScalabilityManager *)
               ((longlong)TStack_50.CurrentBitIndex * 0xf8 +
               *(longlong *)&this->ScalabilityManagers + 8));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// InvalidateCachedSystemScalabilityDataForAllWorlds @ 149453290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::InvalidateCachedSystemScalabilityDataForAllWorlds(void)

{
  FNiagaraWorldManager *this;
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14945333d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_14945333d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149453450;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_149453450:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    this = *(FNiagaraWorldManager **)
            (WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (this != (FNiagaraWorldManager *)0x0) {
      InvalidateCachedSystemScalabilityData(this);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// IsComponentLocalPlayerLinked @ 1494534f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNiagaraWorldManager::IsComponentLocalPlayerLinked(USceneComponent *param_1)

{
  int iVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  APawn *pAVar7;
  
  if ((param_1 == (USceneComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0xa17,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pAVar7 = (APawn *)param_1->_padding_;
  if (pAVar7 != (APawn *)0x0) {
    pUVar6 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar6->_padding_)) && (bVar4 = APawn::IsLocallyViewed(pAVar7), bVar4)) {
      return true;
    }
    pAVar7 = AActor::GetInstigator((AActor *)pAVar7);
    if ((pAVar7 != (APawn *)0x0) && (bVar4 = APawn::IsLocallyViewed(pAVar7), bVar4)) {
      return true;
    }
  }
  pUVar2 = (param_1->AttachParent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    return false;
  }
  bVar4 = IsComponentLocalPlayerLinked(pUVar2);
  return bVar4;
}

// LegacyOnPostWorldCleanup @ 149454890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::LegacyOnPostWorldCleanup(FNiagaraWorldManager *this,bool param_1,bool param_2)

{
  UNiagaraComponentPool *this_00;
  
  this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_00,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  return;
}

// LegacyOnWorldBeginTearDown @ 1494548d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::LegacyOnWorldBeginTearDown(FNiagaraWorldManager *this)

{
  UNiagaraComponentPool *this_00;
  
  this->bIsTearingDown = true;
  this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_00,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  return;
}

// LegacyOnWorldCleanup @ 149454910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::LegacyOnWorldCleanup(FNiagaraWorldManager *this,bool param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 *puVar1;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *this_02;
  TMap<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
  *this_03;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *this_04;
  ulonglong uVar2;
  UNiagaraComponentPool *this_05;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *pTVar11;
  int *piVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  longlong local_d8;
  longlong local_c8;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  this->bIsCleaningUp = true;
  FNiagaraDeferredMethodQueue::ExecuteAndClear(&this->DeferredMethods);
  this_05 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_05 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_05,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  local_c8 = 7;
  piVar12 = (int *)&this->SystemSimulations[0][0].field_0x2c;
  do {
    pTVar11 = (TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
               *)(piVar12 + -0xb);
    local_d8 = 2;
    do {
      uVar7 = 0;
      uVar10 = piVar12[-1];
      uVar5 = 1;
      uVar6 = uVar7;
      uVar13 = uVar7;
      if (uVar10 != 0) {
        puVar15 = *(uint **)(piVar12 + -3);
        if (*(uint **)(piVar12 + -3) == (uint *)0x0) {
          puVar15 = (uint *)(piVar12 + -7);
        }
        uVar6 = *puVar15;
        uVar13 = 0;
        while (uVar6 == 0) {
          lVar8 = (longlong)(int)uVar7;
          uVar13 = uVar13 + 0x20;
          uVar7 = uVar7 + 1;
          uVar6 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
          goto LAB_149454a0d;
          uVar6 = puVar15[lVar8 + 1];
        }
        uVar5 = -uVar6 & uVar6;
        uVar2 = (ulonglong)uVar5 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar6 = (uVar13 - 1) + (int)lVar8;
        if ((int)uVar10 < (int)uVar6) {
          uVar6 = uVar10;
        }
      }
LAB_149454a0d:
      this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
      uVar16 = uVar10 & 0xffffffe0;
      TStack_80._padding_ = CONCAT44(uVar5,uVar7);
      TStack_80.CurrentBitIndex = uVar6;
      TStack_80.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar10 >> 5;
      TStack_80._28_4_ = local_3c;
      TStack_80.BaseBitIndex = uVar13;
      uStack_60 = CONCAT44(uStack_8c,piVar12[-9] - piVar12[2]);
      TStack_80.Array = this_00;
      if (((int)uVar10 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = piVar12[-1];
      if (uVar10 != uVar7) {
        pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3);
        }
        uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar10 == 0) {
          lVar8 = (longlong)iVar9;
          uVar16 = uVar16 + 0x20;
          iVar9 = iVar9 + 1;
          uVar10 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_149454b0f;
          uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = (int)lVar8 + -1 + uVar16;
        if ((int)uVar7 < (int)uVar10) {
          uVar10 = uVar7;
        }
      }
LAB_149454b0f:
      this_01 = (TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
                 *)(piVar12 + -0xb);
      while( true ) {
        if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
            (int)uStack_60) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_80.CurrentBitIndex == uVar10) &&
            (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7))) &&
           (pTVar11 == this_01)) break;
        FNiagaraSystemSimulation::Destroy
                  (*(FNiagaraSystemSimulation **)
                    ((longlong)TStack_80.CurrentBitIndex * 0x20 + 8 +
                    *(longlong *)&pTVar11->Elements));
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
      }
      iVar9 = piVar12[7];
      if (1 >= iVar9) {
        TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,piVar12[-9]);
      piVar12[-9] = 0;
      if (piVar12[-8] != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_01,0,piVar12 + -8);
      }
      piVar12[1] = -1;
      piVar12[2] = 0;
      piVar12[-1] = 0;
      if ((*piVar12 < 0) || (0x80 < *piVar12)) {
        *piVar12 = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
      }
      if (1 < iVar9) {
        piVar12[7] = 1;
        TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
        ::Rehash(this_01);
      }
      piVar12 = piVar12 + 0x14;
      local_d8 = local_d8 + -1;
      pTVar11 = pTVar11 + 1;
    } while (local_d8 != 0);
    local_c8 = local_c8 + -1;
    if (local_c8 == 0) {
      CleanupParameterCollections(this);
      DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
                ((TSharedRef<FNiagaraSystemSimulation,1> *)
                 (this->SimulationsWithPostActorWork).AllocatorInstance.Data,
                 (this->SimulationsWithPostActorWork).ArrayNum);
      piVar12 = &(this->SimulationsWithPostActorWork).ArrayMax;
      (this->SimulationsWithPostActorWork).ArrayNum = 0;
      if (*piVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SimulationsWithPostActorWork).AllocatorInstance,0,piVar12);
      }
      DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
                ((TSharedRef<FNiagaraSystemSimulation,1> *)
                 (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data,
                 (this->SimulationsWithEndOfFrameWait).ArrayNum);
      piVar12 = &(this->SimulationsWithEndOfFrameWait).ArrayMax;
      (this->SimulationsWithEndOfFrameWait).ArrayNum = 0;
      if (*piVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SimulationsWithEndOfFrameWait).AllocatorInstance,0,piVar12);
      }
      DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
                ((TSharedPtr<FNiagaraSystemInstance,1> *)
                 (this->DeferredDeletionQueue).AllocatorInstance.Data,
                 (this->DeferredDeletionQueue).ArrayNum);
      piVar12 = &(this->DeferredDeletionQueue).ArrayMax;
      (this->DeferredDeletionQueue).ArrayNum = 0;
      if (*piVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar12);
      }
      this_02 = &this->ScalabilityManagers;
      bVar4 = 1 < *(int *)&(this->ScalabilityManagers).field_0x48;
      if (!bVar4) {
        TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                          *)this_02);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_02,0,*(int *)&(this->ScalabilityManagers).field_0x8);
      puVar1 = &(this->ScalabilityManagers).field_0xc;
      *(undefined4 *)&(this->ScalabilityManagers).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf8,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->ScalabilityManagers).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ScalabilityManagers).field_0x34 = 0;
      iVar9 = *(int *)&(this->ScalabilityManagers).field_0x2c;
      *(undefined4 *)&(this->ScalabilityManagers).field_0x28 = 0;
      if ((iVar9 < 0) || (0x80 < iVar9)) {
        *(undefined4 *)&(this->ScalabilityManagers).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScalabilityManagers).field_0x10,0
                  );
      }
      if (bVar4) {
        *(undefined4 *)&(this->ScalabilityManagers).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                  *)this_02);
      }
      this_03 = &this->CullProxyMap;
      bVar4 = 1 < *(int *)&(this->CullProxyMap).field_0x48;
      if (!bVar4) {
        TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
                          *)this_03);
      }
      puVar1 = &(this->CullProxyMap).field_0xc;
      *(undefined4 *)&(this->CullProxyMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->CullProxyMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CullProxyMap).field_0x34 = 0;
      iVar9 = *(int *)&(this->CullProxyMap).field_0x2c;
      *(undefined4 *)&(this->CullProxyMap).field_0x28 = 0;
      if ((iVar9 < 0) || (0x80 < iVar9)) {
        *(undefined4 *)&(this->CullProxyMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CullProxyMap).field_0x10,0);
      }
      if (bVar4) {
        *(undefined4 *)&(this->CullProxyMap).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
                  *)this_03);
      }
      this_04 = &this->DIGeneratedData;
      bVar4 = 1 < *(int *)&(this->DIGeneratedData).field_0x48;
      if (!bVar4) {
        TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
                          *)this_04);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_04,0,*(int *)&(this->DIGeneratedData).field_0x8);
      puVar1 = &(this->DIGeneratedData).field_0xc;
      *(undefined4 *)&(this->DIGeneratedData).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_04,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->DIGeneratedData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->DIGeneratedData).field_0x34 = 0;
      iVar9 = *(int *)&(this->DIGeneratedData).field_0x2c;
      *(undefined4 *)&(this->DIGeneratedData).field_0x28 = 0;
      if ((iVar9 < 0) || (0x80 < iVar9)) {
        *(undefined4 *)&(this->DIGeneratedData).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DIGeneratedData).field_0x10,0);
      }
      if (bVar4) {
        *(undefined4 *)&(this->DIGeneratedData).field_0x48 = 1;
        TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
                  *)this_04);
      }
      return;
    }
  } while( true );
}

// MarkSimulationForPostActorWork @ 149454fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::MarkSimulationForPostActorWork
          (FNiagaraWorldManager *this,FNiagaraSystemSimulation *param_1)

{
  int *piVar1;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedRef<FNiagaraSystemSimulation,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<FNiagaraSystemSimulation,1> local_18;
  
  if ((param_1 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemSimulation != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x5f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->bIsSolo != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SystemSimulation->GetIsSolo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x5f7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar10 = &this->SimulationsWithPostActorWork;
  pFVar9 = (pTVar10->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)(this->SimulationsWithPostActorWork).ArrayNum * 0x10;
  for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 0x10) {
    if (*(FNiagaraSystemSimulation **)pFVar9 == param_1) {
      return;
    }
  }
  pTVar7 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                     ((TSharedFromThis<FNiagaraSystemSimulation,1> *)param_1,&local_18);
  pTVar2 = (TSharedRef<FNiagaraSystemSimulation,1> *)(pTVar10->AllocatorInstance).Data;
  if (((pTVar2 <= pTVar7) && (pTVar7 < pTVar2 + (this->SimulationsWithPostActorWork).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->SimulationsWithPostActorWork).ArrayNum;
  piVar1 = &(this->SimulationsWithPostActorWork).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->SimulationsWithPostActorWork).ArrayNum = iVar6 + 1;
  pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FNiagaraSystemSimulation **)pFVar9 = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// MarkSimulationsForEndOfFrameWait @ 149455130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::MarkSimulationsForEndOfFrameWait
          (FNiagaraWorldManager *this,FNiagaraSystemSimulation *param_1)

{
  int *piVar1;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedRef<FNiagaraSystemSimulation,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<FNiagaraSystemSimulation,1> local_18;
  
  if ((param_1 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemSimulation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x600,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->bIsSolo != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SystemSimulation->GetIsSolo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x601,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar10 = &this->SimulationsWithEndOfFrameWait;
  pFVar9 = (pTVar10->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)(this->SimulationsWithEndOfFrameWait).ArrayNum * 0x10;
  for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 0x10) {
    if (*(FNiagaraSystemSimulation **)pFVar9 == param_1) {
      return;
    }
  }
  pTVar7 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                     ((TSharedFromThis<FNiagaraSystemSimulation,1> *)param_1,&local_18);
  pTVar2 = (TSharedRef<FNiagaraSystemSimulation,1> *)(pTVar10->AllocatorInstance).Data;
  if (((pTVar2 <= pTVar7) && (pTVar7 < pTVar2 + (this->SimulationsWithEndOfFrameWait).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->SimulationsWithEndOfFrameWait).ArrayNum;
  piVar1 = &(this->SimulationsWithEndOfFrameWait).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->SimulationsWithEndOfFrameWait).ArrayNum = iVar6 + 1;
  pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FNiagaraSystemSimulation **)pFVar9 = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ObjectPoolGetOrCreate @ 1494555b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __thiscall
FNiagaraWorldManager::ObjectPoolGetOrCreate(FNiagaraWorldManager *this,UClass *param_1)

{
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar4;
  bool local_res10 [8];
  undefined8 local_res18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x9f2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((param_1 == (UClass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x9f3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if (GNiagaraWorldManagerObjectPoolEnabled != false) {
    if ((this->ObjectPool).Ptr == (FNiagaraSimpleObjectPool *)0x0) {
      pTVar4 = ::operator_new(0x50);
      if (pTVar4 != (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)0x0) {
        *(undefined8 *)(&pTVar4->field_0x0 + 0x10) = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 0x18) = 0;
        *(undefined8 *)(pTVar4 + 1) = 0;
        *(undefined8 *)&pTVar4[1].field_0x10 = 0;
        *(undefined8 *)&pTVar4->field_0x0 = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 8) = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 0x20) = 0;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x28) = 0;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x2c) = 0x80;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x34) = 0;
        *(undefined8 *)&pTVar4[1].field_0x8 = 0;
      }
      this_00 = (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(this->ObjectPool).Ptr;
      if ((this_00 != pTVar4) &&
         ((this->ObjectPool).Ptr = (FNiagaraSimpleObjectPool *)pTVar4,
         this_00 !=
         (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0)) {
        *(undefined4 *)&this_00[1].field_0x10 = 0;
        if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (this_00);
        ::operator_delete(this_00,0x50);
      }
    }
    pUVar3 = FNiagaraSimpleObjectPool::GetOrCreateObject
                       ((this->ObjectPool).Ptr,param_1,(UObject *)this->World,local_res10);
    return pUVar3;
  }
  local_res18 = 0;
  pUVar3 = NewObject<UObject>((UObject *)this->World,param_1,(FName)0x0,RF_NoFlags,(UObject *)0x0,
                              false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return pUVar3;
}

// ObjectPoolGetOrCreate @ 149455730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __thiscall
FNiagaraWorldManager::ObjectPoolGetOrCreate
          (FNiagaraWorldManager *this,UClass *param_1,bool *param_2)

{
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar4;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x9f2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((param_1 == (UClass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x9f3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  *param_2 = false;
  if (GNiagaraWorldManagerObjectPoolEnabled != false) {
    if ((this->ObjectPool).Ptr == (FNiagaraSimpleObjectPool *)0x0) {
      pTVar4 = ::operator_new(0x50);
      if (pTVar4 != (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)0x0) {
        *(undefined8 *)(&pTVar4->field_0x0 + 0x10) = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 0x18) = 0;
        *(undefined8 *)(pTVar4 + 1) = 0;
        *(undefined8 *)&pTVar4[1].field_0x10 = 0;
        *(undefined8 *)&pTVar4->field_0x0 = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 8) = 0;
        *(undefined8 *)(&pTVar4->field_0x0 + 0x20) = 0;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x28) = 0;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x2c) = 0x80;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x30) = 0xffffffff;
        *(undefined4 *)(&pTVar4->field_0x0 + 0x34) = 0;
        *(undefined8 *)&pTVar4[1].field_0x8 = 0;
      }
      this_00 = (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(this->ObjectPool).Ptr;
      if ((this_00 != pTVar4) &&
         ((this->ObjectPool).Ptr = (FNiagaraSimpleObjectPool *)pTVar4,
         this_00 !=
         (TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0)) {
        *(undefined4 *)&this_00[1].field_0x10 = 0;
        if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
          FMemory::Free(*(void **)&this_00[1].field_0x8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (this_00);
        ::operator_delete(this_00,0x50);
      }
    }
    pUVar3 = FNiagaraSimpleObjectPool::GetOrCreateObject
                       ((this->ObjectPool).Ptr,param_1,(UObject *)this->World,param_2);
    return pUVar3;
  }
  pUVar3 = NewObject<UObject>((UObject *)this->World,param_1,(FName)0x0,RF_NoFlags,(UObject *)0x0,
                              false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return pUVar3;
}

// ObjectPoolReturn @ 1494558c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::ObjectPoolReturn(FNiagaraWorldManager *this,UObject *param_1)

{
  FNiagaraSimpleObjectPool *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0xa0b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) &&
     (GNiagaraWorldManagerObjectPoolEnabled != false)) {
    this_00 = (this->ObjectPool).Ptr;
    if (this_00 == (FNiagaraSimpleObjectPool *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849574926>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0xa0e,"ObjectPool");
      if (!bVar2) {
        return;
      }
code_r0x00014945599a:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(UWorld **)&param_1->field_0x20 == this->World) {
      FNiagaraSimpleObjectPool::ReturnObject(this_00,param_1);
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849574926>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0xa0e,"Obj->GetOuter() == World");
      if (bVar2) goto code_r0x00014945599a;
    }
  }
  return;
}

// OnComputeDispatchInterfaceDestroyed @ 1494559c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::OnComputeDispatchInterfaceDestroyed
          (FNiagaraGpuComputeDispatchInterface *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FNiagaraGpuComputeDispatchInterface *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  uVar5 = 1;
  iVar13 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar6 = 0;
  if (uVar11 != 0) {
    puVar14 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar14 = (uint *)WorldManagers._32_8_;
    }
    uVar6 = *puVar14;
    iVar13 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar6 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_149455a6d;
      uVar6 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar6 = local_res18 + -1 + iVar13;
    if ((int)uVar11 < (int)uVar6) {
      uVar6 = uVar11;
    }
  }
LAB_149455a6d:
  bVar3 = WorldManagers._40_1_;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,iVar12);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uVar6 = uVar11;
  if ((int)uVar11 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = WorldManagers._40_4_;
  }
  if (uVar11 != uVar6) {
    lVar8 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar8 = WorldManagers._32_8_;
    }
    uVar11 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_149455b80;
      uVar11 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_149455b80:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar8 = WorldManagers._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18;
    pFVar7 = FNiagaraGpuComputeDispatchInterface::Get
                       (*(UWorld **)
                         (WorldManagers._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18));
    if (pFVar7 == param_1) {
      lVar8 = *(longlong *)(lVar8 + 8);
      FNiagaraDataChannelManager::OnComputeDispatchInterfaceDestroyed
                (*(FNiagaraDataChannelManager **)(lVar8 + 0x20c8),param_1);
      DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
                (*(TSharedPtr<FNiagaraSystemInstance,1> **)(lVar8 + 0x1f80),*(int *)(lVar8 + 0x1f88)
                );
      *(undefined4 *)(lVar8 + 0x1f88) = 0;
      if (*(int *)(lVar8 + 0x1f8c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(lVar8 + 0x1f80),0,(int *)(lVar8 + 0x1f8c));
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnComputeDispatchInterfaceDestroyed_Internal @ 149455c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::OnComputeDispatchInterfaceDestroyed_Internal
          (FNiagaraWorldManager *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  int *piVar1;
  
  FNiagaraDataChannelManager::OnComputeDispatchInterfaceDestroyed
            ((this->DataChannelManager).Ptr,param_1);
  DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
            ((TSharedPtr<FNiagaraSystemInstance,1> *)
             (this->DeferredDeletionQueue).AllocatorInstance.Data,
             (this->DeferredDeletionQueue).ArrayNum);
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar1);
  }
  return;
}

// OnPostGarbageCollect @ 149455cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPostGarbageCollect(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_149455d7d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_149455d7d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149455e90;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_149455e90:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    PostGarbageCollect(*(FNiagaraWorldManager **)
                        (WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// OnPostReachabilityAnalysis @ 1494564c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPostReachabilityAnalysis(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1254,"FNiagaraWorldManager::OnPostReachabilityAnalysis",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
               ,0x4e6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1254);
  }
  iVar8 = 0;
  uVar4 = 1;
  iVar9 = 0;
  uVar10 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar10 != 0) {
    puVar11 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar11 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar11;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      uVar5 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1494565ae;
      uVar5 = puVar11[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar9;
    if ((int)uVar10 < (int)uVar5) {
      uVar5 = uVar10;
    }
  }
LAB_1494565ae:
  bVar2 = WorldManagers._40_1_;
  uVar12 = uVar10 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar8);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar9;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar10 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar8 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1494566c0;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
    uVar13 = (ulonglong)uVar12;
  }
LAB_1494566c0:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    PostReachabilityAnalysis
              (*(FNiagaraWorldManager **)
                (WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnPostWorldCleanup @ 149456740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPostWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  FNiagaraWorldManager *this;
  UNiagaraComponentPool *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    this = (FNiagaraWorldManager *)*puVar4;
    if (this == (FNiagaraWorldManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849573508>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x484,"WorldMan");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (NiagaraRollbackCVars::NewWorldCleanup != false) {
        OnWorldCleanup(this,param_2,param_3);
        return;
      }
      this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
      if (this_00 != (UNiagaraComponentPool *)0x0) {
        UNiagaraComponentPool::Cleanup(this_00,this->World);
      }
      FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
    }
  }
  return;
}

// OnPostWorldCleanup @ 149456820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::OnPostWorldCleanup(FNiagaraWorldManager *this,bool param_1,bool param_2)

{
  UNiagaraComponentPool *this_00;
  
  if (NiagaraRollbackCVars::NewWorldCleanup) {
    OnWorldCleanup(this,param_1,param_2);
    return;
  }
  this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_00,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  return;
}

// OnPostWorldInit @ 149456870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::OnPostWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar3;
  longlong *plVar4;
  
  pTVar3 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  plVar4 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 == 0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849573480>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x468,"WorldMan");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (NiagaraRollbackCVars::DelayNDCManagerInitialiation == false) {
      FNiagaraDataChannelManager::Init(*(FNiagaraDataChannelManager **)(*plVar4 + 0x20c8));
      return;
    }
  }
  return;
}

// OnPostWorldInit @ 1494568f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::OnPostWorldInit(FNiagaraWorldManager *this)

{
  if (!NiagaraRollbackCVars::DelayNDCManagerInitialiation) {
    FNiagaraDataChannelManager::Init((this->DataChannelManager).Ptr);
    return;
  }
  return;
}

// OnPreGarbageCollect @ 149456910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPreGarbageCollect(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1494569bd;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_1494569bd:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149456ad0;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_149456ad0:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    PreGarbageCollect(*(FNiagaraWorldManager **)
                       (WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// OnPreGarbageCollectBeginDestroy @ 149456b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPreGarbageCollectBeginDestroy(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_149456bfd;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_149456bfd:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149456d10;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_149456d10:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    PreGarbageCollectBeginDestroy
              (*(FNiagaraWorldManager **)
                (WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// OnPreWorldFinishDestroy @ 1494573e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnPreWorldFinishDestroy(UWorld *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar4;
  longlong *plVar5;
  uint uVar6;
  UWorld *local_res10 [3];
  
  pTVar4 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  plVar5 = (longlong *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*plVar5;
    if (puVar1 == (undefined8 *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849573521>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x491,"WorldMan");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_res10[0] = param_1;
      TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UWorld_const_*>
                ((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                  *)&WorldManagers,uVar6 >> 0x10 ^ uVar6,local_res10);
    }
  }
  return;
}

// OnRefreshOwnerAllowsScalability @ 1494574b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnRefreshOwnerAllowsScalability(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14945755d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_14945755d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_50._padding_ = CONCAT44(uVar4,iVar9);
  TStack_50.CurrentBitIndex = uVar5;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = uVar5;
  TStack_50.BaseBitIndex = iVar10;
  uStack_30 = CONCAT44(uStack_5c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149457670;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_149457670:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == (int)uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    RefreshOwnerAllowsScalability
              (*(FNiagaraWorldManager **)
                (WorldManagers._0_8_ + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// OnShutdown @ 1494576f0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl FNiagaraWorldManager::OnShutdown(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar8;
  FGameDelegates *pFVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (OnWorldInitHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPreWorldInitialization,OnWorldInitHandle);
  }
  if (OnPostWorldInitHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPostWorldInitialization,OnPostWorldInitHandle);
  }
  if (OnWorldCleanupHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldCleanup,OnWorldCleanupHandle);
  }
  if (OnPostWorldCleanupHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPostWorldCleanup,OnPostWorldCleanupHandle);
  }
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnPreWorldFinishDestroy,OnPreWorldFinishDestroyHandle);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *)
             &FWorldDelegates::OnWorldBeginTearDown,OnWorldBeginTearDownHandle);
  if (TickWorldStartHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldTickStart,TickWorldStartHandle);
  }
  if (TickWorldEndHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldTickEnd,TickWorldEndHandle);
  }
  if (OnWorldPreActorTickHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreActorTick,OnWorldPreActorTickHandle);
  }
  if (TickWorldHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPostActorTick,TickWorldHandle);
  }
  if (OnWorldPreSendAllEndOfFrameUpdatesHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreSendAllEndOfFrameUpdates,
               OnWorldPreSendAllEndOfFrameUpdatesHandle);
  }
  pTVar8 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  if (PreGCHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(pTVar8,PreGCHandle);
  }
  if (PostReachabilityAnalysisHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostReachabilityAnalysis,PostReachabilityAnalysisHandle);
  }
  pTVar8 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPostGarbageCollect();
  if (PostGCHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(pTVar8,PostGCHandle);
  }
  if (PreGCBeginDestroyHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy,
               PreGCBeginDestroyHandle);
  }
  if (ViewTargetChangedHandle.ID != 0) {
    pFVar9 = FGameDelegates::Get();
    if (ViewTargetChangedHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar9->ViewTargetChangedDelegate,ViewTargetChangedHandle);
    }
  }
  if (WorldManagers._8_4_ != WorldManagers._52_4_) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4138563643849572913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x231,"WorldManagers.Num() == 0");
    iVar7 = WorldManagers._40_4_;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar14 = 0;
    uVar5 = 1;
    iVar15 = 0;
    iVar6 = iVar15;
    if (WorldManagers._40_4_ != 0) {
      puVar16 = (uint *)&WorldManagers.field_0x10;
      if (WorldManagers._32_8_ != 0) {
        puVar16 = (uint *)WorldManagers._32_8_;
      }
      uVar13 = *puVar16;
      iVar15 = 0;
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        iVar15 = iVar15 + 0x20;
        iVar14 = iVar14 + 1;
        iVar6 = WorldManagers._40_4_;
        if ((int)(WorldManagers._40_4_ + -1 + (WorldManagers._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
            iVar14) goto LAB_14945798d;
        uVar13 = puVar16[lVar11 + 1];
      }
      uVar5 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res10 = (int)lVar11;
      iVar6 = iVar15 + -1 + local_res10;
      if ((int)WorldManagers._40_4_ < iVar6) {
        iVar6 = WorldManagers._40_4_;
      }
    }
LAB_14945798d:
    uVar13 = WorldManagers._40_4_ & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar5,iVar14);
    TStack_60.CurrentBitIndex = iVar6;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = iVar15;
    uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
    iVar15 = (int)WorldManagers._40_4_ >> 5;
    bVar10 = WorldManagers._40_1_;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
    if (((int)WorldManagers._40_4_ < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar7 != WorldManagers._40_4_) {
      lVar11 = 0x154c84770;
      if (WorldManagers._32_8_ != 0) {
        lVar11 = WorldManagers._32_8_;
      }
      uVar5 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar15 * 4);
      while (uVar5 == 0) {
        lVar12 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        iVar7 = WorldManagers._40_4_;
        if ((int)(WorldManagers._40_4_ + -1 + (WorldManagers._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 <
            iVar15) goto LAB_149457ab0;
        uVar5 = *(uint *)(lVar11 + 4 + lVar12 * 4);
      }
      uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iVar7 = local_res18 + -1 + uVar13;
      if ((int)WorldManagers._40_4_ < iVar7) {
        iVar7 = WorldManagers._40_4_;
      }
    }
LAB_149457ab0:
    while( true ) {
      if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == iVar7) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
      break;
      puVar2 = *(undefined8 **)
                (WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if (puVar2 == (undefined8 *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4138563643849572918>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                           ,0x236,"WorldMan");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        (**(code **)*puVar2)();
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    bVar4 = 1 < (int)WorldManagers._72_4_;
    if (!bVar4) {
      TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                        *)&WorldManagers);
    }
    WorldManagers._8_4_ = 0;
    if (WorldManagers._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&WorldManagers,0,(int *)&WorldManagers.field_0xc);
    }
    WorldManagers._52_4_ = 0;
    WorldManagers._40_4_ = 0;
    WorldManagers._48_4_ = 0xffffffff;
    if (0x80 < (uint)WorldManagers._44_4_) {
      WorldManagers._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10,0);
    }
    if (bVar4) {
      WorldManagers._72_4_ = 1;
      TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                *)&WorldManagers);
    }
  }
  return;
}

// OnStartup @ 149457c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnStartup(void)

{
  FDelegateHandle FVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  FGameDelegates *pFVar3;
  wchar_t *pwVar4;
  <lambda_1> local_res8 [8];
  <lambda_2> local_res10 [24];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldInitHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPostWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnPostWorldInitHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnWorldCleanup,
                        (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldCleanupHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPostWorldCleanup,
                        (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnPostWorldCleanupHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
          AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                       *)&FWorldDelegates::OnPreWorldFinishDestroy,
                      (_func___cdecl_void_UWorld_ptr *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnPreWorldFinishDestroyHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
          AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>
                       *)&FWorldDelegates::OnWorldBeginTearDown,
                      (_func___cdecl_void_UWorld_ptr *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldBeginTearDownHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldTickStart,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  TickWorldStartHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldTickEnd,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  TickWorldEndHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPostActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  TickWorldHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPreActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldPreActorTickHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
          AddLambda<_FNiagaraWorldManager::OnStartup_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::OnWorldPreSendAllEndOfFrameUpdates,local_res8);
                    /* WARNING: Load size is inaccurate */
  OnWorldPreSendAllEndOfFrameUpdatesHandle.ID = *FVar1.ID;
  pTVar2 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar2,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  PreGCHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PostReachabilityAnalysis,
                     (_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  PostReachabilityAnalysisHandle.ID = *FVar1.ID;
  pTVar2 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar2,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  PostGCHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy,
                     (_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  PreGCBeginDestroyHandle.ID = *FVar1.ID;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar3 = FGameDelegates::Get();
    FVar1 = TMulticastDelegateRegistration<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
            ::AddLambda<_FNiagaraWorldManager::OnStartup_::__l5::<lambda_2>_>
                      ((TMulticastDelegateRegistration<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
                        *)&pFVar3->ViewTargetChangedDelegate,local_res10);
                    /* WARNING: Load size is inaccurate */
    ViewTargetChangedHandle.ID = *FVar1.ID;
  }
  return;
}

// OnWorldBeginTearDown @ 149457ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnWorldBeginTearDown(UWorld *param_1)

{
  FNiagaraWorldManager *this;
  UNiagaraComponentPool *this_00;
  code *pcVar1;
  bool bVar2;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    this = (FNiagaraWorldManager *)*puVar4;
    if (this != (FNiagaraWorldManager *)0x0) {
      this->bIsTearingDown = true;
      if (NiagaraRollbackCVars::NewWorldCleanup != false) {
        CleanupTransientObjectsAndManagers(this);
        return;
      }
      this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
      if (this_00 != (UNiagaraComponentPool *)0x0) {
        UNiagaraComponentPool::Cleanup(this_00,this->World);
      }
      FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4138563643849573535>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x49f,"WorldMan");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnWorldBeginTearDown @ 149457f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::OnWorldBeginTearDown(FNiagaraWorldManager *this)

{
  UNiagaraComponentPool *this_00;
  
  this->bIsTearingDown = true;
  if (NiagaraRollbackCVars::NewWorldCleanup != false) {
    CleanupTransientObjectsAndManagers(this);
    return;
  }
  this_00 = (this->ComponentPool).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraComponentPool *)0x0) {
    UNiagaraComponentPool::Cleanup(this_00,this->World);
  }
  FNiagaraDataChannelManager::Cleanup((this->DataChannelManager).Ptr);
  return;
}

// OnWorldCleanup @ 149457fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&WorldManagers,param_1);
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    if ((FNiagaraWorldManager *)*puVar4 == (FNiagaraWorldManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4138563643849573494>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                         ,0x476,"WorldMan");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      OnWorldCleanup((FNiagaraWorldManager *)*puVar4,param_2,param_3);
    }
  }
  return;
}

// OnWorldCleanup @ 149458060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::OnWorldCleanup(FNiagaraWorldManager *this,bool param_1,bool param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 *puVar1;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *this_02;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
  *pTVar11;
  int *piVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  longlong local_d8;
  longlong local_c8;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  this->bIsCleaningUp = true;
  if (NiagaraRollbackCVars::NewWorldCleanup == false) {
    LegacyOnWorldCleanup(this,param_1,param_2);
  }
  else {
    FNiagaraDeferredMethodQueue::ExecuteAndClear(&this->DeferredMethods);
    CleanupTransientObjectsAndManagers(this);
    local_c8 = 7;
    piVar12 = (int *)&this->SystemSimulations[0][0].field_0x2c;
    do {
      pTVar11 = (TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
                 *)(piVar12 + -0xb);
      local_d8 = 2;
      do {
        uVar7 = 0;
        uVar10 = piVar12[-1];
        uVar5 = 1;
        uVar6 = uVar7;
        uVar13 = uVar7;
        if (uVar10 != 0) {
          puVar15 = *(uint **)(piVar12 + -3);
          if (*(uint **)(piVar12 + -3) == (uint *)0x0) {
            puVar15 = (uint *)(piVar12 + -7);
          }
          uVar6 = *puVar15;
          uVar13 = 0;
          while (uVar6 == 0) {
            lVar8 = (longlong)(int)uVar7;
            uVar13 = uVar13 + 0x20;
            uVar7 = uVar7 + 1;
            uVar6 = uVar10;
            if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
            goto LAB_14945815d;
            uVar6 = puVar15[lVar8 + 1];
          }
          uVar5 = -uVar6 & uVar6;
          uVar2 = (ulonglong)uVar5 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar6 = (uVar13 - 1) + (int)lVar8;
          if ((int)uVar10 < (int)uVar6) {
            uVar6 = uVar10;
          }
        }
LAB_14945815d:
        this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
        uVar16 = uVar10 & 0xffffffe0;
        TStack_80._padding_ = CONCAT44(uVar5,uVar7);
        TStack_80.CurrentBitIndex = uVar6;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        iVar9 = (int)uVar10 >> 5;
        TStack_80._28_4_ = local_3c;
        TStack_80.BaseBitIndex = uVar13;
        uStack_60 = CONCAT44(uStack_8c,piVar12[-9] - piVar12[2]);
        TStack_80.Array = this_00;
        if (((int)uVar10 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = piVar12[-1];
        if (uVar10 != uVar7) {
          pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(piVar12 + -3);
          }
          uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                   *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
          while (uVar10 == 0) {
            lVar8 = (longlong)iVar9;
            uVar16 = uVar16 + 0x20;
            iVar9 = iVar9 + 1;
            uVar10 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
            goto LAB_14945825f;
            uVar10 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar10 = (int)lVar8 + -1 + uVar16;
          if ((int)uVar7 < (int)uVar10) {
            uVar10 = uVar7;
          }
        }
LAB_14945825f:
        this_01 = (TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
                   *)(piVar12 + -0xb);
        while( true ) {
          if (*(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34 !=
              (int)uStack_60) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_80.CurrentBitIndex == uVar10) &&
              (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)(piVar12 + -7))) &&
             (pTVar11 == this_01)) break;
          FNiagaraSystemSimulation::Destroy
                    (*(FNiagaraSystemSimulation **)
                      ((longlong)TStack_80.CurrentBitIndex * 0x20 + 8 +
                      *(longlong *)&pTVar11->Elements));
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        }
        iVar9 = piVar12[7];
        if (1 >= iVar9) {
          TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
          ::UnhashElements(this_01);
        }
        TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_01,0,piVar12[-9]);
        piVar12[-9] = 0;
        if (piVar12[-8] != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this_01,0,piVar12 + -8);
        }
        piVar12[1] = -1;
        piVar12[2] = 0;
        piVar12[-1] = 0;
        if ((*piVar12 < 0) || (0x80 < *piVar12)) {
          *piVar12 = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
        }
        if (1 < iVar9) {
          piVar12[7] = 1;
          TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
          ::Rehash(this_01);
        }
        piVar12 = piVar12 + 0x14;
        local_d8 = local_d8 + -1;
        pTVar11 = pTVar11 + 1;
      } while (local_d8 != 0);
      local_c8 = local_c8 + -1;
    } while (local_c8 != 0);
    CleanupParameterCollections(this);
    DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
              ((TSharedRef<FNiagaraSystemSimulation,1> *)
               (this->SimulationsWithPostActorWork).AllocatorInstance.Data,
               (this->SimulationsWithPostActorWork).ArrayNum);
    piVar12 = &(this->SimulationsWithPostActorWork).ArrayMax;
    (this->SimulationsWithPostActorWork).ArrayNum = 0;
    if (*piVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SimulationsWithPostActorWork).AllocatorInstance,0,piVar12);
    }
    DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
              ((TSharedRef<FNiagaraSystemSimulation,1> *)
               (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data,
               (this->SimulationsWithEndOfFrameWait).ArrayNum);
    piVar12 = &(this->SimulationsWithEndOfFrameWait).ArrayMax;
    (this->SimulationsWithEndOfFrameWait).ArrayNum = 0;
    if (*piVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SimulationsWithEndOfFrameWait).AllocatorInstance,0,piVar12);
    }
    DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
              ((TSharedPtr<FNiagaraSystemInstance,1> *)
               (this->DeferredDeletionQueue).AllocatorInstance.Data,
               (this->DeferredDeletionQueue).ArrayNum);
    piVar12 = &(this->DeferredDeletionQueue).ArrayMax;
    (this->DeferredDeletionQueue).ArrayNum = 0;
    if (*piVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar12);
    }
    this_02 = &this->DIGeneratedData;
    bVar4 = 1 < *(int *)&(this->DIGeneratedData).field_0x48;
    if (!bVar4) {
      TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
                        *)this_02);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_02,0,*(int *)&(this->DIGeneratedData).field_0x8);
    puVar1 = &(this->DIGeneratedData).field_0xc;
    *(undefined4 *)&(this->DIGeneratedData).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->DIGeneratedData).field_0x34 = 0;
    *(undefined4 *)&(this->DIGeneratedData).field_0x30 = 0xffffffff;
    iVar9 = *(int *)&(this->DIGeneratedData).field_0x2c;
    *(undefined4 *)&(this->DIGeneratedData).field_0x28 = 0;
    if ((iVar9 < 0) || (0x80 < iVar9)) {
      *(undefined4 *)&(this->DIGeneratedData).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DIGeneratedData).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->DIGeneratedData).field_0x48 = 1;
      TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>,FDefaultSetAllocator>
                *)this_02);
      return;
    }
  }
  return;
}

// OnWorldInit @ 149458550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  int iVar1;
  FNiagaraWorldManager *this;
  FNiagaraWorldManager *this_00;
  uint uVar2;
  longlong lVar3;
  UWorld *local_res8;
  int local_res10 [2];
  UWorld **local_res18 [2];
  
  if ((param_2->bCreateFXSystem != 0) ||
     (!NiagaraRollbackCVars::WorldManagerRespectsWorldCreateFXSystem)) {
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    local_res8 = param_1;
    if (WorldManagers._8_4_ != WorldManagers._52_4_) {
      lVar3 = 0x154c84798;
      if (WorldManagers._64_8_ != 0) {
        lVar3 = WorldManagers._64_8_;
      }
      iVar1 = *(int *)(lVar3 + (ulonglong)(WorldManagers._72_4_ - 1 & uVar2) * 4);
      while (iVar1 != -1) {
        lVar3 = WorldManagers._0_8_ + (longlong)iVar1 * 0x18;
        if (*(UWorld **)(WorldManagers._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
          if (lVar3 != 0) goto LAB_149458654;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      }
    }
    local_res18[0] = &local_res8;
    TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UWorld_*_const_&>_>
              ((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                *)&WorldManagers,(uint)local_res10,
               (TKeyInitializer<UWorld_*_const_&> *)(ulonglong)uVar2,(bool *)local_res18);
    lVar3 = WorldManagers._0_8_ + (longlong)local_res10[0] * 0x18;
LAB_149458654:
    this_00 = *(FNiagaraWorldManager **)(lVar3 + 8);
    if (this_00 == (FNiagaraWorldManager *)0x0) {
      this = ::operator_new(0x2100);
      this_00 = (FNiagaraWorldManager *)0x0;
      if (this != (FNiagaraWorldManager *)0x0) {
        this_00 = FNiagaraWorldManager(this);
      }
      *(FNiagaraWorldManager **)(lVar3 + 8) = this_00;
    }
    Init(this_00,local_res8);
  }
  return;
}

// OnWorldPreActorTick @ 1494586a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::OnWorldPreActorTick(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FNiagaraWorldManager *pFVar1;
  
  pFVar1 = Get(param_1);
  if (pFVar1 != (FNiagaraWorldManager *)0x0) {
    NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
    return;
  }
  return;
}

// PostActorTick @ 14945f330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PostActorTick(FNiagaraWorldManager *this,float param_1)

{
  TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TMap<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>_>
  *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FNiagaraSystemSimulation *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  ENiagaraCullProxyMode EVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick> FVar25;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar26;
  FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::PostActorTick(float)_::_2_::FStat_STAT_NiagaraPostActorTick_GT>
  FVar27;
  ForElementType<FNiagaraCachedViewInfo> FVar28;
  ulonglong uVar29;
  FName FVar30;
  FName FVar31;
  FName FVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar36;
  longlong lVar37;
  FLLMScope local_res20 [2];
  FColor_u_0 local_150;
  FColor_u_0 local_14c;
  FColor_u_0 local_148 [2];
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_118;
  FName local_108;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *local_c8;
  char local_c0;
  char cStack_bf;
  FMemScope local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  undefined1 local_90 [32];
  longlong local_70;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  *pTStack_68;
  
  if (!__CsvProfilerStat1358) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1358 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res20,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,Niagara,true);
  FVar25 = StatPtr_STAT_NiagaraWorldManTick;
  if (StatPtr_STAT_NiagaraWorldManTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)0x0
     ) {
    pFVar24 = ::FName::FName(&local_b0,"STAT_NiagaraWorldManTick");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTick,*pFVar24,
                        L"Niagara Manager Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar25;
  bVar12 = false;
  bVar16 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar18 = false;
  bVar14 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_14945f508:
    bVar16 = bVar14;
    bVar12 = bVar18;
    bVar18 = false;
    FVar31 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar12 = false;
      bVar16 = true;
      bVar18 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_140.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x550);
        bVar12 = true;
        bVar16 = true;
        bVar18 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14945f508;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar18 = true;
  }
  FVar26 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar24 = ::FName::FName(&local_a8,"STAT_NiagaraOverview_GT");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar24,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar26;
  bVar15 = false;
  bVar14 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar11 = false;
  bVar19 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_14945f640:
    bVar15 = bVar11;
    bVar14 = bVar19;
    bVar19 = false;
    FVar32 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_14c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_14c._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar15 = false;
      bVar14 = true;
      bVar11 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_138.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x551);
        bVar15 = true;
        bVar14 = true;
        bVar11 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14945f640;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar19 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NiagaraPostActorTick_GT ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::PostActorTick(float)_::_2_::FStat_STAT_NiagaraPostActorTick_GT>
         )0x0) {
      pFVar24 = ::FName::FName(&local_a0,"STAT_NiagaraPostActorTick_GT");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraPostActorTick_GT,*pFVar24,
                 L"STAT_NiagaraPostActorTick_GT","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar27 = StatPtr_STAT_NiagaraPostActorTick_GT;
  if (StatPtr_STAT_NiagaraPostActorTick_GT ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::PostActorTick(float)_::_2_::FStat_STAT_NiagaraPostActorTick_GT>
       )0x0) {
    pFVar24 = ::FName::FName(&local_98,"STAT_NiagaraPostActorTick_GT");
    FVar27 = (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::PostActorTick(float)_::_2_::FStat_STAT_NiagaraPostActorTick_GT>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraPostActorTick_GT,
                          *pFVar24,L"STAT_NiagaraPostActorTick_GT","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar27;
  bVar11 = false;
  bVar13 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar17 = false;
  bVar20 = false;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar11 = false;
      bVar13 = true;
      bVar17 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_130.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x552);
        bVar11 = true;
        bVar13 = true;
        bVar17 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar17 = true;
      goto LAB_14945f7a4;
    }
  }
  bVar13 = bVar20;
  bVar11 = bVar17;
  bVar17 = false;
  FVar30 = local_108;
LAB_14945f7a4:
  NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
  fVar3 = this->DebugPlaybackRate;
  piVar33 = &(this->SimulationsWithPostActorWork).ArrayNum;
  if (0 < *piVar33) {
    if (NiagaraWorldManagerInternal::GTickParameterCollectionsOncePerFrame == false) {
      TickParameterCollections(this);
    }
    uVar34 = 0;
    if (0 < *piVar33) {
      lVar37 = 0;
      do {
        uVar35 = 0;
        if ((int)uVar34 < (this->SimulationsWithPostActorWork).ArrayNum) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
        lVar5 = *(longlong *)(pFVar4 + lVar37);
        if (((((*(byte *)(lVar5 + 0x30) & 1) != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
            (*(longlong *)(lVar5 + 0x10) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 8) >> 0x1e & 1) == 0)) {
          FNiagaraSystemSimulation::WaitForInstancesTickComplete
                    (*(FNiagaraSystemSimulation **)(pFVar4 + lVar37),false);
        }
        uVar34 = uVar34 + 1;
        lVar37 = lVar37 + 0x10;
      } while ((int)uVar34 < *piVar33);
    }
    piVar33 = &(this->SimulationsWithPostActorWork).ArrayNum;
    if (__CsvProfilerStat1392 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("CoreSystems_NiagaraPostActorUpdateTickGroups",_GCsvCategory_Particles.Index);
      __CsvProfilerStat1392 = true;
    }
    uVar34 = _GCsvCategory_Particles.Index;
    FCsvProfiler::BeginStat
              ("CoreSystems_NiagaraPostActorUpdateTickGroups",_GCsvCategory_Particles.Index,
               "CSV_CoreSystems_NiagaraPostActorUpdateTickGroups");
    uVar35 = 0;
    if (0 < *piVar33) {
      lVar37 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar35 < (this->SimulationsWithPostActorWork).ArrayNum) {
          uVar21 = ~uVar35 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
        lVar5 = *(longlong *)(pFVar4 + lVar37);
        if ((((*(byte *)(lVar5 + 0x30) & 1) != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
           ((*(longlong *)(lVar5 + 0x10) != 0 &&
            ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
          FNiagaraSystemSimulation::UpdateTickGroups_GameThread
                    (*(FNiagaraSystemSimulation **)(pFVar4 + lVar37));
        }
        uVar35 = uVar35 + 1;
        lVar37 = lVar37 + 0x10;
      } while ((int)uVar35 < *piVar33);
    }
    FCsvProfiler::EndStat("CoreSystems_NiagaraPostActorUpdateTickGroups",uVar34);
    pTVar9 = (TSharedRef<FNiagaraSystemSimulation,1> *)
             (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
    uVar10 = (this->SimulationsWithPostActorWork).ArrayNum;
    (this->SimulationsWithPostActorWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SimulationsWithPostActorWork).ArrayNum = 0;
    (this->SimulationsWithPostActorWork).ArrayMax = 0;
    for (pTVar36 = pTVar9; pTVar36 != pTVar9 + (int)uVar10; pTVar36 = pTVar36 + 1) {
      pFVar6 = pTVar36->Object;
      if ((((pFVar6->bCanExecute != 0) && (pFVar6->World != (UWorld *)0x0)) &&
          (pFVar6->System != (UNiagaraSystem *)0x0)) &&
         (((uint)pFVar6->System->_padding_ >> 0x1e & 1) == 0)) {
        FNiagaraSystemSimulation::Spawn_GameThread(pTVar36->Object,param_1 * fVar3,true);
      }
    }
    uVar34 = 0;
    if (0 < (this->SimulationsWithPostActorWork).ArrayNum) {
      lVar37 = 0;
      do {
        uVar35 = 0;
        if ((int)uVar34 < (this->SimulationsWithPostActorWork).ArrayNum) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
        lVar5 = *(longlong *)(pFVar4 + lVar37);
        if ((((*(byte *)(lVar5 + 0x30) & 1) != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
           ((*(longlong *)(lVar5 + 0x10) != 0 &&
            ((*(uint *)(*(longlong *)(lVar5 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
          FNiagaraSystemSimulation::WaitForInstancesTickComplete
                    (*(FNiagaraSystemSimulation **)(pFVar4 + lVar37),false);
        }
        uVar34 = uVar34 + 1;
        lVar37 = lVar37 + 0x10;
      } while ((int)uVar34 < (this->SimulationsWithPostActorWork).ArrayNum);
    }
    pTVar36 = (TSharedRef<FNiagaraSystemSimulation,1> *)
              (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
    iVar23 = (this->SimulationsWithPostActorWork).ArrayNum;
    if ((this->SimulationsWithPostActorWork).ArrayMax < 0) {
      DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>(pTVar36,iVar23);
      (this->SimulationsWithPostActorWork).ArrayNum = 0;
      if ((this->SimulationsWithPostActorWork).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SimulationsWithPostActorWork).AllocatorInstance,0,
                   &(this->SimulationsWithPostActorWork).ArrayMax);
      }
    }
    else {
      DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>(pTVar36,iVar23);
      (this->SimulationsWithPostActorWork).ArrayNum = 0;
    }
    DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>(pTVar9,uVar10);
    if (pTVar9 != (TSharedRef<FNiagaraSystemSimulation,1> *)0x0) {
      FMemory::Free(pTVar9);
    }
  }
  iVar23 = (this->CachedViewInfo).ArrayNum;
  pTVar1 = &this->CachedViewInfo;
  FVar28 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
  piVar33 = &(this->CachedViewInfo).ArrayMax;
  if (*piVar33 < 0) {
    if (FVar28 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
      FVar28 = (ForElementType<FNiagaraCachedViewInfo>)pTVar1;
    }
    DestructItems<FNiagaraCachedViewInfo,int>((FNiagaraCachedViewInfo *)FVar28,iVar23);
    (this->CachedViewInfo).ArrayNum = 0;
    if (*piVar33 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraCachedViewInfo>_>
                (0x2e0,0x10,0,&pTVar1->AllocatorInstance,0,piVar33);
    }
  }
  else {
    if (FVar28 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
      FVar28 = (ForElementType<FNiagaraCachedViewInfo>)pTVar1;
    }
    DestructItems<FNiagaraCachedViewInfo,int>((FNiagaraCachedViewInfo *)FVar28,iVar23);
    (this->CachedViewInfo).ArrayNum = 0;
  }
  pTVar2 = &this->CullProxyMap;
  TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_90,
             (TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_c0 = '\0';
  cStack_bf = '\0';
  stack0xffffffffffffff18 = local_90._16_16_;
  local_f8 = (longlong *)local_90._0_8_;
  auStack_f0._0_8_ = local_90._8_8_;
  local_d8 = local_70;
  pTStack_d0 = pTStack_68;
  uVar29 = local_90._24_8_ >> 0x20;
  uVar34 = local_90._28_4_;
  local_c8 = (TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
              *)pTVar2;
  if ((int)uVar34 < *(int *)(local_90._16_8_ + 0x18)) {
    do {
      plVar7 = local_f8;
      lVar37 = (longlong)(int)uVar34;
      if (((GNiagaraAllowCullProxies == 0) || (*(longlong *)(*local_f8 + 8 + lVar37 * 0x18) == 0))
         || (EVar22 = UNiagaraSystem::GetCullProxyMode
                                (*(UNiagaraSystem **)(*local_f8 + (longlong)(int)uVar29 * 0x18)),
            EVar22 == None)) {
        plVar7 = *(longlong **)(*plVar7 + 8 + lVar37 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x4a0))(plVar7,0);
        }
        TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_d0,uVar34);
        local_c0 = '\x01';
      }
      else {
        UNiagaraCullProxyComponent::TickCullProxy
                  (*(UNiagaraCullProxyComponent **)(*plVar7 + 8 + lVar37 * 0x18));
      }
      uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
      uVar29 = (ulonglong)uStack_dc;
      uVar34 = uStack_dc;
    } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
    if ((local_c0 != '\0') && (cStack_bf != '\0')) {
      uVar34 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
      if (uVar34 < 4) {
        iVar23 = 1;
      }
      else {
        uVar29 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
        lVar37 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        iVar23 = 1 << ((byte)lVar37 & 0x1f);
      }
      if (((0 < (int)uVar34) && (local_c8->HashSize < iVar23)) || (iVar23 < local_c8->HashSize)) {
        local_c8->HashSize = iVar23;
        TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
        ::Rehash(local_c8);
      }
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_res20);
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// PostGarbageCollect @ 14945fe70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PostGarbageCollect(FNiagaraWorldManager *this)

{
  TMap<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
  *pTVar1;
  int *piVar2;
  UObject *pUVar3;
  FNiagaraComponentLeakDetector *this_00;
  UWorld *pUVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
LAB_14945fe90:
  if (*(int *)&(this->ScalabilityManagers).field_0x8 !=
      *(int *)&(this->ScalabilityManagers).field_0x34) {
    piVar2 = *(int **)&(this->ScalabilityManagers).field_0x40;
    piVar8 = (int *)&(this->ScalabilityManagers).field_0x38;
    if (piVar2 != (int *)0x0) {
      piVar8 = piVar2;
    }
    iVar7 = *piVar8;
    if (iVar7 != -1) {
      do {
        puVar9 = (undefined8 *)((longlong)iVar7 * 0xf8 + *(longlong *)&this->ScalabilityManagers);
        pUVar3 = (UObject *)*puVar9;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar3 == (UObject *)0x0) goto LAB_149460009;
        }
        else {
          if (pUVar3 == (UObject *)0x0) goto LAB_149460009;
          UE::GC::MarkAsReachable(pUVar3);
        }
        iVar7 = *(int *)(puVar9 + 0x1e);
        if (iVar7 == -1) break;
      } while( true );
    }
  }
  pTVar1 = &this->SystemScalabilityKillCounts;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar10 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*local_48 + (longlong)(int)uVar10 * 0x24));
      if (!bVar6) {
        TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar10);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar10 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar11 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar7 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
        local_18->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  this_00 = (this->ComponentLeakDetector).Ptr;
  if ((((this_00 != (FNiagaraComponentLeakDetector *)0x0) &&
       (pUVar4 = this->World, pUVar4 != (UWorld *)0x0)) &&
      ((pUVar4->bIsWorldInitialized != '\0' &&
       ((pUVar4->bIsTearingDown == '\0' && (this->bIsTearingDown == false)))))) &&
     (this->bIsCleaningUp == false)) {
    FNiagaraComponentLeakDetector::ReportLeaks(this_00,pUVar4);
  }
  return;
LAB_149460009:
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                   *)&this->ScalabilityManagers,iVar7);
  goto LAB_14945fe90;
}

// PostReachabilityAnalysis @ 1494602a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PostReachabilityAnalysis(FNiagaraWorldManager *this)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraComponent>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x5e0) =
         *(uint *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x5e0) |
         4;
    lVar6 = (longlong)local_28.Index;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (0 < *(int *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x5a8)
       ) {
      lVar6 = (longlong)local_28.Index;
      uVar4 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_28.Index >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UActorComponent::MarkRenderStateDirty
                (*(UActorComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// PreActorTick @ 149460440

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::PreActorTick(FNiagaraWorldManager *this,ELevelTick param_1,float param_2)

{
  TNode *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  TNode *pTVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *pcStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  longlong *plStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pcStack_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar6 = uStack_58, uVar11 = uStack_60, lVar10 = lStack_68,
        pTVar1 = (NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Tail)->NextNode,
        pTVar1 != (TNode *)0x0) {
    pcVar7 = *(code **)&pTVar1->Item;
    uVar8 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    lStack_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    uStack_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = pcStack_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar6;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar9 = NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Tail;
    lStack_48 = *(longlong *)&pTVar1->Item;
    uVar6 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar2 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    NiagaraWorldManagerInternal::GlobalDeferredCallbacks.Tail = pTVar1;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = uStack_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)uStack_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = uStack_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar6;
    uStack_38 = uVar2;
    uStack_34 = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    uStack_28 = uVar11;
    pcStack_78 = pcVar7;
    uStack_70 = uVar8;
    if (lStack_48 != 0) {
      plVar13 = (longlong *)&uStack_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar9 != (TNode *)0x0) {
      if (*(longlong *)&pTVar9->Item != 0) {
        plVar13 = *(longlong **)&(pTVar9->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar9->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar9,0x40);
    }
    UE::Core::Private::Function::CheckCallable(pcStack_78);
    pcVar7 = pcStack_78;
    plVar13 = &lStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(uVar11);
  }
  if (pcStack_78 != (code *)0x0) {
    plVar13 = &lStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// PreGarbageCollect @ 149460450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PreGarbageCollect(FNiagaraWorldManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar3;
  longlong lVar4;
  TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManWaitPreGC> FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ulonglong uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  *local_78;
  char local_70;
  char cStack_6f;
  FStatMessage local_68;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  FVar15.Value = 0;
  if (GNiagaraWaitOnPreGC == 0) goto LAB_14946068b;
  FVar10 = StatPtr_STAT_NiagaraWorldManWaitPreGC;
  if (StatPtr_STAT_NiagaraWorldManWaitPreGC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManWaitPreGC>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_NiagaraWorldManWaitPreGC");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManWaitPreGC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManWaitPreGC,*pFVar9,
                        L"Niagara Manager Wait Pre Garbage Collect [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar6 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar14 == 0)) {
LAB_1494605a1:
    bVar7 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x3da);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494605a1;
    local_res8.s.LowPart = FVar12.Value;
    local_res8.s.HighPart = uVar14;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = false;
    bVar7 = true;
    FVar15.Value = FVar12.Value;
  }
  ForAllSystemSimulations<_FNiagaraWorldManager::WaitForAsyncWork_::__l2::<lambda_1>_>
            (this,(<lambda_1>)local_res8.s.LowPart._0_1_);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_14946068b:
  pTVar3 = &this->ScalabilityManagers;
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_58,
             (TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
              *)pTVar3);
  local_70 = '\0';
  cStack_6f = '\0';
  stack0xffffffffffffff68 = local_58._16_16_;
  auStack_a0._0_8_ = local_58._8_8_;
  local_88 = local_38;
  pTStack_80 = pTStack_30;
  uVar11 = local_58._24_8_ >> 0x20;
  uVar14 = local_58._28_4_;
  local_78 = (TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
              *)pTVar3;
  if ((int)uVar14 < *(int *)(local_58._16_8_ + 0x18)) {
    do {
      lVar4 = *(longlong *)((longlong)(int)uVar11 * 0xf8 + *(longlong *)local_58._0_8_);
      if (((lVar4 == 0) || ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)) ||
         (*(int *)((longlong)(int)uVar14 * 0xf8 + 0x20 + *(longlong *)local_58._0_8_) == 0)) {
        TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_80,uVar14);
        local_70 = '\x01';
      }
      uStack_90 = uStack_90 & ~auStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
      uVar11 = (ulonglong)uStack_8c;
      uVar14 = uStack_8c;
    } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
    if ((local_70 != '\0') && (cStack_6f != '\0')) {
      uVar14 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
      if (uVar14 < 4) {
        iVar8 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_78->HashSize < iVar8)) || (iVar8 < local_78->HashSize)) {
        local_78->HashSize = iVar8;
        TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
        ::Rehash(local_78);
      }
    }
  }
  this_00 = (TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(this->ObjectPool).Ptr;
  if (this_00 !=
      (TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    bVar5 = 1 < this_00->HashSize;
    if (!bVar5) {
      TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this_00->Elements).field_0x8);
    puVar2 = &(this_00->Elements).field_0xc;
    *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
    iVar8 = *(int *)&(this_00->Elements).field_0x2c;
    *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
    if ((iVar8 < 0) || (0x80 < iVar8)) {
      *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
    }
    if (bVar5) {
      this_00->HashSize = 1;
      TSet<TTuple<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  return;
}

// PreGarbageCollectBeginDestroy @ 149460860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PreGarbageCollectBeginDestroy(FNiagaraWorldManager *this)

{
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  this_00 = &this->ScalabilityManagers;
LAB_149460886:
  if (*(int *)&(this->ScalabilityManagers).field_0x8 !=
      *(int *)&(this->ScalabilityManagers).field_0x34) {
    piVar3 = *(int **)&(this->ScalabilityManagers).field_0x40;
    piVar11 = (int *)&(this->ScalabilityManagers).field_0x38;
    if (piVar3 != (int *)0x0) {
      piVar11 = piVar3;
    }
    iVar10 = *piVar11;
    if (iVar10 != -1) {
      do {
        puVar12 = (undefined8 *)((longlong)iVar10 * 0xf8 + *(longlong *)&this_00->field_0x0);
        pUVar4 = (UObject *)*puVar12;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar4 == (UObject *)0x0) goto LAB_149460ac5;
        }
        else {
          if (pUVar4 == (UObject *)0x0) goto LAB_149460ac5;
          UE::GC::MarkAsReachable(pUVar4);
        }
        iVar10 = *(int *)(puVar12 + 0x1e);
        if (iVar10 == -1) break;
      } while( true );
    }
  }
  iVar14 = 0;
  puVar1 = &(this->ScalabilityManagers).field_0x10;
  iVar10 = *(int *)&(this->ScalabilityManagers).field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14946096d;
      uVar13 = puVar17[lVar9 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = iVar16 + -1 + local_res10;
    if (iVar10 < iVar8) {
      iVar8 = iVar10;
    }
  }
LAB_14946096d:
  uVar13 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar14);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ScalabilityManagers).field_0x8 -
                       *(int *)&(this->ScalabilityManagers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149460a70;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar18;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_149460a70:
  while( true ) {
    if (*(int *)&(this->ScalabilityManagers).field_0x8 -
        *(int *)&(this->ScalabilityManagers).field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FNiagaraScalabilityManager::PreGarbageCollectBeginDestroy
              ((FNiagaraScalabilityManager *)
               ((longlong)TStack_50.CurrentBitIndex * 0xf8 + *(longlong *)&this_00->field_0x0 + 8));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
LAB_149460ac5:
  TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                   *)this_00,iVar10);
  goto LAB_149460886;
}

// PreSendAllEndOfFrameUpdates @ 149460b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PreSendAllEndOfFrameUpdates(FNiagaraWorldManager *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SimulationsWithPostActorWork).ArrayNum;
  if (0 < iVar2) {
    pFVar5 = (this->SimulationsWithPostActorWork).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->SimulationsWithPostActorWork).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraSystemSimulation,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      lVar3 = *(longlong *)pFVar5;
      if ((((*(byte *)(lVar3 + 0x30) & 1) != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) &&
         ((*(longlong *)(lVar3 + 0x10) != 0 &&
          ((*(uint *)(*(longlong *)(lVar3 + 0x10) + 8) >> 0x1e & 1) == 0)))) {
        FNiagaraSystemSimulation::WaitForInstancesTickComplete
                  (*(FNiagaraSystemSimulation **)pFVar5,false);
      }
      pFVar5 = pFVar5 + 0x10;
    }
  }
  iVar2 = (this->SimulationsWithEndOfFrameWait).ArrayNum;
  pFVar5 = (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->SimulationsWithEndOfFrameWait).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraSystemSimulation,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    lVar3 = *(longlong *)pFVar5;
    if (((((*(byte *)(lVar3 + 0x30) & 1) != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) &&
        (*(longlong *)(lVar3 + 0x10) != 0)) &&
       ((*(uint *)(*(longlong *)(lVar3 + 0x10) + 8) >> 0x1e & 1) == 0)) {
      FNiagaraSystemSimulation::WaitForInstancesTickComplete
                (*(FNiagaraSystemSimulation **)pFVar5,false);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pTVar4 = (TSharedRef<FNiagaraSystemSimulation,1> *)
           (this->SimulationsWithEndOfFrameWait).AllocatorInstance.Data;
  piVar1 = &(this->SimulationsWithEndOfFrameWait).ArrayMax;
  iVar2 = (this->SimulationsWithEndOfFrameWait).ArrayNum;
  if ((this->SimulationsWithEndOfFrameWait).ArrayMax < 0) {
    DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>(pTVar4,iVar2);
    (this->SimulationsWithEndOfFrameWait).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SimulationsWithEndOfFrameWait).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>(pTVar4,iVar2);
    (this->SimulationsWithEndOfFrameWait).ArrayNum = 0;
  }
  return;
}

// PrepareCachedViewInfo @ 149460c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FNiagaraWorldManager::PrepareCachedViewInfo
          (APlayerController *param_1,FNiagaraCachedViewInfo *param_2)

{
  UGameViewportClient *pUVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  ULocalPlayer *pUVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_608 [32];
  undefined1 local_5e8 [24];
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  FWorldCachedViewInfo local_5b8;
  TMatrix<double> local_3b8;
  TMatrix<double> local_338;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  TMatrix<double> local_298;
  TMatrix<double> local_218;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_158;
  double dStack_150;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_608;
  if (((param_1 != (APlayerController *)0x0) &&
      (pUVar9 = APlayerController::GetLocalPlayer(param_1), pUVar9 != (ULocalPlayer *)0x0)) &&
     (pUVar1 = (pUVar9->ViewportClient).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
  {
    local_298.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_298.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_218.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
    local_218.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_170 = 0;
    local_168 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_2b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_2b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    local_298.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_298.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_298.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_298.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_298.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_298.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_298.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_298.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_298.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
    local_298.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
    local_298.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
    local_298.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
    local_298.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_298.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_298.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_298.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_218.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_218.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_218.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_218.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_218.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_218.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_218.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_218.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_218.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
    local_218.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
    local_218.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
    local_218.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
    local_218.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_218.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_218.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_218.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    cVar8 = (**(code **)(pUVar9->_padding_ + 0x368))(pUVar9,pUVar1->Viewport,&local_2b8,0xffffffff);
    if (cVar8 != '\0') {
      (**(code **)(param_1->_padding_ + 0x840))(param_1,&local_5d0,local_5e8);
      dVar10 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar12 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_158 = dVar10;
      dStack_150 = dVar12;
      __vdecl_sincos2();
      uVar7 = _UNK_15066df7c;
      uVar6 = _UNK_15066df78;
      uVar5 = __xmm_80000000000000008000000000000000._4_4_;
      uVar4 = (uint)__xmm_80000000000000008000000000000000;
      dVar3 = __real_3ff0000000000000;
      local_3b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
      local_3b8.M[1][1] = _UNK_15061cbc8;
      local_3b8.M[0][2] = 0.0;
      local_3b8.M[0][3] = 0.0;
      local_3b8.M[2][0] = 0.0;
      local_3b8.M[2][1] = 0.0;
      local_3b8.M[1][2] = 0.0;
      local_3b8.M[1][3] = 0.0;
      local_3b8.M[3][2] =
           (double)CONCAT44((uint)((ulonglong)local_2a8 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            (uint)local_2a8 ^ (uint)__xmm_80000000000000008000000000000000);
      local_3b8.M[3][0]._0_4_ = (uint)local_2b8 ^ (uint)__xmm_80000000000000008000000000000000;
      local_3b8.M[3][0]._4_4_ = local_2b8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_3b8.M[3][1]._0_4_ = (uint)uStack_2b0 ^ _UNK_15066df78;
      local_3b8.M[3][1]._4_4_ = uStack_2b0._4_4_ ^ _UNK_15066df7c;
      local_3b8.M[3][3] = __real_3ff0000000000000;
      dVar12 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
               (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar2 = dVar10 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_3b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
      local_3b8.M[0][1] = _UNK_150689518;
      local_3b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
      local_3b8.M[2][3] = _UNK_150689518;
      VectorMatrixMultiply(&local_338,&local_3b8,&local_298);
      local_5b8.ViewMatrix.M[0][0] = local_338.M[0][0];
      local_5b8.ViewMatrix.M[0][1] = local_338.M[0][1];
      local_5b8.ViewMatrix.M[0][2] = local_338.M[0][2];
      local_5b8.ViewMatrix.M[0][3] = local_338.M[0][3];
      local_5b8.ViewMatrix.M[1][0] = local_338.M[1][0];
      local_5b8.ViewMatrix.M[1][1] = local_338.M[1][1];
      local_5b8.ViewMatrix.M[1][2] = local_338.M[1][2];
      local_5b8.ViewMatrix.M[1][3] = local_338.M[1][3];
      local_5b8.ViewMatrix.M[2][0] = local_338.M[2][0];
      local_5b8.ViewMatrix.M[2][1] = local_338.M[2][1];
      local_5b8.ViewMatrix.M[2][2] = local_338.M[2][2];
      local_5b8.ViewMatrix.M[2][3] = local_338.M[2][3];
      local_5b8.ViewMatrix.M[3][0] = local_338.M[3][0];
      local_5b8.ViewMatrix.M[3][1] = local_338.M[3][1];
      local_5b8.ViewMatrix.M[3][2] = local_338.M[3][2];
      local_5b8.ViewMatrix.M[3][3] = local_338.M[3][3];
      local_5b8.ProjectionMatrix.M[0][0] = local_218.M[0][0];
      local_5b8.ProjectionMatrix.M[0][1] = local_218.M[0][1];
      local_5b8.ProjectionMatrix.M[0][2] = local_218.M[0][2];
      local_5b8.ProjectionMatrix.M[0][3] = local_218.M[0][3];
      local_5b8.ProjectionMatrix.M[1][0] = local_218.M[1][0];
      local_5b8.ProjectionMatrix.M[1][1] = local_218.M[1][1];
      local_5b8.ProjectionMatrix.M[2][0] =
           (double)CONCAT44(local_218.M[2][0]._4_4_,local_218.M[2][0]._0_4_);
      local_5b8.ProjectionMatrix.M[2][1] =
           (double)CONCAT44(local_218.M[2][1]._4_4_,local_218.M[2][1]._0_4_);
      local_5b8.ProjectionMatrix.M[1][2] = local_218.M[1][2];
      local_5b8.ProjectionMatrix.M[1][3] = local_218.M[1][3];
      local_5b8.ProjectionMatrix.M[3][0] = local_218.M[3][0];
      local_5b8.ProjectionMatrix.M[3][1] = local_218.M[3][1];
      local_5b8.ProjectionMatrix.M[2][2] = local_218.M[2][2];
      local_5b8.ProjectionMatrix.M[2][3] = local_218.M[2][3];
      local_3b8.M[0][2] = 0.0;
      local_3b8.M[0][3] = 0.0;
      local_3b8.M[1][2] = 0.0;
      local_3b8.M[1][3] = 0.0;
      local_3b8.M[3][0]._0_4_ = (uint)local_2b8 ^ uVar4;
      local_3b8.M[3][0]._4_4_ = local_2b8._4_4_ ^ uVar5;
      local_3b8.M[3][1]._0_4_ = (uint)uStack_2b0 ^ uVar6;
      local_3b8.M[3][1]._4_4_ = uStack_2b0._4_4_ ^ uVar7;
      local_5b8.ProjectionMatrix.M[3][2] = local_218.M[3][2];
      local_5b8.ProjectionMatrix.M[3][3] = local_218.M[3][3];
      local_3b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
      local_3b8.M[1][1] = _UNK_15061cbc8;
      local_3b8.M[3][2] =
           (double)CONCAT44((uint)((ulonglong)local_2a8 >> 0x20) ^ uVar5,(uint)local_2a8 ^ uVar4);
      local_3b8.M[3][3] = dVar3;
      local_3b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
      local_3b8.M[0][1] = _UNK_150689518;
      local_3b8.M[2][0] = 0.0;
      local_3b8.M[2][1] = 0.0;
      local_3b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
      local_3b8.M[2][3] = _UNK_150689518;
      VectorMatrixMultiply(&local_138,&local_3b8,&local_298);
      VectorMatrixMultiply(&local_338,&local_138,&local_218);
      local_5b8.ViewProjectionMatrix.M[0][0] = local_338.M[0][0];
      local_5b8.ViewProjectionMatrix.M[0][1] = local_338.M[0][1];
      local_5b8.ViewProjectionMatrix.M[0][2] = local_338.M[0][2];
      local_5b8.ViewProjectionMatrix.M[0][3] = local_338.M[0][3];
      local_5b8.ViewProjectionMatrix.M[1][0] = local_338.M[1][0];
      local_5b8.ViewProjectionMatrix.M[1][1] = local_338.M[1][1];
      local_5b8.ViewProjectionMatrix.M[1][2] = local_338.M[1][2];
      local_5b8.ViewProjectionMatrix.M[1][3] = local_338.M[1][3];
      local_5b8.ViewProjectionMatrix.M[2][0] = local_338.M[2][0];
      local_5b8.ViewProjectionMatrix.M[2][1] = local_338.M[2][1];
      local_5b8.ViewProjectionMatrix.M[2][2] = local_338.M[2][2];
      local_5b8.ViewProjectionMatrix.M[2][3] = local_338.M[2][3];
      local_5b8.ViewProjectionMatrix.M[3][0] = local_338.M[3][0];
      local_5b8.ViewProjectionMatrix.M[3][1] = local_338.M[3][1];
      local_5b8.ViewProjectionMatrix.M[3][2] = local_338.M[3][2];
      local_5b8.ViewProjectionMatrix.M[3][3] = local_338.M[3][3];
      local_5b8.ViewToWorld.M[0][0] = dStack_150 * local_158;
      local_5b8.ViewToWorld.M[0][1] =
           local_158 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      local_5b8.ViewToWorld.M[1][0] =
           dStack_150 * dVar12 - dVar10 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      local_5b8.ViewToWorld.M[0][3] = 0.0;
      local_5b8.ViewToWorld.M[1][3] = 0.0;
      dVar11 = local_158 * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_5b8.ViewToWorld.M[1][1] =
           dVar10 * dStack_150 + (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar12;
      local_5b8.ViewToWorld.M[1][2] =
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar5,SUB84(dVar11,0) ^ uVar4);
      dVar12 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
               (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) + dStack_150 * dVar2;
      local_5b8.ViewToWorld.M[2][0] =
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar5,SUB84(dVar12,0) ^ uVar4);
      local_5b8.ViewToWorld.M[2][2] = dVar10 * local_158;
      local_5b8.ViewToWorld.M[2][1] =
           dStack_150 * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) -
           (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2;
      local_5b8.ViewToWorld.M[2][3] = 0.0;
      local_5b8.ViewToWorld.M[3][2] = local_5c0;
      local_5b8.ViewToWorld.M[3][3] = dVar3;
      local_5b8.ViewToWorld.M[3][0] = local_5d0;
      local_5b8.ViewToWorld.M[3][1] = dStack_5c8;
      FNiagaraCachedViewInfo::Init(param_2,&local_5b8);
      return true;
    }
  }
  return false;
}

// PrimePool @ 149461260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PrimePool(FNiagaraWorldManager *this,UNiagaraSystem *param_1)

{
  UWorld *this_00;
  UNiagaraComponentPool *this_01;
  bool bVar1;
  
  if (((((GNigaraAllowPrimedPools != 0) && (this_00 = this->World, this_00 != (UWorld *)0x0)) &&
       (this_00->bIsWorldInitialized != '\0')) &&
      ((this_00->bIsTearingDown == '\0' && (this->bIsTearingDown == false)))) &&
     (this->bIsCleaningUp == false)) {
    bVar1 = UWorld::IsGameWorld(this_00);
    if ((bVar1) &&
       (this_01 = (this->ComponentPool).field0_0x0.DebugPtr, this_01 != (UNiagaraComponentPool *)0x0
       )) {
      UNiagaraComponentPool::PrimePool(this_01,param_1,this->World);
    }
  }
  return;
}

// PrimePoolForAllSystems @ 1494612e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::PrimePoolForAllSystems(FNiagaraWorldManager *this)

{
  UWorld *this_00;
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraSystem> local_28;
  
  if (((((GNigaraAllowPrimedPools != 0) && (this_00 = this->World, this_00 != (UWorld *)0x0)) &&
       (this_00->bIsWorldInitialized != '\0')) &&
      ((this_00->bIsTearingDown == '\0' && (this->bIsTearingDown == false)))) &&
     (this->bIsCleaningUp == false)) {
    bVar2 = UWorld::IsGameWorld(this_00);
    if ((bVar2) && ((this->ComponentPool).field0_0x0.DebugPtr != (UNiagaraComponentPool *)0x0)) {
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UNiagaraSystem>::Advance(&local_28);
        lVar6 = (longlong)local_28.Index;
        if (local_28.Index < 0) break;
        if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (*(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) !=
            (UNiagaraSystem *)0x0) {
          UNiagaraComponentPool::PrimePool
                    ((this->ComponentPool).field0_0x0.DebugPtr,
                     *(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),
                     this->World);
        }
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PrimePoolForAllWorlds @ 149461440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::PrimePoolForAllWorlds(UNiagaraSystem *param_1)

{
  ulonglong uVar1;
  UWorld *this;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (GNigaraAllowPrimedPools != 0) {
    iVar11 = 0;
    iVar12 = 0;
    uVar5 = 1;
    uVar10 = WorldManagers._40_4_;
    uVar6 = 0;
    if (uVar10 != 0) {
      puVar13 = (uint *)&WorldManagers.field_0x10;
      if (WorldManagers._32_8_ != 0) {
        puVar13 = (uint *)WorldManagers._32_8_;
      }
      uVar6 = *puVar13;
      while (uVar6 == 0) {
        lVar7 = (longlong)iVar11;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar6 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14946150d;
        uVar6 = puVar13[lVar7 + 1];
      }
      uVar5 = -uVar6 & uVar6;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res18 = (int)lVar7;
      uVar6 = local_res18 + -1 + iVar12;
      if ((int)uVar10 < (int)uVar6) {
        uVar6 = uVar10;
      }
    }
LAB_14946150d:
    bVar3 = WorldManagers._40_1_;
    uVar9 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar5,iVar11);
    TStack_60.CurrentBitIndex = uVar6;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = uVar6;
    TStack_60.BaseBitIndex = iVar12;
    uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
    uVar6 = uVar10;
    if ((int)uVar10 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = WorldManagers._40_4_;
    }
    if (uVar10 != uVar6) {
      lVar7 = 0x154c84770;
      if (WorldManagers._32_8_ != 0) {
        lVar7 = WorldManagers._32_8_;
      }
      uVar10 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar11;
        uVar9 = uVar9 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_149461630;
        uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = (int)lVar7 + -1 + uVar9;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_149461630:
    while( true ) {
      if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar10) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
      break;
      lVar7 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if ((((lVar7 != 0) &&
           ((((GNigaraAllowPrimedPools != 0 &&
              (this = *(UWorld **)(lVar7 + 0x10), this != (UWorld *)0x0)) &&
             (this->bIsWorldInitialized != '\0')) &&
            ((this->bIsTearingDown == '\0' && (*(char *)(lVar7 + 0x1ff9) == '\0')))))) &&
          (*(char *)(lVar7 + 0x1ffa) == '\0')) &&
         ((bVar4 = UWorld::IsGameWorld(this), bVar4 &&
          (*(UNiagaraComponentPool **)(lVar7 + 0x1f20) != (UNiagaraComponentPool *)0x0)))) {
        UNiagaraComponentPool::PrimePool
                  (*(UNiagaraComponentPool **)(lVar7 + 0x1f20),param_1,*(UWorld **)(lVar7 + 0x10));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// RefreshOwnerAllowsScalability @ 149461a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::RefreshOwnerAllowsScalability(FNiagaraWorldManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar7;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManRefreshOwnerAllowsScalability> FVar13;
  UClass *pUVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  int local_res18;
  FName local_res20;
  TObjectIterator<UNiagaraComponent> local_108;
  FName local_f0;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_e0;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78 [4];
  undefined4 local_54;
  
  uVar17 = 0;
  FVar13 = StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability;
  if (StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManRefreshOwnerAllowsScalability>)0x0) {
    pFVar12 = ::FName::FName(local_78,"STAT_NiagaraWorldManRefreshOwnerAllowsScalability");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManRefreshOwnerAllowsScalability>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability,*pFVar12,
                        L"Niagara Manager Refresh Owner Allows Scalability","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar4 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar18 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar15.Value;
        local_res20.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x429);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar15.Value;
      uStackX_c = uVar18;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar5 = true;
      goto LAB_149461b4e;
    }
  }
  bVar5 = false;
  FVar16 = local_f0;
LAB_149461b4e:
  local_108.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectArray.ArrayNum = 0;
  local_108.ObjectArray.ArrayMax = 0;
  local_108.Index = 0xffffffff;
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar14 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  GetObjectsOfClass(pUVar14,&local_108.ObjectArray,true,RF_ClassDefaultObject,
                    EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraComponent>::Advance(&local_108);
    lVar20 = (longlong)local_108.Index;
    local_b8 = 0;
    if ((local_108.Index < 0) || (local_108.ObjectArray.ArrayNum <= local_108.Index)) break;
    if (local_108.Index < local_108.ObjectArray.ArrayNum) {
      local_b8 = (uint)~local_108.Index >> 0x1f;
    }
    if ((local_b8 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UNiagaraComponent::ResolveOwnerAllowsScalability
              (*(UNiagaraComponent **)(local_108.ObjectArray.AllocatorInstance.Data + lVar20 * 8),
               true);
  }
  if (local_108.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ObjectArray.AllocatorInstance.Data);
  }
  puVar1 = &(this->ScalabilityManagers).field_0x10;
  uStack_cc = 1;
  uVar18 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  local_e0 = &this->ScalabilityManagers;
  uStack_bc = local_b8;
  if (uVar18 != 0) {
    puVar22 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar11 = *puVar22;
    local_b8 = 0;
    uVar17 = 0;
    while (uVar11 == 0) {
      lVar20 = (longlong)(int)uVar17;
      local_b8 = local_b8 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_bc = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_149461c93;
      uVar11 = puVar22[lVar20 + 1];
    }
    uStack_cc = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_res18 = (int)lVar20;
    uStack_bc = local_res18 + -1 + local_b8;
    if ((int)uVar18 < (int)uStack_bc) {
      uStack_bc = uVar18;
    }
  }
LAB_149461c93:
  uStack_b4 = local_54;
  iStack_b0 = *(int *)&(this->ScalabilityManagers).field_0x8 -
              *(int *)&(this->ScalabilityManagers).field_0x34;
  uVar11 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uVar23 = uVar11 & 0xffffffe0;
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uVar17);
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar11 >> 5;
  TStack_a0._28_4_ = local_54;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = local_e0;
  uStack_d0 = uVar17;
  local_c8 = puVar1;
  local_a8 = local_e0;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || ((int)uVar18 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = local_e0;
  uVar17 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar11 != uVar17) {
    puVar21 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar20 = (longlong)iVar19;
      uVar23 = uVar23 + 0x20;
      iVar19 = iVar19 + 1;
      uVar11 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_149461da0;
      uVar18 = *(uint *)(puVar21 + lVar20 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar11 = (int)lVar20 + -1 + uVar23;
    if ((int)uVar17 < (int)uVar11) {
      uVar11 = uVar17;
    }
  }
LAB_149461da0:
  while( true ) {
    pTVar8 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar11) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    FNiagaraScalabilityManager::OnRefreshOwnerAllowsScalability
              ((FNiagaraScalabilityManager *)
               ((longlong)TStack_a0.CurrentBitIndex * 0xf8 + *(longlong *)pTVar8 + 8));
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// RegisterWithScalabilityManager @ 149461e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::RegisterWithScalabilityManager
          (FNiagaraWorldManager *this,UNiagaraComponent *param_1,UNiagaraEffectType *param_2)

{
  code *pcVar1;
  TObjectPtr<UNiagaraEffectType>_u_0 TVar2;
  bool bVar3;
  FNiagaraScalabilityManager *this_00;
  UNiagaraComponent *local_res10;
  TObjectPtr<UNiagaraEffectType>_u_0 local_res18;
  int local_res20;
  TObjectPtr<UNiagaraEffectType>_u_0 local_48;
  UNiagaraComponent **local_40;
  FNiagaraWorldManager *local_38;
  TObjectPtr<UNiagaraEffectType>_u_0 *local_30;
  FNiagaraWorldManager **local_28;
  
  if (ScalabilityCullingMode != Disabled) {
    local_res10 = param_1;
    local_res18.DebugPtr = param_2;
    if ((param_1 == (UNiagaraComponent *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Component",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                           ,0x7a6,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_res18.DebugPtr != (UNiagaraEffectType *)0x0) {
      local_48 = local_res18;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
      }
      this_00 = TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
                ::Find((TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
                        *)&this->ScalabilityManagers,
                       (TObjectPtr<UNiagaraEffectType_const_>)&local_48);
      if (this_00 == (FNiagaraScalabilityManager *)0x0) {
        if (this->bScalabilityManagersLocked != false) {
          local_40 = &local_res10;
          `FNiagaraWorldManager::RegisterWithScalabilityManager'::__l18::<lambda_1>::operator()
                    (&local_40);
        }
        local_30 = &local_res18;
        local_28 = &local_38;
        local_38 = this;
        TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UNiagaraEffectType_*_&,FNiagaraWorldManager_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
                    *)&this->ScalabilityManagers,
                   (TPairInitializer<UNiagaraEffectType_*_&,FNiagaraWorldManager_*_&&> *)
                   &local_res20,(bool *)&local_30);
        TVar2 = local_res18;
        this_00 = (FNiagaraScalabilityManager *)
                  (*(longlong *)&this->ScalabilityManagers + (longlong)local_res20 * 0xf8 + 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18.DebugPtr != (UNiagaraEffectType *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        }
        (this_00->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)TVar2;
      }
      FNiagaraScalabilityManager::Register(this_00,local_res10);
    }
  }
  return;
}

// RemoveDataChannel @ 149463840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::RemoveDataChannel(FNiagaraWorldManager *this,UNiagaraDataChannel *param_1)

{
  <lambda_1> local_res8;
  
  ForAllSystemSimulations<_FNiagaraWorldManager::WaitForAsyncWork_::__l2::<lambda_1>_>
            (this,local_res8);
  FNiagaraDataChannelManager::RemoveDataChannel((this->DataChannelManager).Ptr,param_1);
  return;
}

// RequestInvalidateCachedSystemScalabilityDataForAllWorlds @ 149463f00

void __cdecl FNiagaraWorldManager::RequestInvalidateCachedSystemScalabilityDataForAllWorlds(void)

{
  LOCK();
  bInvalidateCachedSystemScalabilityData = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// SetScalabilityCullingMode @ 149465820

void __cdecl FNiagaraWorldManager::SetScalabilityCullingMode(ENiagaraScalabilityCullingMode param_1)

{
  undefined1 local_res8;
  
  if (ScalabilityCullingMode != param_1) {
    FFXBudget::Reset();
    ScalabilityCullingMode = param_1;
    ForAllWorldManagers<_FNiagaraWorldManager::SetScalabilityCullingMode_::__l5::<lambda_1>_>
              (local_res8);
    return;
  }
  return;
}

// SetTickGroupPriority @ 1494684a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::SetTickGroupPriority(FNiagaraWorldManager *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FTickFunction *this_00;
  longlong lVar3;
  
  if (6 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NiagaraTickGroupIndex >= 0) && (NiagaraTickGroupIndex < NiagaraNumTickGroups)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0xa38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FTickFunction *)(this->TickFunctions + param_1);
  lVar3 = 2;
  do {
    FTickFunction::SetPriorityIncludingPrerequisites(this_00,param_2);
    this_00 = (FTickFunction *)&this_00[1].Prerequisites;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// ShouldPreCull @ 149468de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraWorldManager::ShouldPreCull
          (FNiagaraWorldManager *this,UNiagaraSystem *param_1,UNiagaraComponent *param_2)

{
  UNiagaraEffectType *pUVar1;
  FNiagaraSystemScalabilityKillCounts *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res20;
  UNiagaraSystem *local_28;
  FNiagaraScalabilityState local_20 [2];
  
  if ((ScalabilityCullingMode == Enabled) && (param_1 != (UNiagaraSystem *)0x0)) {
    pUVar1 = UNiagaraSystem::GetEffectType(param_1);
    if ((pUVar1 != (UNiagaraEffectType *)0x0) &&
       ((pUVar1->CullReaction == Deactivate || (pUVar1->CullReaction == DeactivateImmediate)))) {
      local_20[0].SystemDataIndex = -1;
      local_20[0].Significance = 1.0;
      local_20[0].LastVisibleTime = 0.0;
      INSERT(0,'\0',7,1);
      INSERT(local_20[0]._10_1_,'\0',6,1);
      INSERT(local_20[0]._10_1_,'\0',5,1);
      INSERT(local_20[0]._10_1_,'\0',4,1);
      INSERT(local_20[0]._10_1_,'\0',3,1);
      INSERT(local_20[0]._10_1_,'\0',2,1);
      INSERT(local_20[0]._10_1_,'\0',1,1);
      INSERT(local_20[0]._10_1_,'\x01',0,1);
      CalculateScalabilityState
                (this,param_1,param_1->CurrentScalabilitySettings,pUVar1,param_2,true,
                 FFXBudget::WorstAdjustedUsage,local_20);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_28 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
      pFVar2 = TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
               ::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
                         ((TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
                           *)&this->SystemScalabilityKillCounts,
                          local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                          (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_res20);
      bVar3 = ZPULL(local_20[0],2,1);
      if (bVar3 != false) {
        pFVar2->Total = pFVar2->Total + 1;
        pFVar2->Distance = pFVar2->Distance + ZPULL(local_20[0],4,1);
        pFVar2->InstanceCounts = pFVar2->InstanceCounts + ZPULL(local_20[0],5,1);
        pFVar2->Visibility = pFVar2->Visibility + ZPULL(local_20[0],6,1);
        pFVar2->GlobalBudget = pFVar2->GlobalBudget + ZPULL(local_20[0],7,1);
      }
      return bVar3;
    }
  }
  return false;
}

// ShouldPreCull @ 149468f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraWorldManager::ShouldPreCull
          (FNiagaraWorldManager *this,UNiagaraSystem *param_1,TVector<double> *param_2)

{
  UNiagaraEffectType *pUVar1;
  FNiagaraScalabilityState local_38;
  TVector<double>_u_0 local_28;
  
  if ((ScalabilityCullingMode == Enabled) && (param_1 != (UNiagaraSystem *)0x0)) {
    pUVar1 = UNiagaraSystem::GetEffectType(param_1);
    if ((pUVar1 != (UNiagaraEffectType *)0x0) &&
       ((pUVar1->CullReaction == Deactivate || (pUVar1->CullReaction == DeactivateImmediate)))) {
      local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_38.SystemDataIndex = -1;
      local_38.Significance = 1.0;
      local_38.LastVisibleTime = 0.0;
      local_38.bCulledByGlobalBudget = '\0';
      local_38.bCulledByVisibility = '\0';
      local_38.bCulledByInstanceCount = '\0';
      local_38.bCulledByDistance = '\0';
      local_38.bPreviousCulled = '\0';
      local_38.bCulled = '\0';
      local_38.bNewlyRegisteredDirty = '\0';
      local_38.bNewlyRegistered = '\x01';
      CalculateScalabilityState
                (this,param_1,param_1->CurrentScalabilitySettings,pUVar1,
                 (TVector<double> *)&local_28._s_0,true,FFXBudget::WorstAdjustedUsage,&local_38);
      return local_38.bCulled;
    }
  }
  return false;
}

// SortedSignificanceCull @ 149469050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::SortedSignificanceCull
          (FNiagaraWorldManager *this,UNiagaraEffectType *param_1,UNiagaraComponent *param_2,
          FNiagaraSystemScalabilitySettings *param_3,float param_4,int *param_5,ushort *param_6,
          FNiagaraScalabilityState *param_7)

{
  FNiagaraGlobalBudgetScaling *pFVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  UNiagaraSystem *pUVar5;
  FNiagaraSystemScalabilitySettings *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FNiagaraScalabilityState *pFVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  pFVar12 = param_7;
  bVar15 = 0;
  if ((ScalabilityCullingMode == Enabled) && (GEnableNiagaraInstanceCountCulling != 0)) {
    pUVar5 = (param_2->Asset).field0_0x0.DebugPtr;
    if ((pUVar5 == (UNiagaraSystem *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("System",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                            ,0x857,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar18 = FFXBudget::WorstAdjustedUsage;
    pFVar6 = pUVar5->CurrentScalabilitySettings;
    iVar4 = pFVar6->MaxInstances;
    iVar16 = pFVar6->MaxSystemInstances;
    if ((param_3->bCullMaxInstanceCount == 0) || (*param_5 < iVar4)) {
      bVar15 = 0;
    }
    else {
      bVar15 = 1;
    }
    if ((param_3->bCullPerSystemMaxInstanceCount == 0) || ((int)(uint)*param_6 < iVar16)) {
      bVar14 = 0;
    }
    else {
      bVar14 = 1;
    }
    bVar15 = bVar15 | bVar14;
    if (((GEnableNiagaraGlobalBudgetCulling == 0) || (FFXBudget::bEnabled == false)) ||
       (INiagaraModule::bUseGlobalFXBudget == false)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar15 == 0) {
      if (bVar13) {
        param_7._0_4_ = iVar4;
        if ((pFVar1->bScaleMaxInstanceCountByGlobalBudgetUse != 0) ||
           (pFVar1->bScaleSystemInstanceCountByGlobalBudgetUse != 0)) {
          if ((pFVar6->bCullMaxInstanceCount != 0) &&
             (pFVar1->bScaleMaxInstanceCountByGlobalBudgetUse != 0)) {
            fVar17 = FNiagaraLinearRamp::Evaluate
                               (&(pFVar6->BudgetScaling).MaxInstanceCountScaleByGlobalBudgetUse,
                                FFXBudget::WorstAdjustedUsage);
            param_7._0_4_ = (int)(fVar17 * (float)pFVar6->MaxInstances);
          }
          if ((pFVar6->bCullPerSystemMaxInstanceCount != 0) &&
             (pFVar1->bScaleSystemInstanceCountByGlobalBudgetUse != 0)) {
            fVar18 = FNiagaraLinearRamp::Evaluate
                               (&(pFVar6->BudgetScaling).
                                 MaxSystemInstanceCountScaleByGlobalBudgetUse,fVar18);
            iVar16 = (int)(fVar18 * (float)iVar16);
          }
        }
        if ((param_3->bCullMaxInstanceCount == 0) || (*param_5 < (int)param_7)) {
          bVar15 = 0;
        }
        else {
          bVar15 = 1;
        }
        if ((param_3->bCullPerSystemMaxInstanceCount == 0) || ((int)(uint)*param_6 < iVar16)) {
          bVar14 = 0;
        }
        else {
          bVar14 = 1;
        }
        bVar15 = bVar15 | bVar14;
        pFVar12->field_0xa = pFVar12->field_0xa | bVar15 << 7;
      }
    }
    else {
      param_7->bCulledByGlobalBudget = '\0';
    }
  }
  uVar3 = pFVar12->field_0xa;
  pFVar12->field_0xa = ((bVar15 << 2 | uVar3) ^ uVar3) & 4 ^ uVar3;
  if (bVar15 == 0 && pFVar12->bCulled == '\0') {
    *param_5 = *param_5 + 1;
    *param_6 = *param_6 + 1;
  }
  pFVar12->field_0xa = pFVar12->field_0xa ^ (bVar15 << 5 ^ pFVar12->field_0xa) & 0x20;
  return;
}

// Tick @ 149469e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::Tick
          (FNiagaraWorldManager *this,ENiagaraWorldManagerTickPass param_1,ETickingGroup param_2,
          float param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *pTVar10;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ETickingGroup EVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick> FVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar19;
  ETickingGroup EVar20;
  longlong lVar21;
  FNameEntryId FVar22;
  FName FVar23;
  ETickingGroup EVar24;
  int iVar25;
  FName FVar26;
  ETickingGroup EVar27;
  undefined1 *puVar28;
  uint *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  undefined1 local_156 [6];
  uint local_150;
  uint uStack_14c;
  FLLMScope local_148;
  FColor_u_0 local_144;
  FColor_u_0 local_140 [2];
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_118;
  int local_108;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *local_100;
  FMemScope local_f8;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *local_f0;
  ETickingGroup EStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  ETickingGroup EStack_d4;
  ETickingGroup local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName local_90;
  FName local_88 [4];
  undefined4 local_64;
  
  if ((TG_LastDemotable < param_2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TickGroup >= NiagaraFirstTickGroup && TickGroup <= NiagaraLastTickGroup",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                          ,0x625,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (__CsvProfilerStat1575 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1575 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(&local_148,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_f8,Niagara,true);
  EVar24 = TG_PrePhysics;
  FVar18 = StatPtr_STAT_NiagaraWorldManTick;
  if (StatPtr_STAT_NiagaraWorldManTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)0x0
     ) {
    pFVar17 = ::FName::FName(&local_90,"STAT_NiagaraWorldManTick");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTick,*pFVar17,
                        L"Niagara Manager Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar18;
  bVar14 = false;
  bVar9 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  bVar13 = false;
  bVar7 = false;
  FVar22 = FVar26.ComparisonIndex.Value;
  uVar31 = FVar26.Number;
  if ((FVar22.Value == 0) && (uVar31 == 0)) {
LAB_14946a074:
    bVar9 = bVar7;
    bVar14 = bVar13;
    bVar13 = false;
    FVar26 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_144.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_144._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar14 = false;
      bVar9 = true;
      bVar13 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar22.Value;
        local_138.Number = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x629);
        bVar14 = true;
        bVar9 = true;
        bVar13 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14946a074;
    local_150 = FVar22.Value;
    uStack_14c = uVar31;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar13 = true;
  }
  FVar19 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar17 = ::FName::FName(local_88,"STAT_NiagaraOverview_GT");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar17,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar19;
  bVar7 = false;
  bVar8 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar12 = false;
  bVar15 = false;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar31 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar31 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar12 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar22.Value;
        local_130.Number = uVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x62a);
        bVar7 = true;
        bVar8 = true;
        bVar12 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar22.Value;
      uStack_14c = uVar31;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar12 = true;
      goto LAB_14946a1a7;
    }
  }
  bVar8 = bVar15;
  bVar7 = bVar12;
  bVar12 = false;
  FVar23 = local_118;
LAB_14946a1a7:
  fVar33 = param_3 * this->DebugPlaybackRate;
  EVar27 = TG_PrePhysics;
  EVar20 = TG_LastDemotable;
  if ((int)param_2 < 6) {
    EVar20 = param_2;
  }
  EVar16 = EVar27;
  if (0 < (int)EVar20) {
    EVar16 = EVar20;
  }
  if ((param_1 == First) || ((this->TickFunctions[(int)EVar16][0]._padding_ & 0xc000000) == 0)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if ((param_1 == Last) ||
     (bVar6 = false, (this->TickFunctions[(int)EVar16][0]._padding_ & 0xc000000) == 0)) {
    bVar6 = true;
  }
  if (bVar15) {
    ExecutePreTickWork(this,param_2,fVar33);
  }
  if (this->DebugPlaybackMode != Paused) {
    if (bVar15) {
      if (__CsvProfilerStat1604 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("CoreSystems_NiagaraDIGeneratedData",_GCsvCategory_Particles.Index);
        __CsvProfilerStat1604 = true;
      }
      local_150 = _GCsvCategory_Particles.Index;
      FCsvProfiler::BeginStat
                ("CoreSystems_NiagaraDIGeneratedData",_GCsvCategory_Particles.Index,
                 "CSV_CoreSystems_NiagaraDIGeneratedData");
      local_e0 = &(this->DIGeneratedData).field_0x10;
      uStack_e4 = 1;
      EVar20 = *(ETickingGroup *)&(this->DIGeneratedData).field_0x28;
      local_100 = &this->DIGeneratedData;
      EStack_d4 = EVar27;
      if (EVar20 != TG_PrePhysics) {
        puVar29 = *(uint **)&(this->DIGeneratedData).field_0x20;
        if (puVar29 == (uint *)0x0) {
          puVar29 = (uint *)local_e0;
        }
        uVar31 = *puVar29;
        EVar27 = TG_PrePhysics;
        EVar24 = TG_PrePhysics;
        while (uVar31 == 0) {
          lVar21 = (longlong)(int)EVar24;
          EVar27 = EVar27 + 0x20;
          EVar24 = EVar24 + TG_StartPhysics;
          if ((int)((EVar20 - TG_StartPhysics) + ((int)(EVar20 - TG_StartPhysics) >> 0x1f & 0x1fU))
              >> 5 < (int)EVar24) goto LAB_14946a2f4;
          uVar31 = puVar29[lVar21 + 1];
        }
        uStack_e4 = -uVar31 & uVar31;
        uVar1 = (ulonglong)uStack_e4 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_108 = (int)lVar21;
        EStack_d4 = (EVar27 - TG_StartPhysics) + local_108;
        if ((int)EVar20 < (int)EStack_d4) {
LAB_14946a2f4:
          EStack_d4 = EVar20;
        }
      }
      puVar30 = &(this->DIGeneratedData).field_0x10;
      uStack_cc = local_64;
      iStack_c8 = *(int *)&(this->DIGeneratedData).field_0x8 -
                  *(int *)&(this->DIGeneratedData).field_0x34;
      uVar31 = *(uint *)&(this->DIGeneratedData).field_0x28;
      TStack_b8._padding_ = CONCAT44(uStack_e4,EVar24);
      uStack_d8 = 0xffffffff;
      uVar32 = uVar31 & 0xffffffe0;
      TStack_b8.CurrentBitIndex = EStack_d4;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar25 = (int)uVar31 >> 5;
      TStack_b8._28_4_ = local_64;
      TStack_b8.BaseBitIndex = EVar27;
      uStack_98 = CONCAT44(uStack_c4,iStack_c8);
      local_f0 = local_100;
      EStack_e8 = EVar24;
      local_d0 = EVar27;
      local_c0 = local_100;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
      if (((int)uVar31 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar10 = local_100;
      uVar2 = *(uint *)&(this->DIGeneratedData).field_0x28;
      if (uVar31 != uVar2) {
        puVar3 = *(undefined1 **)&(this->DIGeneratedData).field_0x20;
        puVar28 = puVar30;
        if (puVar3 != (undefined1 *)0x0) {
          puVar28 = puVar3;
        }
        uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar25 * 4);
        while (uVar31 == 0) {
          lVar21 = (longlong)iVar25;
          uVar32 = uVar32 + 0x20;
          iVar25 = iVar25 + 1;
          uVar31 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_14946a410;
          uVar31 = *(uint *)(puVar28 + lVar21 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar31 = (int)lVar21 + -1 + uVar32;
        if ((int)uVar2 < (int)uVar31) {
          uVar31 = uVar2;
        }
      }
LAB_14946a410:
      while( true ) {
        pTVar11 = local_c0;
        if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FNDI_GeneratedData,TDefaultDelete<FNDI_GeneratedData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_156);
        }
        if (((TStack_b8.CurrentBitIndex == uVar31) &&
            (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) &&
           (pTVar11 == pTVar10)) break;
        plVar4 = *(longlong **)
                  (*(longlong *)pTVar11 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
        (**(code **)(*plVar4 + 8))(plVar4,param_2,fVar33);
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
      FCsvProfiler::EndStat("CoreSystems_NiagaraDIGeneratedData",local_150);
    }
    ExecuteSimulations(this,param_1,param_2,fVar33,param_4);
    if (bVar6) {
      ExecutePostTickWork(this,param_2,fVar33);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_f8);
  FLLMScope::~FLLMScope(&local_148);
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// TickEnd @ 14946a570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::TickEnd(FNiagaraWorldManager *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick> FVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::TickEnd(float)_::_8_::FStat_STAT_NiagaraDebugHUD>
  FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName FVar16;
  uint uVar17;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  
  if (!__CsvProfilerStat1318) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1318 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Niagara,true);
  uVar17 = 0;
  FVar10 = StatPtr_STAT_NiagaraWorldManTick;
  if (StatPtr_STAT_NiagaraWorldManTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)0x0
     ) {
    pFVar9 = ::FName::FName((FName *)&local_78,"STAT_NiagaraWorldManTick");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTick,*pFVar9,
                        L"Niagara Manager Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar4 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar16.ComparisonIndex.Value;
  uVar8 = FVar16.Number;
  if ((FVar14.Value == 0) && (uVar8 == 0)) {
LAB_14946a70a:
    bVar5 = false;
    FVar16 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar14.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x528);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14946a70a;
    local_res18.s.LowPart = FVar14.Value;
    local_res18.s.HighPart = uVar8;
    local_58 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  FNiagaraSharedObject::FlushDeletionList();
  NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks();
  DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
            ((TSharedPtr<FNiagaraSystemInstance,1> *)
             (this->DeferredDeletionQueue).AllocatorInstance.Data,
             (this->DeferredDeletionQueue).ArrayNum);
  piVar1 = &(this->DeferredDeletionQueue).ArrayMax;
  (this->DeferredDeletionQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeferredDeletionQueue).AllocatorInstance,0,piVar1);
  }
  if ((this->NiagaraDebugHud).Ptr == (FNiagaraDebugHud *)0x0) goto LAB_14946a9f6;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NiagaraDebugHUD ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::TickEnd(float)_::_8_::FStat_STAT_NiagaraDebugHUD>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res18.s,"STAT_NiagaraDebugHUD");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraDebugHUD,*pFVar9,
                 L"STAT_NiagaraDebugHUD","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_NiagaraDebugHUD;
  if (StatPtr_STAT_NiagaraDebugHUD ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::TickEnd(float)_::_8_::FStat_STAT_NiagaraDebugHUD>
       )0x0) {
    pFVar9 = ::FName::FName((FName *)&local_78,"STAT_NiagaraDebugHUD");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FNiagaraWorldManager::TickEnd(float)_::_8_::FStat_STAT_NiagaraDebugHUD>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraDebugHUD,*pFVar9,
                          L"STAT_NiagaraDebugHUD","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar2 = false;
  bVar6 = false;
  local_68.StatData.Pad = (uchar  [8])0x0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar8 == 0)) {
LAB_14946a8c1:
    bVar3 = false;
    FVar15 = (FName)local_68.StatData;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar14.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x536);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14946a8c1;
    local_res18.s.LowPart = FVar14.Value;
    local_res18.s.HighPart = uVar8;
    local_68.StatData.Pad = (uchar  [8])FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar3 = true;
    uVar17 = local_68.StatData.Pad._0_4_;
  }
  if (__CsvProfilerStat1335 == false) {
    FCsvProfilerTrace::OutputInlineStat("CoreSystems_NiagaraDebugHUD",_GCsvCategory_Particles.Index)
    ;
    __CsvProfilerStat1335 = true;
  }
  uVar8 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraDebugHUD",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraDebugHUD");
  FNiagaraDebugHud::GatherSystemInfo((this->NiagaraDebugHud).Ptr);
  FCsvProfiler::EndStat("CoreSystems_NiagaraDebugHUD",uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = uVar17;
      QueryPerformanceCounter(&local_res18);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_78);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
LAB_14946a9f6:
  if (this->DebugPlaybackMode == Step) {
    this->RequestedDebugPlaybackMode = Paused;
    this->DebugPlaybackMode = Paused;
  }
  HandleCSVStats(this,param_1);
  FNiagaraDataChannelManager::EndFrame((this->DataChannelManager).Ptr,param_1);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_68.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad._4_4_ = 0;
      local_68.StatData.Pad._0_4_ = local_res18.s.LowPart;
      FThreadStats::AddStatMessage(pFVar12,&local_68);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// TickParameterCollections @ 14946abe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::TickParameterCollections(FNiagaraWorldManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UNiagaraParameterCollectionInstance *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *pTVar10;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *pTVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTickParamCollections> FVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar15;
  FNameEntryId FVar16;
  FName FVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  FName local_f8;
  FName local_f0;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  TMap<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58 [3];
  
  iVar19 = 0;
  FVar14 = StatPtr_STAT_NiagaraWorldManTickParamCollections;
  if (StatPtr_STAT_NiagaraWorldManTickParamCollections ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTickParamCollections>)0x0) {
    pFVar13 = ::FName::FName(local_58,"STAT_NiagaraWorldManTickParamCollections");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTickParamCollections>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraWorldManTickParamCollections,*pFVar13,
                        L"Niagara Manager Tick Parameter Collections [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar18 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar16.Value;
        local_f8.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x287);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar16.Value;
      uStackX_14 = uVar18;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_14946ad1c;
    }
  }
  bVar8 = false;
  FVar17 = local_f0;
LAB_14946ad1c:
  if (__CsvProfilerStat648 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraTickParameterCollections",_GCsvCategory_Particles.Index);
    __CsvProfilerStat648 = true;
  }
  local_res20 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraTickParameterCollections",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraTickParameterCollections");
  puVar2 = &(this->ParameterCollections).field_0x10;
  uStack_d4 = 1;
  iVar4 = *(int *)&(this->ParameterCollections).field_0x28;
  local_e0 = &this->ParameterCollections;
  iStack_c4 = iVar19;
  local_c0 = 0;
  if (iVar4 != 0) {
    puVar22 = *(uint **)&(this->ParameterCollections).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar18 = *puVar22;
    iVar19 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      local_c0 = local_c0 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_c4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14946aded;
      uVar18 = puVar22[lVar15 + 1];
    }
    uStack_d4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_b0 = (int)lVar15;
    iStack_c4 = local_b0 + -1 + local_c0;
    if (iVar4 < iStack_c4) {
      iStack_c4 = iVar4;
    }
  }
LAB_14946aded:
  iStack_b8 = *(int *)&(this->ParameterCollections).field_0x8 -
              *(int *)&(this->ParameterCollections).field_0x34;
  uVar18 = *(uint *)&(this->ParameterCollections).field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_d4,iVar19);
  uStack_c8 = 0xffffffff;
  uVar23 = uVar18 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_c4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar18 >> 5;
  TStack_80._28_4_ = iStack_c4;
  TStack_80.BaseBitIndex = local_c0;
  uStack_60 = CONCAT44(uStack_b4,iStack_b8);
  iStack_d8 = iVar19;
  local_d0 = puVar2;
  iStack_bc = iStack_c4;
  local_a8 = local_e0;
  local_88 = local_e0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = local_a8;
  uVar5 = *(uint *)&(this->ParameterCollections).field_0x28;
  if (uVar18 != uVar5) {
    puVar21 = *(undefined1 **)&(this->ParameterCollections).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar20;
      uVar23 = uVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14946af10;
      uVar18 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_ac = (int)lVar15;
    uVar18 = local_ac + -1 + uVar23;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14946af10:
  while( true ) {
    pTVar11 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res10 = local_res10 & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraParameterCollection>,TObjectPtr<UNiagaraParameterCollectionInstance>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar18) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar11 == pTVar10)
       ) break;
    this_00 = *(UNiagaraParameterCollectionInstance **)
               (*(longlong *)pTVar11 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    if ((this_00 == (UNiagaraParameterCollectionInstance *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CollectionInstPair.Value",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                            ,0x28d,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UNiagaraParameterCollectionInstance::Tick(this_00,this->World);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  FCsvProfiler::EndStat("CoreSystems_NiagaraTickParameterCollections",local_res20);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_98.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_98);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// TickStart @ 14946b090

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::TickStart(FNiagaraWorldManager *this,float param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<float> *paVar3;
  UWorld *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick> FVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar13;
  code **ppcVar14;
  FNameEntryId FVar15;
  FName FVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118;
  FLLMScope local_114;
  LARGE_INTEGER local_110;
  FName local_108;
  FName local_100;
  FMemScope local_f0;
  FStatMessage local_e8;
  FName local_d8 [2];
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (!__CsvProfilerStat1287) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1287 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(&local_114,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,Niagara,true);
  FVar11 = StatPtr_STAT_NiagaraWorldManTick;
  if (StatPtr_STAT_NiagaraWorldManTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)0x0
     ) {
    pFVar10 = ::FName::FName(local_d8,"STAT_NiagaraWorldManTick");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTick,*pFVar10,
                        L"Niagara Manager Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar15.Value;
        local_108.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x509);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110.s.LowPart = FVar15.Value;
      local_110.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_14946b248;
    }
  }
  bVar7 = false;
  FVar16 = local_100;
LAB_14946b248:
  if ((this->LastRenderThreadUpdateTime).Object == (atomic<float> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("LastRenderThreadUpdateTime.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x50f,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar18 = (float)this->World->TimeSeconds;
  if ((this->LastRenderThreadUpdateTime).Object == (atomic<float> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->RenderThreadWorldTimeLag = fVar18 - (float)*(this->LastRenderThreadUpdateTime).Object;
  pTVar2 = (this->LastRenderThreadUpdateTime).SharedReferenceCount.ReferenceController;
  paVar3 = (this->LastRenderThreadUpdateTime).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x20,8);
  *(float *)(local_a0 + 3) = fVar18;
  local_a0[1] = (code *)paVar3;
  *local_a0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_a0[2] = (code *)pTVar2;
  if (local_a0 != (code **)&DAT_fffffffffffffff8) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraWorldManager::TickStart_::__l2::TSTR_FNiagaraWorldManagerRTUpdateTime1298>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_98[0] = local_c8[0];
    local_70 = local_a0;
    local_a0 = (code **)0x0;
    local_88[0] = local_b8[0];
    local_88[1] = local_b8[1];
    local_88[2] = local_b8[2];
    local_c8[0] = (code *)0x0;
    local_68 = 2;
    pFVar12 = (FRenderCommandTag *)
              TRenderCommandTag<`FNiagaraWorldManager::TickStart'::__l2::TSTR_FNiagaraWorldManagerRTUpdateTime1298>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_98,pFVar12);
    uVar17 = (ulonglong)local_68;
    if (2 < uVar17) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_98[0] != (code *)0x0) {
        ppcVar14 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar14 = local_70;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])();
    }
  }
  if (local_c8[0] != (code *)0x0) {
    ppcVar14 = local_c8 + 2;
    if (local_a0 != (code **)0x0) {
      ppcVar14 = local_a0;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FNiagaraDataChannelManager::BeginFrame((this->DataChannelManager).Ptr,param_1);
  if ((((((this->ComponentLeakDetector).Ptr != (FNiagaraComponentLeakDetector *)0x0) &&
        (pUVar4 = this->World, pUVar4 != (UWorld *)0x0)) && (pUVar4->bIsWorldInitialized != '\0'))
      && ((pUVar4->bIsTearingDown == '\0' && (this->bIsTearingDown == false)))) &&
     (this->bIsCleaningUp == false)) {
    if (__CsvProfilerStat1310 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("CoreSystems_NiagaraLeakDetector",_GCsvCategory_Particles.Index);
      __CsvProfilerStat1310 = true;
    }
    uVar13 = _GCsvCategory_Particles.Index;
    FCsvProfiler::BeginStat
              ("CoreSystems_NiagaraLeakDetector",_GCsvCategory_Particles.Index,
               "CSV_CoreSystems_NiagaraLeakDetector");
    FNiagaraComponentLeakDetector::Tick((this->ComponentLeakDetector).Ptr,this->World);
    FCsvProfiler::EndStat("CoreSystems_NiagaraLeakDetector",uVar13);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_e8.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_e8.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_110);
      local_e8.StatData.Pad[4] = '\0';
      local_e8.StatData.Pad[5] = '\0';
      local_e8.StatData.Pad[6] = '\0';
      local_e8.StatData.Pad[7] = '\0';
      local_e8.StatData.Pad[0] = local_110.s.LowPart._0_1_;
      local_e8.StatData.Pad[1] = local_110.s.LowPart._1_1_;
      local_e8.StatData.Pad[2] = local_110.s.LowPart._2_1_;
      local_e8.StatData.Pad[3] = local_110.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_e8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(&local_114);
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}

// TickWorld @ 14946b800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::TickWorld(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FNiagaraWorldManager *this;
  
  this = Get(param_1);
  if (this != (FNiagaraWorldManager *)0x0) {
    PostActorTick(this,param_3);
  }
  return;
}

// TickWorldEnd @ 14946b840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::TickWorldEnd(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FNiagaraWorldManager *this;
  
  this = Get(param_1);
  if (this != (FNiagaraWorldManager *)0x0) {
    TickEnd(this,param_3);
  }
  return;
}

// TickWorldStart @ 14946b880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl FNiagaraWorldManager::TickWorldStart(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FNiagaraWorldManager *this;
  
  this = Get(param_1);
  if (this != (FNiagaraWorldManager *)0x0) {
    TickStart(this,param_3);
  }
  return;
}

// UnregisterWithScalabilityManager @ 14946ddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::UnregisterWithScalabilityManager
          (FNiagaraWorldManager *this,UNiagaraComponent *param_1,UNiagaraEffectType *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraScalabilityManager *this_00;
  UNiagaraEffectType *local_res10;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x7ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != (UNiagaraEffectType *)0x0) {
    local_res10 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    this_00 = TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
              ::Find((TMapBase<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
                      *)&this->ScalabilityManagers,
                     (TObjectPtr<UNiagaraEffectType_const_>)&local_res10);
    if (this_00 != (FNiagaraScalabilityManager *)0x0) {
      FNiagaraScalabilityManager::Unregister(this_00,param_1);
    }
  }
  return;
}

// UpdateScalabilityManagers @ 14946df50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::UpdateScalabilityManagers
          (FNiagaraWorldManager *this,float param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar12;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *pTVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UpdateScalabilityManagers> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar17;
  FNameEntryId FVar18;
  FName FVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint local_res20;
  uint uStackX_24;
  FColor_u_0 local_104;
  uint local_100;
  FName local_f8;
  FName local_f0;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  TMap<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName local_58 [4];
  
  iVar23 = 0;
  iVar21 = 0;
  FVar16 = StatPtr_STAT_UpdateScalabilityManagers;
  if (StatPtr_STAT_UpdateScalabilityManagers ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateScalabilityManagers>)0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_UpdateScalabilityManagers");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_UpdateScalabilityManagers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateScalabilityManagers,
                        *pFVar15,L"Niagara Manager Update Scalability Managers [GT]",
                        "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar20 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_104.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar18.Value;
        local_f8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                   ,0x787);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18.Value;
      uStackX_24 = uVar20;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar10 = true;
      goto LAB_14946e0a6;
    }
  }
  bVar10 = false;
  FVar19 = local_f0;
LAB_14946e0a6:
  if (__CsvProfilerStat1928 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("CoreSystems_NiagaraUpdateScalabilityManagers",_GCsvCategory_Particles.Index);
    __CsvProfilerStat1928 = true;
  }
  local_100 = _GCsvCategory_Particles.Index;
  FCsvProfiler::BeginStat
            ("CoreSystems_NiagaraUpdateScalabilityManagers",_GCsvCategory_Particles.Index,
             "CSV_CoreSystems_NiagaraUpdateScalabilityManagers");
  bVar4 = this->bScalabilityManagersLocked;
  puVar2 = &(this->ScalabilityManagers).field_0x10;
  this->bScalabilityManagersLocked = true;
  local_e0 = &this->ScalabilityManagers;
  iVar5 = *(int *)&(this->ScalabilityManagers).field_0x28;
  uStack_d4 = 1;
  iStack_c4 = 0;
  if (iVar5 != 0) {
    puVar25 = *(uint **)&(this->ScalabilityManagers).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uVar20 = *puVar25;
    iVar21 = 0;
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar21;
      iVar23 = iVar23 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_c4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14946e180;
      uVar20 = puVar25[lVar17 + 1];
    }
    uStack_d4 = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_d4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_b0 = (int)lVar17;
    iStack_c4 = local_b0 + -1 + iVar23;
    if (iVar5 < iStack_c4) {
      iStack_c4 = iVar5;
    }
  }
LAB_14946e180:
  TStack_80._padding_ = CONCAT44(uStack_d4,iVar21);
  iStack_b8 = *(int *)&(this->ScalabilityManagers).field_0x8 -
              *(int *)&(this->ScalabilityManagers).field_0x34;
  uVar20 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  uStack_c8 = 0xffffffff;
  uVar26 = uVar20 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_c4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar20 >> 5;
  TStack_80._28_4_ = iStack_c4;
  TStack_80.BaseBitIndex = iVar23;
  uStack_60 = CONCAT44(uStack_b4,iStack_b8);
  iStack_d8 = iVar21;
  local_d0 = puVar2;
  local_c0 = iVar23;
  iStack_bc = iStack_c4;
  local_a8 = local_e0;
  local_88 = local_e0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar12 = local_a8;
  uVar6 = *(uint *)&(this->ScalabilityManagers).field_0x28;
  if (uVar20 != uVar6) {
    puVar24 = *(undefined1 **)&(this->ScalabilityManagers).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar22 * 4);
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar22;
      uVar26 = uVar26 + 0x20;
      iVar22 = iVar22 + 1;
      uVar20 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14946e2a0;
      uVar20 = *(uint *)(puVar24 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_ac = (int)lVar17;
    uVar20 = local_ac + -1 + uVar26;
    if ((int)uVar6 < (int)uVar20) {
      uVar20 = uVar6;
    }
  }
LAB_14946e2a0:
  while( true ) {
    pTVar13 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res20 = local_res20 & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    lVar17 = (longlong)TStack_80.CurrentBitIndex;
    if (((TStack_80.CurrentBitIndex == uVar20) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar13 == pTVar12)
       ) break;
    lVar7 = *(longlong *)pTVar13;
    if ((*(longlong *)(lVar17 * 0xf8 + lVar7) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("EffectType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                            ,0x792,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FNiagaraScalabilityManager::Update
              ((FNiagaraScalabilityManager *)(lVar17 * 0xf8 + lVar7 + 8),param_1,param_2);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  this->bScalabilityManagersLocked = bVar4;
  FCsvProfiler::EndStat("CoreSystems_NiagaraUpdateScalabilityManagers",local_100);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ViewBasedCulling @ 14946e7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::ViewBasedCulling
          (FNiagaraWorldManager *this,UNiagaraEffectType *param_1,
          FNiagaraSystemScalabilitySettings *param_2,TSphere<double> *param_3,float param_4,
          bool param_5,FNiagaraScalabilityState *param_6)

{
  FNiagaraSystemVisibilityCullingSettings *pFVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  ForElementType<FNiagaraCachedViewInfo> FVar8;
  int *piVar9;
  double *pdVar10;
  int *piVar11;
  byte bVar12;
  ulonglong uVar13;
  ForElementType<FNiagaraCachedViewInfo> FVar14;
  byte bVar15;
  float fVar16;
  double dVar17;
  undefined1 local_78 [4];
  uint local_74;
  TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_70;
  ForElementType<FNiagaraCachedViewInfo> local_68;
  
  dVar7 = __real_3f1a36e2e0000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (ScalabilityCullingMode == Enabled) {
    bVar15 = ~(param_2->VisibilityCulling).bCullByViewFrustum & 1;
    if ((param_2->VisibilityCulling).bCullByViewFrustum != 0) {
      FVar14 = (this->CachedViewInfo).AllocatorInstance.SecondaryData;
      local_70 = &this->CachedViewInfo;
      local_74 = (this->CachedViewInfo).ArrayNum;
      uVar13 = (ulonglong)(int)local_74;
      if (FVar14 == (ForElementType<FNiagaraCachedViewInfo>)0x0) {
        FVar14 = (ForElementType<FNiagaraCachedViewInfo>)local_70;
      }
      piVar11 = (int *)((longlong)FVar14 + 0x2d0);
      local_68 = (ForElementType<FNiagaraCachedViewInfo>)(uVar13 * 0x2e0 + (longlong)FVar14);
      while( true ) {
        FVar8 = local_68;
        if (local_70->ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<FNiagaraCachedViewInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_78);
        }
        if (FVar14 == FVar8) break;
        if (bVar15 == 0) {
          piVar9 = *(int **)(piVar11 + -4);
          iVar3 = *piVar11;
          if (piVar9 == (int *)0x0) {
            piVar9 = piVar11 + -0x34;
          }
          pdVar10 = (double *)(piVar9 + 4);
          while( true ) {
            if (*piVar11 != iVar3) {
              `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_78);
            }
            if (pdVar10 + -2 == (double *)(piVar9 + (longlong)iVar3 * 8)) goto LAB_14946e96a;
            dVar17 = pdVar10[-2];
            if ((((dVar7 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar6,
                                            SUB84(dVar17,0) & uVar5)) ||
                 (dVar7 < (double)CONCAT44((uint)((ulonglong)pdVar10[-1] >> 0x20) & uVar6,
                                           SUB84(pdVar10[-1],0) & uVar5))) ||
                (dVar7 < (double)CONCAT44((uint)((ulonglong)*pdVar10 >> 0x20) & uVar6,
                                          SUB84(*pdVar10,0) & uVar5))) &&
               (dVar17 = (pdVar10[-1] * (param_3->Center).field0_0x0._s_0.Y +
                          dVar17 * (param_3->Center).field0_0x0._s_0.X +
                         (param_3->Center).field0_0x0._s_0.Z * *pdVar10) - pdVar10[1],
               param_3->W <= dVar17 && dVar17 != param_3->W)) break;
            pdVar10 = pdVar10 + 4;
          }
        }
        else {
LAB_14946e96a:
          bVar15 = 1;
        }
        FVar14 = (ForElementType<FNiagaraCachedViewInfo>)((longlong)FVar14 + 0x2e0);
        uVar13 = (ulonglong)local_74;
        piVar11 = piVar11 + 0xb8;
      }
      bVar15 = bVar15 | (this->CachedViewInfo).ArrayNum == 0;
    }
    fVar16 = 0.0;
    if (bVar15 == 0) {
      fVar16 = (float)(this->World->TimeSeconds - (double)param_6->LastVisibleTime);
    }
    else {
      param_6->LastVisibleTime = (float)this->World->TimeSeconds;
    }
    if (((pFVar1->bCullByViewFrustum == 0) ||
        ((param_5 && (pFVar1->bAllowPreCullingByViewFrustum == 0)))) ||
       (pfVar2 = &(param_2->VisibilityCulling).MaxTimeOutsideViewFrustum,
       fVar16 < *pfVar2 || fVar16 == *pfVar2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((this->bAppHasFocus != false) && (pFVar1->bCullWhenNotRendered != 0)) &&
        (pfVar2 = &(param_2->VisibilityCulling).MaxTimeWithoutRender,
        *pfVar2 <= param_4 && param_4 != *pfVar2)) || (bVar4)) {
      bVar15 = 4;
      bVar12 = 0x40;
    }
    else {
      bVar15 = 0;
      bVar12 = 0;
    }
    param_6->field_0xa = (param_6->field_0xa & 4 | bVar15) ^ param_6->field_0xa & 0xbb | bVar12;
  }
  return;
}

// WaitForAsyncWork @ 14946eaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraWorldManager::WaitForAsyncWork(FNiagaraWorldManager *this)

{
  undefined1 local_res10;
  
  ForAllSystemSimulations<_FNiagaraWorldManager::WaitForAsyncWork_::__l2::<lambda_1>_>
            (this,local_res10);
  return;
}

// operator() @ 1505426d0

bool __thiscall
`FNiagaraWorldManager::RegisterWithScalabilityManager'::__l18::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4138563643849574318>);
  if (bVar5) {
    if ((**(longlong **)this == 0) ||
       (lVar1 = *(longlong *)(**(longlong **)this + 0x550), lVar1 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar4 = true;
    bVar3 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4138563643849574318>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1505427d1;
    }
  }
  bVar5 = false;
LAB_1505427d1:
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150542860

bool __thiscall `FNiagaraWorldManager::GetLODDistance'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4138563643849574234>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4138563643849574234>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

