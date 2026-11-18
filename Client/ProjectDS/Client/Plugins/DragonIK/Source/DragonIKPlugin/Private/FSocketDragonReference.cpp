// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 4

// StaticStruct @ 14d29b560

UScriptStruct * __cdecl FSocketDragonReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSocketDragonReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FSocketDragonReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSocketDragonReference,(UObject *)pUVar1,
                         L"SocketDragonReference");
  }
  return Z_Registration_Info_UScriptStruct_FSocketDragonReference.OuterSingleton;
}

// InitializeSocketInfo @ 14d2ffd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSocketDragonReference::InitializeSocketInfo
          (FSocketDragonReference *this,FAnimInstanceProxy *param_1)

{
  double dVar1;
  char cVar2;
  FMeshPoseBoneIndex FVar3;
  USkeletalMeshComponent *this_00;
  USkeletalMeshSocket *this_01;
  TTransform<double> *pTVar4;
  undefined1 auStack_a8 [32];
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
  this->CachedSocketCompactBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
  if (this->SocketName != (FName)0x0) {
    this_00 = FAnimInstanceProxy::GetSkelMeshComponent(param_1);
    if ((this_00 == (USkeletalMeshComponent *)0x0) ||
       (cVar2 = (**(code **)(this_00->_padding_ + 0x540))(this_00,this->SocketName), cVar2 == '\0'))
    {
      if (2 < (byte)LogAnimation._0_1_) {
        ::FName::ToString(&this->SocketName,&local_88);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this_01 = USkinnedMeshComponent::GetSocketByName
                          ((USkinnedMeshComponent *)this_00,this->SocketName);
      if (this_01 != (USkeletalMeshSocket *)0x0) {
        pTVar4 = USkeletalMeshSocket::GetSocketLocalTransform(this_01,&local_78);
        dVar1 = (pTVar4->Rotation).XY.m128d_f64[1];
        (this->CachedSocketLocalTransform).Rotation.XY.m128d_f64[0] =
             (pTVar4->Rotation).XY.m128d_f64[0];
        (this->CachedSocketLocalTransform).Rotation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar4->Rotation).ZW.m128d_f64[1];
        (this->CachedSocketLocalTransform).Rotation.ZW.m128d_f64[0] =
             (pTVar4->Rotation).ZW.m128d_f64[0];
        (this->CachedSocketLocalTransform).Rotation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar4->Translation).XY.m128d_f64[1];
        (this->CachedSocketLocalTransform).Translation.XY.m128d_f64[0] =
             (pTVar4->Translation).XY.m128d_f64[0];
        (this->CachedSocketLocalTransform).Translation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar4->Translation).ZW.m128d_f64[1];
        (this->CachedSocketLocalTransform).Translation.ZW.m128d_f64[0] =
             (pTVar4->Translation).ZW.m128d_f64[0];
        (this->CachedSocketLocalTransform).Translation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar4->Scale3D).XY.m128d_f64[1];
        (this->CachedSocketLocalTransform).Scale3D.XY.m128d_f64[0] =
             (pTVar4->Scale3D).XY.m128d_f64[0];
        (this->CachedSocketLocalTransform).Scale3D.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar4->Scale3D).ZW.m128d_f64[1];
        (this->CachedSocketLocalTransform).Scale3D.ZW.m128d_f64[0] =
             (pTVar4->Scale3D).ZW.m128d_f64[0];
        (this->CachedSocketLocalTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
        FVar3 = (FMeshPoseBoneIndex)
                USkinnedMeshComponent::GetBoneIndex
                          ((USkinnedMeshComponent *)this_00,this_01->BoneName);
        this->CachedSocketMeshBoneIndex = FVar3;
        if (FVar3 == (FMeshPoseBoneIndex)0xffffffff) {
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
          `FSocketDragonReference::InitializeSocketInfo'::__l11::<lambda_1>::operator()(&local_88);
        }
      }
    }
  }
  return;
}

// InitialzeCompactBoneIndex @ 14d3003c0

void __thiscall
FSocketDragonReference::InitialzeCompactBoneIndex
          (FSocketDragonReference *this,FBoneContainer *param_1)

{
  FMeshPoseBoneIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCompactPoseBoneIndex FVar5;
  uint uVar6;
  
  FVar1 = this->CachedSocketMeshBoneIndex;
  if (FVar1 == (FMeshPoseBoneIndex)0xffffffff) {
    return;
  }
  if (((int)FVar1 < 0) || ((param_1->PoseToSkeletonBoneIndexArray).ArrayNum <= (int)FVar1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8192494858347217480>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                       ,0x248,"PoseToSkeletonBoneIndexArray.IsValidIndex(MeshIndex.GetInt())");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0;
    if ((int)FVar1 < (param_1->PoseToSkeletonBoneIndexArray).ArrayNum) {
      uVar4 = ~(uint)FVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = *(uint *)((param_1->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data +
                     (longlong)(int)FVar1 * 4);
    if ((-1 < (int)uVar4) && ((int)uVar4 < (param_1->SkeletonToCompactPose).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar4 < (param_1->SkeletonToCompactPose).ArrayNum) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5 = *(FCompactPoseBoneIndex *)
               ((param_1->SkeletonToCompactPose).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
      goto LAB_14d3004e2;
    }
  }
  FVar5 = (FCompactPoseBoneIndex)0xffffffff;
LAB_14d3004e2:
  this->CachedSocketCompactBoneIndex = FVar5;
  return;
}

// operator() @ 15057a6e0

bool __thiscall
`FSocketDragonReference::InitializeSocketInfo'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2644533379873112029>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x60),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2644533379873112029>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15057a74b;
    }
  }
  bVar2 = false;
LAB_15057a74b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

