// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// GetFromRole @ 14d04d830

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker::GetFromRole
          (FLiveLinkAnimationRoleToTransformWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetToRole @ 14d0573e0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker::GetToRole
          (FLiveLinkAnimationRoleToTransformWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// Translate @ 14d083550

bool __thiscall
ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker::Translate
          (FLiveLinkAnimationRoleToTransformWorker *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  FLiveLinkSkeletonStaticData *pFVar10;
  FLiveLinkAnimationFrameData *pFVar11;
  UScriptStruct *pUVar12;
  FLiveLinkTransformStaticData *this_00;
  FLiveLinkTransformFrameData *pFVar13;
  uint uVar14;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_48;
  UScriptStruct *local_40;
  UScriptStruct *local_38 [2];
  
  lVar9 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if ((lVar9 != 0) &&
     (lVar9 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x10))(param_2), lVar9 != 0)) {
    pFVar10 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
                        (param_1);
    pFVar11 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                        (param_2);
    if ((pFVar10 != (FLiveLinkSkeletonStaticData *)0x0) &&
       (pFVar11 != (FLiveLinkAnimationFrameData *)0x0)) {
      pUVar12 = FLiveLinkTransformStaticData::StaticStruct();
      if ((pUVar12 == (UScriptStruct *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOtherStruct",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                             ,0x16d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_40 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_40);
      FVar5 = local_res10;
      (**(code **)((param_3->StaticData).WrappedStruct._padding_ + 0x40))(param_3);
      puVar1 = (undefined8 *)(param_3->StaticData).WrappedStruct._padding_;
      (param_3->StaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar5;
      (*(code *)*puVar1)(param_3);
      pUVar12 = FLiveLinkTransformFrameData::StaticStruct();
      if ((pUVar12 == (UScriptStruct *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOtherStruct",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                             ,0x16d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      local_48.ObjectIndex = 0;
      local_48.ObjectSerialNumber = 0;
      local_38[0] = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_38);
      FVar5 = local_48;
      (**(code **)((param_3->FrameData).WrappedStruct._padding_ + 0x40))(&param_3->FrameData);
      puVar1 = (undefined8 *)(param_3->FrameData).WrappedStruct._padding_;
      (param_3->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar5;
      (*(code *)*puVar1)(&param_3->FrameData);
      this_00 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkTransformStaticData>
                          (&param_3->StaticData);
      pFVar13 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
                          (&param_3->FrameData);
      if (((this_00 == (FLiveLinkTransformStaticData *)0x0) ||
          (pFVar13 == (FLiveLinkTransformFrameData *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TransformStaticData && TransformFrameData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\Translator\\LiveLinkAnimationRoleToTransform.cpp"
                             ,0x2e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar8 = TArray<FName,TSizedDefaultAllocator<32>_>::IndexOfByKey<FName>
                        (&pFVar10->BoneNames,&this->BoneName);
      if ((-1 < (int)uVar8) && ((int)uVar8 < (pFVar11->Transforms).ArrayNum)) {
        TArray<FName,TSizedDefaultAllocator<32>_>::Append<FName,TSizedDefaultAllocator<32>_>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar10);
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)&pFVar13->_padding_,
                    (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)&pFVar11->_padding_);
        lVar9 = pFVar11->_padding_;
        pFVar13->_padding_ = pFVar11->_padding_;
        pFVar13->_padding_ = lVar9;
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar13->_padding_,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)&pFVar11->_padding_);
        lVar9 = pFVar11->_padding_;
        pFVar13->_padding_ = pFVar11->_padding_;
        pFVar13->_padding_ = lVar9;
        uVar14 = 0;
        if ((int)uVar8 < (pFVar11->Transforms).ArrayNum) {
          uVar14 = ~uVar8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar2 = (pFVar11->Transforms).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar8 * 0x60;
        dVar4 = *(double *)(pFVar2 + lVar9 + 8);
        (pFVar13->Transform).Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar9);
        (pFVar13->Transform).Rotation.XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)(pFVar2 + lVar9 + 0x10 + 8);
        (pFVar13->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar9 + 0x10);
        (pFVar13->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
        dVar4 = *(double *)(pFVar2 + lVar9 + 0x20 + 8);
        (pFVar13->Transform).Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar9 + 0x20);
        (pFVar13->Transform).Translation.XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)(pFVar2 + lVar9 + 0x30 + 8);
        (pFVar13->Transform).Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar9 + 0x30);
        (pFVar13->Transform).Translation.ZW.m128d_f64[1] = dVar4;
        dVar4 = *(double *)(pFVar2 + lVar9 + 0x40 + 8);
        (pFVar13->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar9 + 0x40);
        (pFVar13->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
        dVar4 = *(double *)(pFVar2 + lVar9 + 0x50 + 8);
        (pFVar13->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar9 + 0x50);
        (pFVar13->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
        return true;
      }
    }
  }
  return false;
}

