// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// GetHandEnumForSourceName @ 145952f40

bool __cdecl IMotionController::GetHandEnumForSourceName(FName param_1,EControllerHand *param_2)

{
  int iVar1;
  uint uVar2;
  EControllerHand *pEVar3;
  longlong lVar4;
  EControllerHand local_res8 [8];
  FName local_res18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`IMotionController::GetHandEnumForSourceName'::__l2::
           _dynamic_atexit_destructor_for__MotionSourceToEControllerHandMap__);
    _Init_thread_footer(&::_TSS0);
  }
  if (MotionSourceToEControllerHandMap._8_4_ == MotionSourceToEControllerHandMap._52_4_) {
    TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&MotionSourceToEControllerHandMap,0x28);
    for (lVar4 = 0x3f; 0x37UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
    iVar1 = 1 << ((byte)lVar4 & 0x1f);
    if ((MotionSourceToEControllerHandMap._72_4_ == 0) ||
       ((int)MotionSourceToEControllerHandMap._72_4_ < iVar1)) {
      MotionSourceToEControllerHandMap._72_4_ = iVar1;
      TSet<TTuple<FName,enum_EControllerHand>,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>,FDefaultSetAllocator>
      ::Rehash(&MotionSourceToEControllerHandMap);
    }
    local_res8[0] = Left;
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName_const_&,enum_EControllerHand>
              (&MotionSourceToEControllerHandMap,&LeftHandSourceId,local_res8);
    local_res8[0] = Right;
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName_const_&,enum_EControllerHand>
              (&MotionSourceToEControllerHandMap,&RightHandSourceId,local_res8);
    local_res8[0] = AnyHand;
    ::FName::FName(&local_res18,L"AnyHand");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Pad;
    ::FName::FName(&local_res18,L"Pad");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = ExternalCamera;
    ::FName::FName(&local_res18,L"ExternalCamera");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Gun;
    ::FName::FName(&local_res18,L"Gun");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = HMD;
    ::FName::FName(&local_res18,L"HMD");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Chest;
    ::FName::FName(&local_res18,L"Chest");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftShoulder;
    ::FName::FName(&local_res18,L"LeftShoulder");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightShoulder;
    ::FName::FName(&local_res18,L"RightShoulder");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftElbow;
    ::FName::FName(&local_res18,L"LeftElbow");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightElbow;
    ::FName::FName(&local_res18,L"RightElbow");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Waist;
    ::FName::FName(&local_res18,L"Waist");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftKnee;
    ::FName::FName(&local_res18,L"LeftKnee");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightKnee;
    ::FName::FName(&local_res18,L"RightKnee");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftFoot;
    ::FName::FName(&local_res18,L"LeftFoot");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightFoot;
    ::FName::FName(&local_res18,L"RightFoot");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Special;
    ::FName::FName(&local_res18,L"Special");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Left;
    ::FName::FName(&local_res18,L"EControllerHand::Left");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Right;
    ::FName::FName(&local_res18,L"EControllerHand::Right");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = AnyHand;
    ::FName::FName(&local_res18,L"EControllerHand::AnyHand");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Pad;
    ::FName::FName(&local_res18,L"EControllerHand::Pad");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = ExternalCamera;
    ::FName::FName(&local_res18,L"EControllerHand::ExternalCamera");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Gun;
    ::FName::FName(&local_res18,L"EControllerHand::Gun");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = HMD;
    ::FName::FName(&local_res18,L"EControllerHand::HMD");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Chest;
    ::FName::FName(&local_res18,L"EControllerHand::Chest");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftShoulder;
    ::FName::FName(&local_res18,L"EControllerHand::LeftShoulder");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightShoulder;
    ::FName::FName(&local_res18,L"EControllerHand::RightShoulder");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftElbow;
    ::FName::FName(&local_res18,L"EControllerHand::LeftElbow");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightElbow;
    ::FName::FName(&local_res18,L"EControllerHand::RightElbow");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Waist;
    ::FName::FName(&local_res18,L"EControllerHand::Waist");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftKnee;
    ::FName::FName(&local_res18,L"EControllerHand::LeftKnee");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightKnee;
    ::FName::FName(&local_res18,L"EControllerHand::RightKnee");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = LeftFoot;
    ::FName::FName(&local_res18,L"EControllerHand::LeftFoot");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = RightFoot;
    ::FName::FName(&local_res18,L"EControllerHand::RightFoot");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Special;
    ::FName::FName(&local_res18,L"EControllerHand::Special");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Left;
    ::FName::FName(&local_res18,L"LeftGrip");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Right;
    ::FName::FName(&local_res18,L"RightGrip");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Left;
    ::FName::FName(&local_res18,L"LeftAim");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = Right;
    ::FName::FName(&local_res18,L"RightAim");
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName,enum_EControllerHand>(&MotionSourceToEControllerHandMap,&local_res18,local_res8)
    ;
    local_res8[0] = HMD;
    TMapBase<FName,enum_EControllerHand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_EControllerHand,0>_>
    ::Emplace<FName_const_&,enum_EControllerHand>
              (&MotionSourceToEControllerHandMap,&HeadSourceId,local_res8);
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (MotionSourceToEControllerHandMap._8_4_ != MotionSourceToEControllerHandMap._52_4_) {
    lVar4 = 0x154bdb1b8;
    if (MotionSourceToEControllerHandMap._64_8_ != 0) {
      lVar4 = MotionSourceToEControllerHandMap._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (MotionSourceToEControllerHandMap._72_4_ - 1 & param_1.Number + uVar2)
                             * 4);
    while (iVar1 != -1) {
      lVar4 = MotionSourceToEControllerHandMap._0_8_ + (longlong)iVar1 * 0x14;
      if (*(FName *)(MotionSourceToEControllerHandMap._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pEVar3 = (EControllerHand *)(lVar4 + 8);
        if (lVar4 == 0) {
          pEVar3 = (EControllerHand *)0x0;
        }
        if (pEVar3 == (EControllerHand *)0x0) {
          return false;
        }
        *param_2 = *pEVar3;
        return true;
      }
      iVar1 = *(int *)(lVar4 + 0xc);
    }
  }
  return false;
}

