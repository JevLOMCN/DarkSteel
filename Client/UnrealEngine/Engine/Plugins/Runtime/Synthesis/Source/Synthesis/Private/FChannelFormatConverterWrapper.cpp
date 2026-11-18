// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 11

// FChannelFormatConverterWrapper @ 14f0b6420

FChannelFormatConverterWrapper * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::FChannelFormatConverterWrapper
          (FChannelFormatConverterWrapper *this,FChannelFormatConverterWrapper *param_1)

{
  (this->Storage).Ptr = (IChannelFormatConverter *)0x0;
  this->BaseConverter = (IChannelFormatConverter *)0x0;
  this->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  if (this != param_1) {
    (this->Storage).Ptr = (param_1->Storage).Ptr;
    (param_1->Storage).Ptr = (IChannelFormatConverter *)0x0;
  }
  this->BaseConverter = param_1->BaseConverter;
  this->SimpleUpmixer = param_1->SimpleUpmixer;
  param_1->BaseConverter = (IChannelFormatConverter *)0x0;
  param_1->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  return this;
}

// FChannelFormatConverterWrapper @ 14f0b6460

FChannelFormatConverterWrapper * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::FChannelFormatConverterWrapper
          (FChannelFormatConverterWrapper *this,
          TUniquePtr<Audio::FSimpleUpmixer,TDefaultDelete<Audio::FSimpleUpmixer>_> param_1)

