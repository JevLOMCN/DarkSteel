// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 5

// FAnalyticImplicitGroup @ 1463a0fd0

FAnalyticImplicitGroup * __thiscall
FAnalyticImplicitGroup::FAnalyticImplicitGroup
          (FAnalyticImplicitGroup *this,FName *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->BoneName = *param_1;
  (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spheres).ArrayNum = 0;
  (this->Spheres).ArrayMax = 0;
  (this->Boxes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Boxes).ArrayNum = 0;
  (this->Boxes).ArrayMax = 0;
  (this->Capsules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Capsules).ArrayNum = 0;
  (this->Capsules).ArrayMax = 0;
  (this->TaperedCylinders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaperedCylinders).ArrayNum = 0;
  (this->TaperedCylinders).ArrayMax = 0;
  (this->ConvexHulls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvexHulls).ArrayNum = 0;
  (this->ConvexHulls).ArrayMax = 0;
  (this->LevelSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelSets).ArrayNum = 0;
  (this->LevelSets).ArrayMax = 0;
  (this->ContiguousCollisionPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContiguousCollisionPoints).ArrayNum = 0;
  (this->ContiguousCollisionPoints).ArrayMax = 0;
  (this->CollisionPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionPoints).ArrayNum = 0;
  (this->CollisionPoints).ArrayMax = 0;
  (this->CollisionTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionTriangles).ArrayNum = 0;
  (this->CollisionTriangles).ArrayMax = 0;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  this->BoneIndex = param_2;
  this->ParentBoneIndex = -1;
  this->RigidBodyId = -1;
  this->RigidBodyState = Chaos_Object_Kinematic;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RefBoneXf).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RefBoneXf).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RefBoneXf).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RefBoneXf).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RefBoneXf).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RefBoneXf).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RefBoneXf).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RefBoneXf).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RefBoneXf).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RefBoneXf).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RefBoneXf).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RefBoneXf).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Parent = (FAnalyticImplicitGroup *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// Add @ 1463a8930

int __thiscall
FAnalyticImplicitGroup::Add
          (FAnalyticImplicitGroup *this,TTransform<double> *param_1,TBox<double,3> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TBox<double,3> *local_res18 [2];
  
  pFVar2 = (this->Boxes).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->Boxes).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Boxes).ArrayNum;
  piVar1 = &(this->Boxes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Boxes).AllocatorInstance,piVar1);
  }
  (this->Boxes).ArrayNum = iVar5 + 1;
  *(TBox<double,3> **)((this->Boxes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res18[0];
  iVar5 = TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Insert
                    (&this->Transforms,param_1,
                     (this->Spheres).ArrayNum + (this->Boxes).ArrayNum + -1);
  return iVar5;
}

// Add @ 1463a8a10

int __thiscall
FAnalyticImplicitGroup::Add
          (FAnalyticImplicitGroup *this,TTransform<double> *param_1,TSphere<double,3> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSphere<double,3> *local_res18 [2];
  
  pFVar2 = (this->Spheres).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->Spheres).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->Spheres).ArrayNum;
  piVar1 = &(this->Spheres).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Spheres).AllocatorInstance,piVar1);
  }
  (this->Spheres).ArrayNum = iVar5 + 1;
  *(TSphere<double,3> **)((this->Spheres).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res18[0];
  iVar5 = TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Insert
                    (&this->Transforms,param_1,(this->Spheres).ArrayNum + -1);
  return iVar5;
}

// Add @ 1463a8af0

int __thiscall
FAnalyticImplicitGroup::Add
          (FAnalyticImplicitGroup *this,TTransform<double> *param_1,FTaperedCylinder *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTaperedCylinder *local_res18 [2];
  
  pFVar2 = (this->TaperedCylinders).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->TaperedCylinders).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->TaperedCylinders).ArrayNum;
  piVar1 = &(this->TaperedCylinders).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->TaperedCylinders).AllocatorInstance,piVar1);
  }
  (this->TaperedCylinders).ArrayNum = iVar5 + 1;
  *(FTaperedCylinder **)((this->TaperedCylinders).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res18[0];
  iVar5 = TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Insert
                    (&this->Transforms,param_1,
                     (this->Spheres).ArrayNum + -1 +
                     (this->TaperedCylinders).ArrayNum + (this->Capsules).ArrayNum +
                     (this->Boxes).ArrayNum);
  return iVar5;
}

// Init @ 1463b9350

void __thiscall FAnalyticImplicitGroup::Init(FAnalyticImplicitGroup *this,int param_1,bool param_2)

{
  int *piVar1;
  TArray<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  TArray<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_01;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if ((this->Transforms).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,param_1,&(this->Transforms).AllocatorInstance,(this->Transforms).ArrayNum,
               &(this->Transforms).ArrayMax);
  }
  if (param_2) {
    this_00 = &this->CollisionPoints;
    iVar2 = (this->CollisionPoints).ArrayNum;
    piVar1 = &(this->CollisionPoints).ArrayNum;
    if (iVar2 < param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,param_1 - iVar2,&this_00->AllocatorInstance,piVar1,
                         &(this->CollisionPoints).ArrayMax);
      memset((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
             (longlong)(param_1 - iVar2) << 4);
    }
    else if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar6 != 0) {
        TArray<TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(this->CollisionPoints).ArrayMax);
      }
    }
    this_01 = &this->CollisionTriangles;
    iVar2 = (this->CollisionTriangles).ArrayNum;
    piVar1 = &(this->CollisionTriangles).ArrayNum;
    if (iVar2 < param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,param_1 - iVar2,&this_01->AllocatorInstance,piVar1,
                         &(this->CollisionTriangles).ArrayMax);
      memset((this_01->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
             (longlong)(param_1 - iVar2) << 4);
    }
    else if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar6 != 0) {
        TArray<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_01,param_1,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_01->AllocatorInstance,*piVar1,&(this->CollisionTriangles).ArrayMax);
      }
    }
  }
  return;
}

