// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 11

// FFoliageInfo @ 145ed8760

FFoliageInfo * __thiscall FFoliageInfo::FFoliageInfo(FFoliageInfo *this)

{
  this->Type = StaticMesh;
  (this->Implementation).Ptr = (FFoliageImpl *)0x0;
  return this;
}

// ~FFoliageInfo @ 145eda140

void __thiscall FFoliageInfo::~FFoliageInfo(FFoliageInfo *this)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145eda151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// AddReferencedObjects @ 145ede3a0

void __thiscall
FFoliageInfo::AddReferencedObjects(FFoliageInfo *this,UObject *param_1,FReferenceCollector *param_2)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ede3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 8))();
    return;
  }
  return;
}

// CreateImplementation @ 145edf860

void __thiscall FFoliageInfo::CreateImplementation(FFoliageInfo *this,EFoliageImplType param_1)

{
  FFoliageImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  FFoliageImpl *pFVar4;
  
  if ((param_1 == Unknown) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InType != EFoliageImplType::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedFoliage.cpp"
                         ,0x80f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Implementation).Ptr != (FFoliageImpl *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Implementation.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedFoliage.cpp"
                         ,0x810,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->Type = param_1;
  if (param_1 == StaticMesh) {
    pFVar4 = ::operator_new(0x18);
    if (pFVar4 != (FFoliageImpl *)0x0) {
      *pFVar4 = (FFoliageImpl)&FFoliageStaticMesh::_vftable__for__FFoliageImpl__;
      pFVar4[1] = (FFoliageImpl)&FFoliageStaticMesh::_vftable__for__ISMInstanceManager__;
      pFVar4[2] = (FFoliageImpl)0x0;
      goto LAB_145edf903;
    }
  }
  else {
    if (param_1 != Actor) {
      if (param_1 != ISMActor) {
        return;
      }
      pFVar4 = ::operator_new(0x10);
      if (pFVar4 != (FFoliageImpl *)0x0) {
        *pFVar4 = (FFoliageImpl)&FFoliageISMActor::_vftable__for__FFoliageImpl__;
        pFVar4[1] = (FFoliageImpl)&FFoliageISMActor::_vftable__for__IISMPartitionInstanceManager__;
      }
      pFVar1 = (this->Implementation).Ptr;
      if (pFVar1 == pFVar4) {
        return;
      }
      (this->Implementation).Ptr = pFVar4;
      if (pFVar1 == (FFoliageImpl *)0x0) {
        return;
      }
      (**(code **)*pFVar1)(pFVar1,1);
      return;
    }
    pFVar4 = ::operator_new(0x28);
    if (pFVar4 != (FFoliageImpl *)0x0) {
      *(undefined1 *)(pFVar4 + 4) = 1;
      *pFVar4 = (FFoliageImpl)&___7FFoliageActor__6B_;
      pFVar4[1] = (FFoliageImpl)0x0;
      pFVar4[2] = (FFoliageImpl)0x0;
      pFVar4[3] = (FFoliageImpl)0x0;
      goto LAB_145edf903;
    }
  }
  pFVar4 = (FFoliageImpl *)0x0;
LAB_145edf903:
  pFVar1 = (this->Implementation).Ptr;
  if ((pFVar1 != pFVar4) && ((this->Implementation).Ptr = pFVar4, pFVar1 != (FFoliageImpl *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145edf932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// GetComponent @ 145ee33a0

UHierarchicalInstancedStaticMeshComponent * __thiscall
FFoliageInfo::GetComponent(FFoliageInfo *this)

{
  FFoliageImpl *pFVar1;
  
  if ((this->Type == StaticMesh) &&
     (pFVar1 = (this->Implementation).Ptr, pFVar1 != (FFoliageImpl *)0x0)) {
    return (UHierarchicalInstancedStaticMeshComponent *)pFVar1[2];
  }
  return (UHierarchicalInstancedStaticMeshComponent *)0x0;
}

// GetOverlappingBoxCount @ 145ee4230

int __thiscall FFoliageInfo::GetOverlappingBoxCount(FFoliageInfo *this,TBox<double> *param_1)

{
  FFoliageImpl *pFVar1;
  int iVar2;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pFVar1 + 0x30))();
    return iVar2;
  }
  return 0;
}

// GetOverlappingBoxTransforms @ 145ee4330

void __thiscall
FFoliageInfo::GetOverlappingBoxTransforms
          (FFoliageInfo *this,TBox<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x38))();
    return;
  }
  return;
}

// GetOverlappingMeshCount @ 145ee4380

void __thiscall
FFoliageInfo::GetOverlappingMeshCount
          (FFoliageInfo *this,TSphere<double> *param_1,
          TMap<UStaticMesh_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>_>
          *param_2)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x40))();
    return;
  }
  return;
}

// GetOverlappingSphereCount @ 145ee47c0

int __thiscall FFoliageInfo::GetOverlappingSphereCount(FFoliageInfo *this,TSphere<double> *param_1)

{
  FFoliageImpl *pFVar1;
  int iVar2;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee47cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pFVar1 + 0x28))();
    return iVar2;
  }
  return 0;
}

// PostLoad @ 145ee89e0

void __thiscall FFoliageInfo::PostLoad(FFoliageInfo *this)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee89ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))();
    return;
  }
  return;
}

// PostSerialize @ 145ee8a60

void __thiscall FFoliageInfo::PostSerialize(FFoliageInfo *this,FArchive *param_1)

{
  FFoliageImpl *pFVar1;
  
  pFVar1 = (this->Implementation).Ptr;
  if (pFVar1 != (FFoliageImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ee8a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x18))();
    return;
  }
  return;
}

