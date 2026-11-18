// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 12

// StaticClass @ 14da494c0

UClass * __cdecl UDynamicWindSkeletalData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSkeletalData",
               &Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton,
               StaticRegisterNativesUDynamicWindSkeletalData,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicWindSkeletalData>,
               InternalVTableHelperCtorCaller<UDynamicWindSkeletalData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton;
}

// UDynamicWindSkeletalData @ 14da4d2c0

UDynamicWindSkeletalData * __thiscall
UDynamicWindSkeletalData::UDynamicWindSkeletalData
          (UDynamicWindSkeletalData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->bIsEnabled = false;
  this->bIsGroundCover = false;
  this->_padding_ = (longlong)&___7UDynamicWindSkeletalData__6B_;
  (this->SimulationGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroups).ArrayNum = 0;
  (this->SimulationGroups).ArrayMax = 0;
  (this->SimulationGroupBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroupBones).ArrayNum = 0;
  (this->SimulationGroupBones).ArrayMax = 0;
  *(undefined8 *)&this->BoneChains = 0;
  *(undefined8 *)&(this->BoneChains).field_0x8 = 0;
  *(undefined8 *)&(this->BoneChains).field_0x20 = 0;
  this->GustAttenuation = 0.0;
  *(undefined4 *)&(this->BoneChains).field_0x28 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneChains).field_0x34 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneChains).field_0x40 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x48 = 0;
  *(undefined8 *)&this->ExtraBonesData = 0;
  *(undefined8 *)&(this->ExtraBonesData).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraBonesData).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraBonesData).field_0x34 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExtraBonesData).field_0x40 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x48 = 0;
  this->SkeletalDataHash = 0;
  return this;
}

// UDynamicWindSkeletalData @ 14da4d380

UDynamicWindSkeletalData * __thiscall
UDynamicWindSkeletalData::UDynamicWindSkeletalData
          (UDynamicWindSkeletalData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->bIsEnabled = false;
  this->bIsGroundCover = false;
  this->_padding_ = (longlong)&___7UDynamicWindSkeletalData__6B_;
  (this->SimulationGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroups).ArrayNum = 0;
  (this->SimulationGroups).ArrayMax = 0;
  (this->SimulationGroupBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroupBones).ArrayNum = 0;
  (this->SimulationGroupBones).ArrayMax = 0;
  *(undefined8 *)&this->BoneChains = 0;
  *(undefined8 *)&(this->BoneChains).field_0x8 = 0;
  *(undefined8 *)&(this->BoneChains).field_0x20 = 0;
  this->GustAttenuation = 0.0;
  *(undefined4 *)&(this->BoneChains).field_0x28 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneChains).field_0x34 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoneChains).field_0x40 = 0;
  *(undefined4 *)&(this->BoneChains).field_0x48 = 0;
  *(undefined8 *)&this->ExtraBonesData = 0;
  *(undefined8 *)&(this->ExtraBonesData).field_0x8 = 0;
  *(undefined8 *)&(this->ExtraBonesData).field_0x20 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x28 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtraBonesData).field_0x34 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExtraBonesData).field_0x40 = 0;
  *(undefined4 *)&(this->ExtraBonesData).field_0x48 = 0;
  this->SkeletalDataHash = 0;
  return this;
}

// ~UDynamicWindSkeletalData @ 14da4d8b0

void __thiscall UDynamicWindSkeletalData::~UDynamicWindSkeletalData(UDynamicWindSkeletalData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDynamicWindSkeletalData__6B_;
  *(undefined4 *)&(this->ExtraBonesData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExtraBonesData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindExtraBoneData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtraBonesData);
  *(undefined4 *)&(this->BoneChains).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneChains).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDynamicWindBoneChainData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneChains);
  DestructItems<FDynamicWindSimulationGroupBoneLookup,int>
            ((FDynamicWindSimulationGroupBoneLookup *)
             (this->SimulationGroupBones).AllocatorInstance.Data,
             (this->SimulationGroupBones).ArrayNum);
  pFVar2 = (this->SimulationGroupBones).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SimulationGroups).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetBoneChainLength @ 14da4fdd0

