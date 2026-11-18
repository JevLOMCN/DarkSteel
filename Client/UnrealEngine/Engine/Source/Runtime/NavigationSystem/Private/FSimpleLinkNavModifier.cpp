// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FSimpleLinkNavModifier @ 146dd7c00

FSimpleLinkNavModifier * __thiscall
FSimpleLinkNavModifier::FSimpleLinkNavModifier
          (FSimpleLinkNavModifier *this,FSimpleLinkNavModifier *param_1)

{
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FNavigationLink *pFVar5;
  FNavigationSegmentLink *pFVar6;
  double dVar7;
  uint uVar8;
  
  pTVar1 = &this->Links;
  *(undefined4 *)this = *(undefined4 *)param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Links).ArrayMax;
  iVar4 = (param_1->Links).ArrayNum;
  pFVar5 = (FNavigationLink *)(param_1->Links).AllocatorInstance.Data;
  (this->Links).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNavigationLink,FNavigationLink,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &this->SegmentLinks;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SegmentLinks).ArrayMax;
  iVar4 = (param_1->SegmentLinks).ArrayNum;
  pFVar6 = (FNavigationSegmentLink *)(param_1->SegmentLinks).AllocatorInstance.Data;
  (this->SegmentLinks).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
              ((pTVar3->AllocatorInstance).Data,pFVar6,iVar4);
  }
  dVar7 = (param_1->LocalToWorld).Rotation.XY.m128d_f64[1];
  (this->LocalToWorld).Rotation.XY.m128d_f64[0] = (param_1->LocalToWorld).Rotation.XY.m128d_f64[0];
  (this->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[1];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[0] = (param_1->LocalToWorld).Rotation.ZW.m128d_f64[0];
  (this->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->LocalToWorld).Translation.XY.m128d_f64[1];
  (this->LocalToWorld).Translation.XY.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.XY.m128d_f64[0];
  (this->LocalToWorld).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->LocalToWorld).Translation.ZW.m128d_f64[1];
  (this->LocalToWorld).Translation.ZW.m128d_f64[0] =
       (param_1->LocalToWorld).Translation.ZW.m128d_f64[0];
  (this->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[1];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.XY.m128d_f64[0];
  (this->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[1];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[0] = (param_1->LocalToWorld).Scale3D.ZW.m128d_f64[0];
  (this->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar7;
  this->UserId = param_1->UserId;
  (this->NavLinkId).Id = (param_1->NavLinkId).Id;
  uVar8 = (*(uint *)&param_1->field_0xa0 ^ *(uint *)&this->field_0xa0) & 0xfffffffe ^
          *(uint *)&param_1->field_0xa0;
  *(uint *)&this->field_0xa0 = uVar8;
  uVar8 = (uVar8 ^ *(uint *)&param_1->field_0xa0) & 0xfffffffd ^ *(uint *)&param_1->field_0xa0;
  *(uint *)&this->field_0xa0 = uVar8;
  *(uint *)&this->field_0xa0 =
       (uVar8 ^ *(uint *)&param_1->field_0xa0) & 0xfffffffb ^ *(uint *)&param_1->field_0xa0;
  return this;
}

