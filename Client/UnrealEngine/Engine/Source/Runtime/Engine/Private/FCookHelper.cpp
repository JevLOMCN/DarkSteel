// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FCookHelper @ 14824eaf0

FCookHelper * __thiscall Chaos::FCookHelper::FCookHelper(FCookHelper *this,UBodySetup *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FCookHelper *pFVar4;
  
  (this->SimpleImplicits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimpleImplicits).ArrayNum = 0;
  (this->SimpleImplicits).ArrayMax = 0;
  (this->ComplexImplicits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexImplicits).ArrayNum = 0;
  (this->ComplexImplicits).ArrayMax = 0;
  (this->UVInfo).IndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).IndexBuffer.ArrayNum = 0;
  (this->UVInfo).IndexBuffer.ArrayMax = 0;
  (this->UVInfo).VertPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertPositions.ArrayNum = 0;
  (this->UVInfo).VertPositions.ArrayMax = 0;
  (this->UVInfo).VertUVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVInfo).VertUVs.ArrayNum = 0;
  (this->UVInfo).VertUVs.ArrayMax = 0;
  (this->FaceRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceRemap).ArrayNum = 0;
  (this->FaceRemap).ArrayMax = 0;
  (this->VertexRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexRemap).ArrayNum = 0;
  (this->VertexRemap).ArrayMax = 0;
  this->SourceSetup = param_1;
  (this->CookInfo).TriangleMeshDesc.bFlipNormals = 0;
  (this->CookInfo).TriangleMeshDesc.bDisableActiveEdgePrecompute = 0;
  (this->CookInfo).TriangleMeshDesc.bFastCook = 0;
  (this->CookInfo).TriangleMeshDesc.bDeformableMesh = 0;
  (this->CookInfo).TriangleMeshDesc.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CookInfo).TriangleMeshDesc.Vertices.ArrayNum = 0;
  (this->CookInfo).TriangleMeshDesc.Vertices.ArrayMax = 0;
  (this->CookInfo).TriangleMeshDesc.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookInfo).TriangleMeshDesc.Indices.ArrayNum = 0;
  (this->CookInfo).TriangleMeshDesc.Indices.ArrayMax = 0;
  (this->CookInfo).TriangleMeshDesc.MaterialIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CookInfo).TriangleMeshDesc.MaterialIndices.ArrayNum = 0;
  (this->CookInfo).TriangleMeshDesc.MaterialIndices.ArrayMax = 0;
  (this->CookInfo).TriangleMeshDesc.UVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookInfo).TriangleMeshDesc.UVs.ArrayNum = 0;
  (this->CookInfo).TriangleMeshDesc.UVs.ArrayMax = 0;
  (this->CookInfo).NonMirroredConvexVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CookInfo).NonMirroredConvexVertices.ArrayNum = 0;
  (this->CookInfo).NonMirroredConvexVertices.ArrayMax = 0;
  (this->CookInfo).MirroredConvexVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookInfo).MirroredConvexVertices.ArrayNum = 0;
  (this->CookInfo).MirroredConvexVertices.ArrayMax = 0;
  (this->CookInfo).OuterDebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookInfo).OuterDebugName.Data.ArrayNum = 0;
  (this->CookInfo).OuterDebugName.Data.ArrayMax = 0;
  (this->CookInfo).bCookNonMirroredConvex = false;
  (this->CookInfo).bCookMirroredConvex = false;
  (this->CookInfo).bConvexDeformableMesh = false;
  (this->CookInfo).bCookTriMesh = false;
  (this->CookInfo).bSupportUVFromHitResults = false;
  (this->CookInfo).bSupportFaceRemap = false;
  (this->CookInfo).bTriMeshError = false;
  this->bCanceled = (atomic<bool>)0x0;
  if (this->SourceSetup == (UBodySetup *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceSetup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\ChaosCooking.cpp"
                       ,0x15b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FCookHelper *)(*pcVar2)();
      return pFVar4;
    }
  }
  UBodySetup::GetCookInfo(this->SourceSetup,&this->CookInfo,0);
  return this;
}

// ~FCookHelper @ 148252890

void __thiscall Chaos::FCookHelper::~FCookHelper(FCookHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  FCookBodySetupInfo::~FCookBodySetupInfo(&this->CookInfo);
  pFVar1 = (this->VertexRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FaceRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             (this->UVInfo).VertUVs.AllocatorInstance.Data,(this->UVInfo).VertUVs.ArrayNum);
  pFVar1 = (this->UVInfo).VertUVs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).VertPositions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVInfo).IndexBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int>
            ((TRefCountPtr<Chaos::FTriangleMeshImplicitObject> *)
             (this->ComplexImplicits).AllocatorInstance.Data,(this->ComplexImplicits).ArrayNum);
  pFVar1 = (this->ComplexImplicits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
            ((TRefCountPtr<Chaos::FImplicitObject> *)(this->SimpleImplicits).AllocatorInstance.Data,
             (this->SimpleImplicits).ArrayNum);
  pFVar1 = (this->SimpleImplicits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Cook @ 1482708a0

void __thiscall Chaos::FCookHelper::Cook(FCookHelper *this)

{
  int *piVar1;
  undefined1 local_res8 [8];
  
  if (this->bCanceled == (atomic<bool>)0x0) {
    if ((this->CookInfo).bCookNonMirroredConvex != false) {
      `Chaos::Cooking::BuildConvexMeshes'::__l2::<lambda_1>::operator()
                (local_res8,&this->SimpleImplicits,&(this->CookInfo).NonMirroredConvexVertices,false
                );
    }
    if ((this->CookInfo).bCookMirroredConvex != false) {
      `Chaos::Cooking::BuildConvexMeshes'::__l2::<lambda_1>::operator()
                (local_res8,&this->SimpleImplicits,&(this->CookInfo).MirroredConvexVertices,true);
    }
    Cooking::BuildTriangleMeshes
              (&this->ComplexImplicits,&this->FaceRemap,&this->VertexRemap,&this->CookInfo);
    if ((this->CookInfo).bSupportUVFromHitResults != false) {
      FBodySetupUVInfo::FillFromTriMesh(&this->UVInfo,&(this->CookInfo).TriangleMeshDesc);
    }
    if ((this->CookInfo).bSupportFaceRemap == false) {
      piVar1 = &(this->FaceRemap).ArrayMax;
      (this->FaceRemap).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->FaceRemap).AllocatorInstance,0,piVar1);
      }
    }
  }
  return;
}

// CookAsync @ 148270980

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FCookHelper::CookAsync
          (FCookHelper *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_PhysXCooking> FVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_res10;
  
  Cook(this);
  FVar4 = StatPtr_STAT_PhysXCooking;
  if (StatPtr_STAT_PhysXCooking == (FThreadSafeStaticStat<FStat_STAT_PhysXCooking>)0x0) {
    pFVar3 = ::FName::FName((FName *)&local_res10,"STAT_PhysXCooking");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_PhysXCooking>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysXCooking,*pFVar3,
                       L"BodySetup Cooking","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
            (&local_res10,(TStatId)param_1,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar4,MainQueue);
  if ((FName)local_res10._0_8_ != (FName)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10._0_8_ + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_res10._0_8_)(local_res10._0_8_,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// HasWork @ 148293180

bool __thiscall Chaos::FCookHelper::HasWork(FCookHelper *this)

{
  if ((((this->CookInfo).bCookTriMesh == false) &&
      ((this->CookInfo).bCookNonMirroredConvex == false)) &&
     ((this->CookInfo).bCookMirroredConvex == false)) {
    return false;
  }
  return true;
}