float __thiscall
UDynamicWindSkeletalData::GetBoneChainLength(UDynamicWindSkeletalData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ExtraBonesData).field_0x8 != *(int *)&(this->ExtraBonesData).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ExtraBonesData).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ExtraBonesData).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ExtraBonesData).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ExtraBonesData + (longlong)iVar2 * 0x14;
        if (*(int *)(*(longlong *)&this->ExtraBonesData + (longlong)iVar2 * 0x14) == param_1) {
          puVar3 = (uint *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return 0.0;
          }
          if (*(int *)&(this->BoneChains).field_0x8 == *(int *)&(this->BoneChains).field_0x34) {
            return 0.0;
          }
          puVar4 = *(undefined1 **)&(this->BoneChains).field_0x40;
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &(this->BoneChains).field_0x38;
          }
          iVar2 = *(int *)(puVar4 + (ulonglong)
                                    (*(int *)&(this->BoneChains).field_0x48 - 1U & *puVar3) * 4);
          if (iVar2 == -1) {
            return 0.0;
          }
          while (lVar1 = *(longlong *)&this->BoneChains + (longlong)iVar2 * 0x14,
                *(uint *)(*(longlong *)&this->BoneChains + (longlong)iVar2 * 0x14) != *puVar3) {
            iVar2 = *(int *)(lVar1 + 0xc);
            if (iVar2 == -1) {
              return 0.0;
            }
          }
          puVar3 = (uint *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return 0.0;
          }
          return (float)puVar3[1];
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetBoneInfluence @ 14da4fed0

float __thiscall
UDynamicWindSkeletalData::GetBoneInfluence(UDynamicWindSkeletalData *this,int param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)&(this->ExtraBonesData).field_0x8 != *(int *)&(this->ExtraBonesData).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ExtraBonesData).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ExtraBonesData).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->ExtraBonesData).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar5 != -1) {
      do {
        lVar10 = *(longlong *)&this->ExtraBonesData + (longlong)iVar5 * 0x14;
        if (*(int *)(*(longlong *)&this->ExtraBonesData + (longlong)iVar5 * 0x14) == param_1) {
          puVar11 = (uint *)(lVar10 + 4);
          if (lVar10 == 0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 == (uint *)0x0) {
            return 0.0;
          }
          uVar6 = GetBoneSimulationGroupIndex(this,param_1);
          lVar10 = (longlong)(int)uVar6;
          if ((int)uVar6 < 0) {
            return __real_3f800000;
          }
          if ((this->SimulationGroups).ArrayNum <= (int)uVar6) {
            return __real_3f800000;
          }
          uVar7 = 0;
          if ((int)uVar6 < (this->SimulationGroups).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            fVar12 = (float)(*pcVar3)();
            return fVar12;
          }
          pFVar2 = (this->SimulationGroups).AllocatorInstance.Data;
          if (pFVar2[lVar10 * 0x18] == (FScriptContainerElement)0x0) {
            return *(float *)(pFVar2 + lVar10 * 0x18 + 4);
          }
          fVar12 = 0.0;
          if (*(int *)&(this->BoneChains).field_0x8 == *(int *)&(this->BoneChains).field_0x34)
          goto LAB_14da500c6;
          puVar9 = *(undefined1 **)&(this->BoneChains).field_0x40;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &(this->BoneChains).field_0x38;
          }
          iVar5 = *(int *)(puVar9 + (ulonglong)
                                    (*(int *)&(this->BoneChains).field_0x48 - 1U & *puVar11) * 4);
          if (iVar5 == -1) goto LAB_14da500c6;
          goto LAB_14da50050;
        }
        iVar5 = *(int *)(lVar10 + 0xc);
      } while (iVar5 != -1);
    }
  }
  return 0.0;
  while (iVar5 = *(int *)(lVar1 + 0xc), iVar5 != -1) {
LAB_14da50050:
    lVar1 = *(longlong *)&this->BoneChains + (longlong)iVar5 * 0x14;
    if (*(uint *)(*(longlong *)&this->BoneChains + (longlong)iVar5 * 0x14) == *puVar11) {
      puVar8 = (uint *)(lVar1 + 4);
      if (lVar1 == 0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) {
        if (1 < *puVar8) {
          fVar12 = (float)(int)puVar11[1] / ((float)*puVar8 - __real_3f800000);
        }
        fVar13 = *(float *)(pFVar2 + lVar10 * 0x18 + 0x10);
        if (__real_3f7d70a4 <= *(float *)(pFVar2 + lVar10 * 0x18 + 0x10)) {
          fVar13 = __real_3f7d70a4;
        }
        fVar12 = powf(fVar12,__real_3f800000 / (__real_3f800000 - fVar13));
      }
      break;
    }
  }
