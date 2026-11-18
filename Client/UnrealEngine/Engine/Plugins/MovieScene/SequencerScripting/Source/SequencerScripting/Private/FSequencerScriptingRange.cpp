// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 3

// ToNative @ 14c67ab00

TRange<FFrameNumber> * __thiscall
FSequencerScriptingRange::ToNative
          (FSequencerScriptingRange *this,TRange<FFrameNumber> *__return_storage_ptr__,
          FFrameRate param_1)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  FFrameTime FVar5;
  uint local_res8 [2];
  uint local_res10;
  int iStackX_14;
  
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->LowerBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Value.Value = 0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  if (this->bHasStart != 0) {
    local_res8[0] = this->InclusiveStart;
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    local_res10 = CONCAT31(local_res10._1_3_,1);
    FVar5 = ConvertFrameTime((FFrameTime)local_res8,FVar1,this->InternalRate);
    iStackX_14 = *(int *)FVar5;
    TVar3.Value.Value = iStackX_14;
    TVar3._0_4_ = local_res10;
    __return_storage_ptr__->LowerBound = TVar3;
  }
  if (this->bHasEnd != '\0') {
    local_res8[0] = this->ExclusiveEnd;
    local_res8[1] = 0;
    FVar2.Denominator = 0;
    FVar2.Numerator = local_res8[0];
    local_res10 = local_res10 & 0xffffff00;
    FVar5 = ConvertFrameTime((FFrameTime)local_res8,FVar2,this->InternalRate);
    TVar4.Value.Value = *(int *)FVar5;
    TVar4._0_4_ = local_res10;
    __return_storage_ptr__->UpperBound = TVar4;
  }
  return __return_storage_ptr__;
}

// StaticStruct @ 14c6921b0

UScriptStruct * __cdecl FSequencerScriptingRange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SequencerScripting();
    Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSequencerScriptingRange,(UObject *)pUVar1,
                         L"SequencerScriptingRange");
  }
  return Z_Registration_Info_UScriptStruct_FSequencerScriptingRange.OuterSingleton;
}

// FromNative @ 14c69c9d0

FSequencerScriptingRange * __cdecl
FSequencerScriptingRange::FromNative
          (FSequencerScriptingRange *__return_storage_ptr__,TRange<FFrameNumber> *param_1,
          FFrameRate param_2,FFrameRate param_3)

{
  byte bVar1;
  uchar uVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  FFrameNumber FVar5;
  undefined4 extraout_var;
  FFrameTime FVar6;
  undefined4 extraout_var_00;
  byte bVar7;
  TRange<FFrameNumber> local_res8;
  undefined1 local_res20 [8];
  
  __return_storage_ptr__->bHasStart = '\0';
  __return_storage_ptr__->bHasEnd = '\0';
  bVar7 = 0;
  bVar1 = *(byte *)__return_storage_ptr__;
  __return_storage_ptr__->InclusiveStart = 0;
  __return_storage_ptr__->ExclusiveEnd = 0;
  __return_storage_ptr__->InternalRate = param_3;
  uVar2 = (param_1->LowerBound).Type.Value;
  __return_storage_ptr__->bHasStart = uVar2 != '\x02';
  if ((param_1->UpperBound).Type.Value != '\x02') {
    bVar7 = 2;
  }
  *(byte *)__return_storage_ptr__ = bVar7 | uVar2 != '\x02' | bVar1 & 0xfc;
  if (uVar2 != '\x02') {
    FVar5 = UE::MovieScene::DiscreteInclusiveLower(&local_res8);
    local_res8.UpperBound.Value.Value = 0;
    local_res8.UpperBound._0_4_ = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    FVar3.Denominator = 0;
    FVar3.Numerator = local_res8.UpperBound._0_4_;
    FVar6 = ConvertFrameTime((FFrameTime)local_res20,FVar3,param_2);
    __return_storage_ptr__->InclusiveStart = *(int *)FVar6;
  }
  if (__return_storage_ptr__->bHasEnd != '\0') {
    FVar5 = UE::MovieScene::DiscreteExclusiveUpper(&local_res8);
    local_res8.UpperBound.Value.Value = 0;
    local_res8.UpperBound._0_4_ = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    FVar4.Denominator = 0;
    FVar4.Numerator = local_res8.UpperBound._0_4_;
    FVar6 = ConvertFrameTime((FFrameTime)local_res20,FVar4,param_2);
    __return_storage_ptr__->ExclusiveEnd = *(int *)FVar6;
  }
  return __return_storage_ptr__;
}

