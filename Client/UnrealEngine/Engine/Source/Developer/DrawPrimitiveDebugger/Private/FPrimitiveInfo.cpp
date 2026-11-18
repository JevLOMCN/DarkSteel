// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 6

// operator< @ 146d068d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FViewDebugInfo::FPrimitiveInfo::operator<(FPrimitiveInfo *this,FPrimitiveInfo *param_1)

{
  int iVar1;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  _Str1 = L"";
  if ((param_1->Name).Data.ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  if ((this->Name).Data.ArrayNum != 0) {
    _Str1 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,_Str2);
  if (iVar1 != 0) {
    return SUB41((uint)iVar1 >> 0x1f,0);
  }
  return this->PrimitiveSceneInfo < param_1->PrimitiveSceneInfo;
}

// GetCurrentLOD @ 146d1e0e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveLODStats * __thiscall
FViewDebugInfo::FPrimitiveInfo::GetCurrentLOD(FPrimitiveInfo *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveLODStats *pFVar4;
  uint uVar5;
  
  uVar3 = ComputeCurrentLODIndex(this,param_1,param_2);
  if ((((int)uVar3 < 0) || ((this->Stats).LODStats.ArrayNum <= (int)uVar3)) &&
     ((uVar3 = this->LODAtLastCapture, (int)uVar3 < 0 ||
      ((this->Stats).LODStats.ArrayNum <= (int)uVar3)))) {
    return (FPrimitiveLODStats *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Stats).LODStats.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPrimitiveLODStats *)(*pcVar1)();
    return pFVar4;
  }
  return (FPrimitiveLODStats *)
         ((this->Stats).LODStats.AllocatorInstance.Data + (ulonglong)uVar3 * 0x28);
}

// GetMaterial @ 146d1e840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMaterialInterface * __thiscall
FViewDebugInfo::FPrimitiveInfo::GetMaterial(FPrimitiveInfo *this,ushort param_1)

{
  UMaterialInterface *pUVar1;
  
  if ((int)(uint)param_1 < (this->Materials).ArrayNum) {
    pUVar1 = (UMaterialInterface *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this->Materials).AllocatorInstance.Data + (ulonglong)param_1 * 8)
                                );
    return pUVar1;
  }
  return (UMaterialInterface *)0x0;
}

// GetNumLODs @ 146d1e8d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall FViewDebugInfo::FPrimitiveInfo::GetNumLODs(FPrimitiveInfo *this)

{
  return (this->Stats).LODStats.ArrayNum;
}

// GetOwnerName @ 146d1f170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FViewDebugInfo::FPrimitiveInfo::GetOwnerName(FPrimitiveInfo *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)pUVar2 + 0x6f0))(pUVar2,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  (**(code **)((longlong)*this->ComponentInterface + 0xb0))
            (this->ComponentInterface,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrimitiveLocation @ 146d1f440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FViewDebugInfo::FPrimitiveInfo::GetPrimitiveLocation
          (FPrimitiveInfo *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)((longlong)*this->ComponentInterface + 0x70))
                    (this->ComponentInterface,local_78);
  dVar2 = *(double *)(lVar3 + 0x28);
  dVar1 = *(double *)(lVar3 + 0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(lVar3 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