LAB_14da500c6:
  return (*(float *)(pFVar2 + lVar10 * 0x18 + 0xc) - *(float *)(pFVar2 + lVar10 * 0x18 + 8)) *
         fVar12 + *(float *)(pFVar2 + lVar10 * 0x18 + 8);
}

// GetBoneSimulationGroupIndex @ 14da50100

int __thiscall
UDynamicWindSkeletalData::GetBoneSimulationGroupIndex(UDynamicWindSkeletalData *this,int param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->SimulationGroupBones).AllocatorInstance.Data;
  iVar1 = (this->SimulationGroupBones).ArrayNum;
  pFVar4 = pFVar5 + 0x3c;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->SimulationGroupBones).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDynamicWindSimulationGroupBoneLookup_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(int *)(pFVar4 + -0x2c) != *(int *)pFVar4) {
      pFVar3 = *(FScriptContainerElement **)(pFVar4 + 0xc);
      if (*(FScriptContainerElement **)(pFVar4 + 0xc) == (FScriptContainerElement *)0x0) {
        pFVar3 = pFVar4 + 4;
      }
      iVar2 = *(int *)(pFVar3 + (ulonglong)(*(int *)(pFVar4 + 0x14) - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(int *)(*(longlong *)(pFVar4 + -0x34) + (longlong)iVar2 * 0xc) == param_1) {
            return *(int *)pFVar5;
          }
          iVar2 = *(int *)(*(longlong *)(pFVar4 + -0x34) + 4 + (longlong)iVar2 * 0xc);
        } while (iVar2 != -1);
      }
    }
    pFVar5 = pFVar5 + 0x58;
    pFVar4 = pFVar4 + 0x58;
  }
  return -1;
}

// GetPrivateStaticClass @ 14da50300

UClass * __cdecl UDynamicWindSkeletalData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DynamicWind",L"DynamicWindSkeletalData",
               &Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton,
               StaticRegisterNativesUDynamicWindSkeletalData,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicWindSkeletalData>,
               InternalVTableHelperCtorCaller<UDynamicWindSkeletalData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicWindSkeletalData.InnerSingleton;
}

// IsTrunkBone @ 14da50c50

