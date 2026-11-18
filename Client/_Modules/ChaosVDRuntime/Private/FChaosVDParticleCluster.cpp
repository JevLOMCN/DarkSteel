// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c8c50

UScriptStruct * __cdecl FChaosVDParticleCluster::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleCluster,(UObject *)pUVar1,
                         L"ChaosVDParticleCluster");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleCluster.OuterSingleton;
}

// operator= @ 1436d6f80

FChaosVDParticleCluster * __thiscall
FChaosVDParticleCluster::operator=(FChaosVDParticleCluster *this,FChaosVDParticleCluster *param_1)

{
  int *piVar1;
  TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  double dVar5;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->ParentParticleID = param_1->ParentParticleID;
  pTVar2 = &this->ConnectivityEdges;
  this->NumChildren = param_1->NumChildren;
  dVar5 = (param_1->ChildToParent).Rotation.XY.m128d_f64[1];
  (this->ChildToParent).Rotation.XY.m128d_f64[0] = (param_1->ChildToParent).Rotation.XY.m128d_f64[0]
  ;
  (this->ChildToParent).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->ChildToParent).Rotation.ZW.m128d_f64[1];
  (this->ChildToParent).Rotation.ZW.m128d_f64[0] = (param_1->ChildToParent).Rotation.ZW.m128d_f64[0]
  ;
  (this->ChildToParent).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->ChildToParent).Translation.XY.m128d_f64[1];
  (this->ChildToParent).Translation.XY.m128d_f64[0] =
       (param_1->ChildToParent).Translation.XY.m128d_f64[0];
  (this->ChildToParent).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->ChildToParent).Translation.ZW.m128d_f64[1];
  (this->ChildToParent).Translation.ZW.m128d_f64[0] =
       (param_1->ChildToParent).Translation.ZW.m128d_f64[0];
  (this->ChildToParent).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->ChildToParent).Scale3D.XY.m128d_f64[1];
  (this->ChildToParent).Scale3D.XY.m128d_f64[0] = (param_1->ChildToParent).Scale3D.XY.m128d_f64[0];
  (this->ChildToParent).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->ChildToParent).Scale3D.ZW.m128d_f64[1];
  (this->ChildToParent).Scale3D.ZW.m128d_f64[0] = (param_1->ChildToParent).Scale3D.ZW.m128d_f64[0];
  (this->ChildToParent).Scale3D.ZW.m128d_f64[1] = dVar5;
  this->ClusterGroupIndex = param_1->ClusterGroupIndex;
  this->bInternalCluster = param_1->bInternalCluster;
  this->CollisionImpulse = param_1->CollisionImpulse;
  this->ExternalStrains = param_1->ExternalStrains;
  this->InternalStrains = param_1->InternalStrains;
  this->Strain = param_1->Strain;
  if (pTVar2 != &param_1->ConnectivityEdges) {
    iVar3 = (this->ConnectivityEdges).ArrayMax;
    piVar1 = &(this->ConnectivityEdges).ArrayMax;
    _Src = (param_1->ConnectivityEdges).AllocatorInstance.Data;
    iVar4 = (param_1->ConnectivityEdges).ArrayNum;
    (this->ConnectivityEdges).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->bIsAnchored = param_1->bIsAnchored;
  this->bUnbreakable = param_1->bUnbreakable;
  this->bIsChildToParentLocked = param_1->bIsChildToParentLocked;
  return this;
}

// Serialize @ 1436deff0

bool __thiscall FChaosVDParticleCluster::Serialize(FChaosVDParticleCluster *this,FArchive *param_1)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    piVar1 = &this->ParentParticleID;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->NumChildren;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    UE::Math::operator<<(param_1,&this->ChildToParent);
    piVar1 = &this->ClusterGroupIndex;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->bInternalCluster);
    pfVar2 = &this->CollisionImpulse;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = &this->ExternalStrains;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = &this->InternalStrains;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pfVar2 = &this->Strain;
    pfVar4 = (float *)**(undefined8 **)&param_1->field_0x8;
    if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
      }
    }
    else {
      *pfVar2 = *pfVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    TArrayPrivateFriend::Serialize<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_>
              (param_1,&this->ConnectivityEdges);
    ::operator<<(param_1,&this->bIsAnchored);
    ::operator<<(param_1,&this->bUnbreakable);
    ::operator<<(param_1,&this->bIsChildToParentLocked);
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

