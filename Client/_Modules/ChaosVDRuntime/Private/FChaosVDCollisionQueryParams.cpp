// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c8cd0

UScriptStruct * __cdecl FChaosVDCollisionQueryParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams,(UObject *)pUVar1,
                         L"ChaosVDCollisionQueryParams");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCollisionQueryParams.OuterSingleton;
}

// operator= @ 1436d6310

FChaosVDCollisionQueryParams * __thiscall
FChaosVDCollisionQueryParams::operator=
          (FChaosVDCollisionQueryParams *this,FChaosVDCollisionQueryParams *param_1)

{
  ushort uVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->TraceTag = param_1->TraceTag;
  this->OwnerTag = param_1->OwnerTag;
  uVar1 = (this->bTraceComplex ^ param_1->bTraceComplex) & 1 ^ *(ushort *)&this->field_0x20;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 2 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 4 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 8 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 0x10 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 0x20 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 0x40 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  uVar1 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 0x80 ^ uVar1;
  *(ushort *)&this->field_0x20 = uVar1;
  *(ushort *)&this->field_0x20 = (uVar1 ^ *(ushort *)&param_1->field_0x20) & 0x100 ^ uVar1;
  this->IgnoreMask = param_1->IgnoreMask;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->IgnoredComponentsIDs,&param_1->IgnoredComponentsIDs);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            (&this->IgnoredActorsIDs,&param_1->IgnoredActorsIDs);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->IgnoredActorsNames,&param_1->IgnoredActorsNames);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->IgnoredComponentsNames,&param_1->IgnoredComponentsNames);
  return this;
}

// Serialize @ 1436dbc90

bool __thiscall
FChaosVDCollisionQueryParams::Serialize(FChaosVDCollisionQueryParams *this,FArchive *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ushort uVar3;
  bool bVar4;
  ushort local_res8 [4];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->TraceTag);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->OwnerTag);
    TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
              (param_1,&this->IgnoredActorsIDs);
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              (param_1,&this->IgnoredComponentsNames);
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              (param_1,&this->IgnoredActorsNames);
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      bVar4 = this->bTraceComplex != 0;
      local_res8[0] = (ushort)bVar4;
      if (this->bFindInitialOverlaps != 0) {
        local_res8[0] = bVar4 | 2;
      }
      if (this->bReturnFaceIndex != 0) {
        local_res8[0] = local_res8[0] | 4;
      }
      if (this->bReturnPhysicalMaterial != 0) {
        local_res8[0] = local_res8[0] | 8;
      }
      if (this->bIgnoreBlocks != 0) {
        local_res8[0] = local_res8[0] | 0x10;
      }
      if (this->bIgnoreTouches != 0) {
        local_res8[0] = local_res8[0] | 0x20;
      }
      if (this->bSkipNarrowPhase != 0) {
        local_res8[0] = local_res8[0] | 0x40;
      }
      if ((char)(this->bTraceIntoSubComponents << 7) < '\0') {
        local_res8[0] = local_res8[0] | 0x80;
      }
      if (this->bReplaceHitWithSubComponents != 0) {
        local_res8[0] = local_res8[0] | 0x100;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulonglong)plVar2[1] < *plVar2 + 2U) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        *plVar2 = *plVar2 + 2;
      }
    }
    else {
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(ushort *)*plVar2;
        *plVar2 = *plVar2 + 2;
      }
      uVar3 = (ushort)((byte)local_res8[0] & 1) | *(ushort *)&this->field_0x20 & 0xfffe;
      uVar3 = (uVar3 ^ local_res8[0]) & 2 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 4 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 8 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 0x10 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 0x20 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 0x40 ^ uVar3;
      uVar3 = (uVar3 ^ local_res8[0]) & 0x80 ^ uVar3;
      *(ushort *)&this->field_0x20 = (uVar3 ^ local_res8[0]) & 0x100 ^ uVar3;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