bool __thiscall UDynamicWindSkeletalData::IsTrunkBone(UDynamicWindSkeletalData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->ExtraBonesData).field_0x8 != *(int *)&(this->ExtraBonesData).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ExtraBonesData).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ExtraBonesData).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->ExtraBonesData).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->ExtraBonesData + (longlong)iVar4 * 0x14) == param_1) {
          uVar5 = GetBoneSimulationGroupIndex(this,param_1);
          if ((-1 < (int)uVar5) && ((int)uVar5 < (this->SimulationGroups).ArrayNum)) {
            uVar6 = 0;
            if ((int)uVar5 < (this->SimulationGroups).ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
            }
            return (bool)(this->SimulationGroups).AllocatorInstance.Data
                         [(longlong)(int)uVar5 * 0x18 + 0x14];
          }
          return false;
        }
        iVar4 = *(int *)(*(longlong *)&this->ExtraBonesData + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// PostLoad @ 14da50fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDynamicWindSkeletalData::PostLoad(UDynamicWindSkeletalData *this)

{
  undefined1 auStack_3b8 [56];
  ulong64 local_380;
  FArchiveState local_340;
  undefined8 local_2b0;
  FXxHash64Builder local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  UObject::PostLoad((UObject *)this);
  local_340._padding_ = 0;
  local_340.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_340.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_340.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_340.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_340._40_8_ = 0;
  local_340.ArSerializingDefaults = 0;
  local_340.ArPortFlags = 0;
  local_340.ArMaxSerializeSize = 0;
  local_340.ArUEVer.FileVersionUE4 = 0;
  local_340.ArUEVer.FileVersionUE5 = 0;
  local_340.ArLicenseeUEVer = 0;
  local_340.ArEngineVer.Major = 0;
  local_340.ArEngineVer.Minor = 0;
  local_340.ArEngineVer.Patch = 0;
  local_340.ArEngineVer._6_2_ = 0;
  local_340.ArEngineVer.Changelist = 0;
  local_340.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_340.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_340.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_340.SerializedProperty = (FProperty *)0x0;
  local_340.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_340.bCustomVersionsAreReset = false;
  local_340._129_7_ = 0;
  local_340.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_340);
  local_2b0 = 0;
  local_340._padding_ = (longlong)&___7__TMemoryHasher_VFXxHash64Builder__UFXxHash64____6B_;
  FXxHash64Builder::Reset(&local_280);
  (**(code **)(local_340._padding_ + 0xd8))(&local_340,1);
  (**(code **)(local_340._padding_ + 0x108))(&local_340,0);
  (**(code **)(local_340._padding_ + 0x108))(&local_340,1);
  (**(code **)(this->_padding_ + 200))(this,&local_340);
  FXxHash64Builder::Finalize(&local_280);
  this->SkeletalDataHash = local_380;
  FArchive::~FArchive((FArchive *)&local_340);
  return;
}

// RecalculateSkeletalDataHash @ 14da52270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDynamicWindSkeletalData::RecalculateSkeletalDataHash(UDynamicWindSkeletalData *this)

{
  undefined1 auStack_3b8 [56];
  ulong64 local_380;
  FArchiveState local_340;
  undefined8 local_2b0;
  FXxHash64Builder local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  local_340._padding_ = 0;
  local_340.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_340.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_340.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_340.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_340._40_8_ = 0;
  local_340.ArSerializingDefaults = 0;
  local_340.ArPortFlags = 0;
  local_340.ArMaxSerializeSize = 0;
  local_340.ArUEVer.FileVersionUE4 = 0;
  local_340.ArUEVer.FileVersionUE5 = 0;
  local_340.ArLicenseeUEVer = 0;
  local_340.ArEngineVer.Major = 0;
  local_340.ArEngineVer.Minor = 0;
  local_340.ArEngineVer.Patch = 0;
  local_340.ArEngineVer._6_2_ = 0;
  local_340.ArEngineVer.Changelist = 0;
  local_340.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_340.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_340.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_340.SerializedProperty = (FProperty *)0x0;
  local_340.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_340.bCustomVersionsAreReset = false;
  local_340._129_7_ = 0;
  local_340.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_340);
  local_2b0 = 0;
  local_340._padding_ = (longlong)&___7__TMemoryHasher_VFXxHash64Builder__UFXxHash64____6B_;
  FXxHash64Builder::Reset(&local_280);
  (**(code **)(local_340._padding_ + 0xd8))(&local_340,1);
  (**(code **)(local_340._padding_ + 0x108))(&local_340,0);
  (**(code **)(local_340._padding_ + 0x108))(&local_340,1);
  (**(code **)(this->_padding_ + 200))(this,&local_340);
  FXxHash64Builder::Finalize(&local_280);
  this->SkeletalDataHash = local_380;
  FArchive::~FArchive((FArchive *)&local_340);
  return;
}

// StaticRegisterNativesUDynamicWindSkeletalData @ 14da53b10

void __cdecl UDynamicWindSkeletalData::StaticRegisterNativesUDynamicWindSkeletalData(void)

{
  return;
}

