// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 1

// operator() @ 14d760670

void __thiscall
`FImageCore::ImageParallelFor<`FOpenColorIOWrapperProcessor::TransformImage'::__l11::<lambda_1>_>'::
__l2::<lambda_1>::operator()(void *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ChannelOrdering CVar3;
  BitDepth BVar5;
  PackedImageDesc local_38;
  FImageView local_28;
  ChannelOrdering CVar4;
  
  CVar3 = CHANNEL_ORDERING_RGBA;
  CVar4 = CHANNEL_ORDERING_RGBA;
  local_28._padding_ = 0;
  BVar5 = BIT_DEPTH_UNKNOWN;
  local_28._padding_._0_4_ = 0;
  local_28._padding_._4_2_ = 0x201;
  local_28.RawData = (void *)0x0;
  FImageCore::ImageParallelForMakePart(&local_28,this,param_1,*(long64 *)((longlong)this + 0x18));
  if (local_28._padding_._4_1_ == '\x01') {
    BVar5 = BIT_DEPTH_UINT8;
    CVar4 = CHANNEL_ORDERING_BGRA;
  }
  else if (local_28._padding_._4_1_ == '\x03') {
    BVar5 = BIT_DEPTH_UINT16;
  }
  else {
    CVar4 = CVar3;
    if (local_28._padding_._4_1_ == '\x04') {
      BVar5 = BIT_DEPTH_F16;
    }
    else if (local_28._padding_._4_1_ == '\x05') {
      BVar5 = BIT_DEPTH_F32;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenColorIOWrapper\\Private\\OpenColorIOWrapper.cpp"
                         ,0x85,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  OpenColorIO_v2_4::PackedImageDesc::PackedImageDesc
            (&local_38,local_28.RawData,(long)local_28._padding_,local_28._padding_._4_4_,CVar4,
             BVar5,-0x8000000000000000,-0x8000000000000000,-0x8000000000000000);
  OpenColorIO_v2_4::CPUProcessor::apply
            ((CPUProcessor *)**(undefined8 **)((longlong)this + 0x20),(ImageDesc *)&local_38);
  OpenColorIO_v2_4::PackedImageDesc::~PackedImageDesc(&local_38);
  return;
}