{
  (this->Storage).Ptr = (IChannelFormatConverter *)0x0;
  this->BaseConverter = (IChannelFormatConverter *)0x0;
  this->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  this->BaseConverter = (IChannelFormatConverter *)(param_1.Ptr)->_padding_;
  this->SimpleUpmixer = (FSimpleUpmixer *)(param_1.Ptr)->_padding_;
  (this->Storage).Ptr = (IChannelFormatConverter *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  return this;
}

// FChannelFormatConverterWrapper @ 14f0b6490

FChannelFormatConverterWrapper * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::FChannelFormatConverterWrapper
          (FChannelFormatConverterWrapper *this,
          TUniquePtr<Audio::IChannelFormatConverter,TDefaultDelete<Audio::IChannelFormatConverter>_>
          param_1)

{
  IChannelFormatConverter IVar1;
  
  this->BaseConverter = (IChannelFormatConverter *)0x0;
  (this->Storage).Ptr = (IChannelFormatConverter *)0x0;
  this->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  this->BaseConverter = (IChannelFormatConverter *)*param_1.Ptr;
  if (this != (FChannelFormatConverterWrapper *)param_1.Ptr) {
    (this->Storage).Ptr = (IChannelFormatConverter *)*param_1.Ptr;
    *param_1.Ptr = (IChannelFormatConverter)0x0;
  }
  IVar1 = *param_1.Ptr;
  if (IVar1 != (IChannelFormatConverter)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return this;
}

// operator= @ 14f0c0e70

FChannelFormatConverterWrapper * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::operator=
          (FChannelFormatConverterWrapper *this,FChannelFormatConverterWrapper *param_1)

{
  IChannelFormatConverter *pIVar1;
  
  if (this != param_1) {
    pIVar1 = (this->Storage).Ptr;
    (this->Storage).Ptr = (param_1->Storage).Ptr;
    (param_1->Storage).Ptr = (IChannelFormatConverter *)0x0;
    if (pIVar1 != (IChannelFormatConverter *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  this->BaseConverter = param_1->BaseConverter;
  this->SimpleUpmixer = param_1->SimpleUpmixer;
  param_1->BaseConverter = (IChannelFormatConverter *)0x0;
  param_1->SimpleUpmixer = (FSimpleUpmixer *)0x0;
  return this;
}

// GetInputFormat @ 14f0d95d0

FInputFormat * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::GetInputFormat
          (FChannelFormatConverterWrapper *this)

{
  FInputFormat *pFVar1;
  
  if (this->BaseConverter != (IChannelFormatConverter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0d95dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FInputFormat *)(**(code **)((longlong)*this->BaseConverter + 8))();
    return pFVar1;
  }
  return &DefaultInputFormat;
}

// GetOutputFormat @ 14f0da580

FOutputFormat * __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::GetOutputFormat
          (FChannelFormatConverterWrapper *this)

{
  FOutputFormat *pFVar1;
  
  if (this->BaseConverter != (IChannelFormatConverter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0da58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar1 = (FOutputFormat *)(**(code **)((longlong)*this->BaseConverter + 0x10))();
    return pFVar1;
  }
  return &DefaultOutputFormat;
}

// GetRearChannelFlip @ 14f0dd980

bool __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::GetRearChannelFlip
          (FChannelFormatConverterWrapper *this)

{
  if (this->SimpleUpmixer != (FSimpleUpmixer *)0x0) {
    return this->SimpleUpmixer->bDoRearChannelFlip;
  }
  return false;
}

// IsValid @ 14f0e7bc0

bool __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::IsValid
          (FChannelFormatConverterWrapper *this)

{
  if (((this->Storage).Ptr != (IChannelFormatConverter *)0x0) &&
     (this->BaseConverter != (IChannelFormatConverter *)0x0)) {
    return true;
  }
  return false;
}

// ProcessAudio @ 14f0f1990

void __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::ProcessAudio
          (FChannelFormatConverterWrapper *this,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  if (this->BaseConverter != (IChannelFormatConverter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f0f199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->BaseConverter + 0x18))();
    return;
  }
  return;
}

// SetRearChannelBleed @ 14f100370

void __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::SetRearChannelBleed
          (FChannelFormatConverterWrapper *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FSimpleUpmixer *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  this_00 = this->SimpleUpmixer;
  if (this_00 != (FSimpleUpmixer *)0x0) {
    uVar3 = (this_00->FrontChannelIndices).ArrayNum;
    uVar7 = (ulonglong)(int)uVar3;
    pFVar9 = (this_00->FrontChannelIndices).AllocatorInstance.Data;
    pFVar1 = pFVar9 + uVar7 * 4;
    while( true ) {
      if ((this_00->FrontChannelIndices).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      iVar4 = *(int *)pFVar9;
      pTVar6 = FSimpleUpmixer::GetPairedRearChannelIndices(this_00,iVar4);
      pFVar8 = (pTVar6->AllocatorInstance).Data;
      iVar5 = pTVar6->ArrayNum;
      pFVar2 = pFVar8 + (longlong)iVar5 * 4;
      while( true ) {
        if (pTVar6->ArrayNum != iVar5) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar8 == pFVar2) break;
        FBaseChannelFormatConverter::SetMixGain
                  ((FBaseChannelFormatConverter *)this_00,iVar4,*(int *)pFVar8,param_1,param_2);
        pFVar8 = pFVar8 + 4;
      }
      uVar7 = (ulonglong)uVar3;
      pFVar9 = pFVar9 + 4;
    }
    FSimpleUpmixer::UpdateOutputGain(this_00,param_2);
  }
  return;
}

// SetRearChannelFlip @ 14f100570

void __thiscall
Audio::FConvolutionReverb::FChannelFormatConverterWrapper::SetRearChannelFlip
          (FChannelFormatConverterWrapper *this,bool param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  FSimpleUpmixer *this_00;
  code *pcVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackX_20 [8];
  undefined1 auStack_98 [4];
  float fStack_94;
  uint uStack_90;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_80;
  ForAnyElementType FStack_78;
  undefined8 uStack_70;
  TArray<float,TSizedDefaultAllocator<32>_> aTStack_68 [2];
  
  this_00 = this->SimpleUpmixer;
  if (this_00 == (FSimpleUpmixer *)0x0) {
    return;
  }
  if (this_00->bDoRearChannelFlip != param_1) {
    pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)
              (this_00->FrontChannelIndices).AllocatorInstance.Data;
    uStack_90 = (this_00->FrontChannelIndices).ArrayNum;
    uVar11 = (ulonglong)(int)uStack_90;
    pTStack_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)&(pTVar10->AllocatorInstance).Data + uVar11 * 4);
    FStack_78.Data = (FScriptContainerElement *)0x0;
    uStack_70 = 0;
    while( true ) {
      pTVar4 = pTStack_80;
      pTStack_88 = pTVar10;
      if ((this_00->FrontChannelIndices).ArrayNum != (int)uVar11) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (pTVar10 == pTVar4) break;
      iVar8 = *(int *)&(pTVar10->AllocatorInstance).Data;
      pTVar10 = FSimpleUpmixer::GetPairedRearChannelIndices(this_00,iVar8);
      aTStack_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      aTStack_68[0].ArrayNum = 0;
      aTStack_68[0].ArrayMax = 0;
      pFVar13 = (pTVar10->AllocatorInstance).Data;
      iVar1 = pTVar10->ArrayNum;
      pFVar14 = pFVar13 + (longlong)iVar1 * 4;
      while( true ) {
        if (pTVar10->ArrayNum != iVar1) {
          auStack_98[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_98);
        }
        if (pFVar13 == pFVar14) break;
        iVar2 = *(int *)pFVar13;
        fStack_94 = FBaseChannelFormatConverter::GetTargetMixGain
                              ((FBaseChannelFormatConverter *)this_00,iVar8,iVar2);
        if (((aTStack_68[0].AllocatorInstance.Data <= (FScriptContainerElement *)&fStack_94) &&
            ((FScriptContainerElement *)&fStack_94 <
             aTStack_68[0].AllocatorInstance.Data + (longlong)aTStack_68[0].ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = aTStack_68[0].ArrayNum;
        if (aTStack_68[0].ArrayNum == aTStack_68[0].ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&aTStack_68[0].AllocatorInstance,&aTStack_68[0].ArrayMax);
        }
        aTStack_68[0].ArrayNum = iVar7 + 1;
        *(float *)(aTStack_68[0].AllocatorInstance.Data + (longlong)iVar7 * 4) = fStack_94;
        FBaseChannelFormatConverter::SetMixGain
                  ((FBaseChannelFormatConverter *)this_00,iVar8,iVar2,0.0,param_2);
        pFVar13 = pFVar13 + 4;
      }
      if (((FStack_78.Data <= aTStack_68) &&
          (aTStack_68 <
           (TArray<float,TSizedDefaultAllocator<32>_> *)
           (FStack_78.Data + (longlong)uStack_70._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (int)uStack_70;
      if ((int)uStack_70 == uStack_70._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&FStack_78,(int *)((longlong)&uStack_70 + 4));
      }
      FVar5.Data = aTStack_68[0].AllocatorInstance.Data;
      pFVar14 = FStack_78.Data + (longlong)iVar8 * 0x10;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar8 + 1);
      *(FScriptContainerElement **)&pFVar14->field_0x0 = (FScriptContainerElement *)0x0;
      lVar16 = (longlong)aTStack_68[0].ArrayNum;
      *(int *)(pFVar14 + 8) = aTStack_68[0].ArrayNum;
      if (aTStack_68[0].ArrayNum == 0) {
        *(int *)(pFVar14 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,aTStack_68[0].ArrayNum,0,(ForAnyElementType *)pFVar14,aTStack_68[0].ArrayNum,
                   (int *)(pFVar14 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar14->field_0x0,FVar5.Data,lVar16 << 2);
      }
      if (aTStack_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aTStack_68[0].AllocatorInstance.Data);
      }
      uVar11 = (ulonglong)uStack_90;
      pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                ((longlong)&(pTStack_88->AllocatorInstance).Data + 4);
    }
    uVar15 = 0;
    this_00->bDoRearChannelFlip = param_1;
    if (0 < (int)uStack_70) {
      lVar16 = 0;
      pTStack_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      do {
        pTVar10 = pTStack_88;
        uVar12 = 0;
        if ((int)uVar15 < (this_00->FrontChannelIndices).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_90 = *(uint *)((this_00->FrontChannelIndices).AllocatorInstance.Data +
                             (longlong)&(pTVar10->AllocatorInstance).Data);
        pTStack_80 = FSimpleUpmixer::GetPairedRearChannelIndices(this_00,uStack_90);
        uVar12 = 0;
        iVar8 = pTStack_80->ArrayNum;
        if (0 < iVar8) {
          lVar17 = 0;
          do {
            pTVar10 = pTStack_80;
            uVar9 = 0;
            if ((int)uVar12 < iVar8) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = *(int *)((pTVar10->AllocatorInstance).Data + lVar17);
            uVar9 = 0;
            if ((int)uVar15 < (int)uStack_70) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar5.Data = FStack_78.Data;
            uVar9 = 0;
            if ((int)uVar12 < *(int *)(FStack_78.Data + lVar16 + 8)) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FBaseChannelFormatConverter::SetMixGain
                      ((FBaseChannelFormatConverter *)this_00,uStack_90,iVar8,
                       *(float *)(*(longlong *)(FVar5.Data + lVar16) + lVar17),param_2);
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + 4;
            iVar8 = pTStack_80->ArrayNum;
          } while ((int)uVar12 < iVar8);
        }
        uVar15 = uVar15 + 1;
        pTStack_88 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((longlong)&(pTStack_88->AllocatorInstance).Data + 4);
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar15 < (int)uStack_70);
    }
    FSimpleUpmixer::UpdateOutputGain(this_00,param_2);
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)FStack_78.Data,(int)uStack_70);
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)FStack_78.Data !=
        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
  }
  return;
}

