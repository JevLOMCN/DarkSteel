// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FDevSystemGuids @ 141a6bb30

FDevSystemGuids * __thiscall FDevSystemGuids::FDevSystemGuids(FDevSystemGuids *this)

{
  (this->GLOBALSHADERMAP_DERIVEDDATA_VER).A = 0x7bb10a3c;
  (this->GLOBALSHADERMAP_DERIVEDDATA_VER).B = 0xac4e46f3;
  (this->GLOBALSHADERMAP_DERIVEDDATA_VER).C = 0xac78f4c1;
  (this->GLOBALSHADERMAP_DERIVEDDATA_VER).D = 0xefb3e34f;
  (this->GROOM_BINDING_DERIVED_DATA_VERSION).A = 0x30769e53;
  (this->GROOM_BINDING_DERIVED_DATA_VERSION).B = 0xc574c7b;
  (this->GROOM_BINDING_DERIVED_DATA_VERSION).C = 0xa15c56f2;
  (this->GROOM_BINDING_DERIVED_DATA_VERSION).D = 0x24a64e32;
  (this->GROOM_DERIVED_DATA_VERSION).A = 0x8d2064fa;
  (this->GROOM_DERIVED_DATA_VERSION).B = 0x4edf4db7;
  (this->GROOM_DERIVED_DATA_VERSION).C = 0x99b33838;
  (this->GROOM_DERIVED_DATA_VERSION).D = 0xa79a8b79;
  (this->LANDSCAPE_MOBILE_COOK_VERSION).A = 0xe9adf72;
  (this->LANDSCAPE_MOBILE_COOK_VERSION).B = 0xd6b64e0d;
  (this->LANDSCAPE_MOBILE_COOK_VERSION).C = 0x81c4a92b;
  (this->LANDSCAPE_MOBILE_COOK_VERSION).D = 0x81a37ab;
  (this->MATERIALSHADERMAP_DERIVEDDATA_VER).A = 0x5421f350;
  (this->MATERIALSHADERMAP_DERIVEDDATA_VER).B = 0xa448491b;
  (this->MATERIALSHADERMAP_DERIVEDDATA_VER).C = 0x95422d86;
  (this->MATERIALSHADERMAP_DERIVEDDATA_VER).D = 0xb105837c;
  (this->NANITE_DERIVEDDATA_VER).A = 0xbeb0226a;
  (this->NANITE_DERIVEDDATA_VER).B = 0x70e4eca;
  (this->NANITE_DERIVEDDATA_VER).C = 0x972c1e7d;
  (this->NANITE_DERIVEDDATA_VER).D = 0xd8599e68;
  (this->NIAGARASHADERMAP_DERIVEDDATA_VER).A = 0x7bbd9913;
  (this->NIAGARASHADERMAP_DERIVEDDATA_VER).B = 0xc1554d20;
  (this->NIAGARASHADERMAP_DERIVEDDATA_VER).C = 0xadae9f17;
  (this->NIAGARASHADERMAP_DERIVEDDATA_VER).D = 0xb006299e;
  (this->Niagara_LatestScriptCompileVersion).A = 0x6d32b8ee;
  (this->Niagara_LatestScriptCompileVersion).B = 0x909fca7e;
  (this->Niagara_LatestScriptCompileVersion).C = 0xa5ce4f17;
  (this->Niagara_LatestScriptCompileVersion).D = 0x66a5f25;
  (this->POSESEARCHDB_DERIVEDDATA_VER).A = 0x389117e4;
  (this->POSESEARCHDB_DERIVEDDATA_VER).B = 0x807a4cc0;
  (this->POSESEARCHDB_DERIVEDDATA_VER).C = 0x9f37c2e6;
  (this->POSESEARCHDB_DERIVEDDATA_VER).D = 0xd808a78d;
  (this->SkeletalMeshDerivedDataVersion).A = 0x9b5f4544;
  (this->SkeletalMeshDerivedDataVersion).B = 0x76d7481c;
  (this->SkeletalMeshDerivedDataVersion).C = 0x9ad3f614;
  (this->SkeletalMeshDerivedDataVersion).D = 0xa6c07904;
  (this->STATICMESH_DERIVEDDATA_VER).A = 0x2c6c400c;
  (this->STATICMESH_DERIVEDDATA_VER).B = 0x2edf47b3;
  (this->STATICMESH_DERIVEDDATA_VER).C = 0x9bd36689;
  (this->STATICMESH_DERIVEDDATA_VER).D = 0x7b77b208;
  (this->MaterialTranslationDDCVersion).A = 0x628d9afc;
  (this->MaterialTranslationDDCVersion).B = 0xc10245c5;
  (this->MaterialTranslationDDCVersion).C = 0x86967652;
  (this->MaterialTranslationDDCVersion).D = 0xad52e887;
  return this;
}

// Get @ 141a804a0

FDevSystemGuids * __cdecl FDevSystemGuids::Get(void)

{
  return &Guids;
}

// GetSystemGuid @ 141a813b0

FGuid * __cdecl FDevSystemGuids::GetSystemGuid(FGuid *__return_storage_ptr__,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FDevSystemGuidRegistry *lpCriticalSection;
  ulong64 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int local_res10 [2];
  uint *local_res18;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  lpCriticalSection = GetSystemGuidRegistry();
  local_28 = param_1->A;
  uStack_24 = param_1->B;
  uStack_20 = param_1->C;
  uStack_1c = param_1->D;
  if (lpCriticalSection == (FDevSystemGuidRegistry *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = CityHash64((char *)&local_28,0x10);
  if (*(int *)&(lpCriticalSection->RegisteredSystemGuids).field_0x8 !=
      *(int *)&(lpCriticalSection->RegisteredSystemGuids).field_0x34) {
    puVar6 = *(undefined1 **)&(lpCriticalSection->RegisteredSystemGuids).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(lpCriticalSection->RegisteredSystemGuids).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + ((ulonglong)
                                (*(int *)&(lpCriticalSection->RegisteredSystemGuids).field_0x48 - 1)
                               & uVar4 & 0xffffffff) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x2c +
                         *(longlong *)&lpCriticalSection->RegisteredSystemGuids);
        if (((uStack_1c == puVar5[3] && uStack_20 == puVar5[2]) && uStack_24 == puVar5[1]) &&
            local_28 == *puVar5) {
          if (puVar5 != (uint *)0x0) goto LAB_141a814ac;
          break;
        }
        uVar3 = puVar5[9];
      } while (uVar3 != 0xffffffff);
    }
  }
  local_res18 = &local_28;
  TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            ((TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
              *)&lpCriticalSection->RegisteredSystemGuids,(uint)local_res10,
             (TKeyInitializer<FGuid_const_&> *)(uVar4 & 0xffffffff),(bool *)&local_res18);
  puVar5 = (uint *)((longlong)local_res10[0] * 0x2c +
                   *(longlong *)&lpCriticalSection->RegisteredSystemGuids);
LAB_141a814ac:
  uVar3 = puVar5[5];
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  *(undefined1 *)(puVar5 + 8) = 1;
  __return_storage_ptr__->A = puVar5[4];
  __return_storage_ptr__->B = uVar3;
  __return_storage_ptr__->C = uVar1;
  __return_storage_ptr__->D = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

