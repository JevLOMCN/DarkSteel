// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Initialize @ 14ecea3a0

void __thiscall
FSortedVoicePacketNode::Initialize
          (FSortedVoicePacketNode *this,void *param_1,uint param_2,long64 param_3,
          EVoipStreamDataFormat param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<short_const_,int> local_28;
  
  uVar6 = UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel();
  if (uVar6 < param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes <= UVOIPStatics::GetMaxUncompressedVoiceDataSizePerChannel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Public\\VoicePacketBuffer.h"
                       ,0x3f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->StartSample = param_3;
  this->NextPacket = (FSortedVoicePacketNode *)0x0;
  this->IndexInPacketBuffer = -1;
  if (param_4 == Int16) {
    uVar6 = param_2 >> 1;
  }
  else {
    if (param_4 != Float) goto LAB_14ecea42b;
    uVar6 = param_2 >> 2;
  }
  this->BufferNumSamples = uVar6;
LAB_14ecea42b:
  piVar1 = &(this->AudioBufferMem).ArrayMax;
  (this->AudioBufferMem).ArrayNum = 0;
  if ((this->AudioBufferMem).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,this->BufferNumSamples,(ForAnyElementType *)this,&(this->AudioBufferMem).ArrayNum,
             piVar1);
  _Dst = (this->AudioBufferMem).AllocatorInstance.Data;
  if (param_4 == Float) {
    this->SamplesLeft = this->BufferNumSamples;
    memcpy(_Dst,param_1,(ulonglong)param_2);
  }
  else if (param_4 == Int16) {
    iVar2 = this->BufferNumSamples;
    this->SamplesLeft = iVar2;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = this->BufferNumSamples;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_38._12_4_ = local_28._12_4_;
    local_38.ArrayNum = iVar2;
    local_28._12_4_ = uStack_3c;
    local_28.ArrayNum = iVar3;
    local_38.DataPtr = (float *)_Dst;
    local_28.DataPtr = param_1;
    Audio::ArrayPcm16ToFloat(&local_28,&local_38);
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Public\\VoicePacketBuffer.h"
                       ,0x68,L"Invalid Format for submitted buffer!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

