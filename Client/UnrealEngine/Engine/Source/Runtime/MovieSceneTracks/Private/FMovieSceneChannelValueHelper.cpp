// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double> @ 146596080

FMovieSceneChannelValueHelper * __thiscall
FMovieSceneChannelValueHelper::FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
          (FMovieSceneChannelValueHelper *this,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,double *param_2,
          TOptional<TTuple<FKeyHandle,FFrameNumber>_> *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> *pTVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  bool bVar25;
  FMovieSceneChannelValueHelper *pFVar26;
  FMovieSceneChannelValueHelper *pFVar27;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> *pTVar28;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  uVar5 = param_1->field_0x0;
  uVar6 = param_1->field_0x1;
  uVar7 = param_1->field_0x2;
  uVar8 = param_1->field_0x3;
  uVar9 = param_1->field_0x4;
  uVar10 = param_1->field_0x5;
  uVar11 = param_1->field_0x6;
  uVar12 = param_1->field_0x7;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar13 = param_1->field_0x10;
  uVar14 = param_1->field_0x11;
  uVar15 = param_1->field_0x12;
  uVar16 = param_1->field_0x13;
  uVar17 = param_1->field_0x14;
  uVar18 = param_1->field_0x15;
  uVar19 = param_1->field_0x16;
  uVar20 = param_1->field_0x17;
  uVar21 = param_1->field_0x18;
  uVar22 = param_1->field_0x19;
  uVar23 = param_1->field_0x1a;
  uVar24 = param_1->field_0x1b;
  (this->Impl).bIsValid = true;
  (this->Impl).bInline = true;
  (this->Impl).Data.Pad[0x10] = '\0';
  *(undefined ***)(this->Impl).Data.Pad =
       &___7__TChannelValueHelper_UFMovieSceneDoubleChannel__N_MovieSceneImpl__6B_;
  pTVar4 = &this->Impl;
  (pTVar4->Data).Pad[0x18] = uVar5;
  (pTVar4->Data).Pad[0x19] = uVar6;
  (pTVar4->Data).Pad[0x1a] = uVar7;
  (pTVar4->Data).Pad[0x1b] = uVar8;
  (pTVar4->Data).Pad[0x1c] = uVar9;
  (pTVar4->Data).Pad[0x1d] = uVar10;
  (pTVar4->Data).Pad[0x1e] = uVar11;
  (pTVar4->Data).Pad[0x1f] = uVar12;
  *(longlong *)((this->Impl).Data.Pad + 0x20) = lVar2;
  pTVar4 = &this->Impl;
  (pTVar4->Data).Pad[0x28] = uVar13;
  (pTVar4->Data).Pad[0x29] = uVar14;
  (pTVar4->Data).Pad[0x2a] = uVar15;
  (pTVar4->Data).Pad[0x2b] = uVar16;
  (pTVar4->Data).Pad[0x2c] = uVar17;
  (pTVar4->Data).Pad[0x2d] = uVar18;
  (pTVar4->Data).Pad[0x2e] = uVar19;
  (pTVar4->Data).Pad[0x2f] = uVar20;
  pTVar4 = &this->Impl;
  (pTVar4->Data).Pad[0x30] = uVar21;
  (pTVar4->Data).Pad[0x31] = uVar22;
  (pTVar4->Data).Pad[0x32] = uVar23;
  (pTVar4->Data).Pad[0x33] = uVar24;
  *(double **)((this->Impl).Data.Pad + 0x38) = param_2;
  if ((!(this->Impl).bIsValid) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar25)) {
    pcVar3 = (code *)swi(3);
    pFVar26 = (FMovieSceneChannelValueHelper *)(*pcVar3)();
    return pFVar26;
  }
  pFVar26 = this;
  if (!(this->Impl).bInline) {
    pFVar26 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((!(this->Impl).bIsValid) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar25)) {
    pcVar3 = (code *)swi(3);
    pFVar26 = (FMovieSceneChannelValueHelper *)(*pcVar3)();
    return pFVar26;
  }
  pFVar27 = this;
  if (!(this->Impl).bInline) {
    pFVar27 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((pFVar26 != pFVar27) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar25)) {
    pcVar3 = (code *)swi(3);
    pFVar26 = (FMovieSceneChannelValueHelper *)(*pcVar3)();
    return pFVar26;
  }
  if ((!(this->Impl).bIsValid) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar25)) {
    pcVar3 = (code *)swi(3);
    pFVar26 = (FMovieSceneChannelValueHelper *)(*pcVar3)();
    return pFVar26;
  }
  pFVar26 = this;
  if (!(this->Impl).bInline) {
    pFVar26 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  pTVar28 = (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *)((pFVar26->Impl).Data.Pad + 8);
  if (param_3 != pTVar28) {
    if (param_3->bIsSet == false) {
      if ((pFVar26->Impl).Data.Pad[0x10] != '\0') {
        (pFVar26->Impl).Data.Pad[0x10] = '\0';
        return this;
      }
    }
    else {
      pTVar28->TypedValue = param_3->TypedValue;
      (pFVar26->Impl).Data.Pad[0x10] = '\x01';
    }
  }
  return this;
}

// FindFirstKey<FMovieSceneDoubleChannel> @ 1465be5b0

TOptional<TTuple<FKeyHandle,FFrameNumber>_> * __cdecl
FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
          (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *__return_storage_ptr__,
          FMovieSceneDoubleChannel *param_1,TArrayView<FKeyHandle_const_,int> *param_2)

{
  FKeyHandle *pFVar1;
  FKeyHandle FVar2;
  int iVar3;
  code *pcVar4;
  TTuple<FKeyHandle,FFrameNumber> TVar5;
  bool bVar6;
  int iVar7;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> *pTVar8;
  FFrameNumber *pFVar9;
  FKeyHandle *pFVar10;
  TArrayView<FFrameNumber,int> local_48;
  FMovieSceneChannelData local_38;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_20;
  
  if (param_1 != (FMovieSceneDoubleChannel *)0x0) {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,(FMovieSceneChannel *)param_1,&param_1->Times,
               (FKeyHandleLookupTable *)&param_1->KeyHandles);
    local_20 = &param_1->Values;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *)(*pcVar4)();
      return pTVar8;
    }
    pFVar10 = param_2->DataPtr;
    pFVar1 = pFVar10 + param_2->ArrayNum;
    for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
      FVar2.Index = pFVar10->Index;
      iVar7 = FMovieSceneChannelData::GetIndex(&local_38,FVar2);
      if (iVar7 != -1) {
        local_48.DataPtr = (FFrameNumber *)((local_38.Times)->AllocatorInstance).Data;
        iVar3 = (local_38.Times)->ArrayNum;
        if ((iVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *)(*pcVar4)();
          return pTVar8;
        }
        local_48.ArrayNum = iVar3;
        pFVar9 = TArrayView<FFrameNumber,int>::operator[](&local_48,iVar7);
        __return_storage_ptr__->bIsSet = true;
        TVar5._4_4_ = pFVar9->Value;
        TVar5._0_4_ = FVar2.Index;
        __return_storage_ptr__->TypedValue = TVar5;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ~FMovieSceneChannelValueHelper @ 146620c20

void __thiscall
FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(FMovieSceneChannelValueHelper *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  FMovieSceneChannelValueHelper *pFVar3;
  
  puVar1 = &(this->Impl).field_0x40;
  uVar2 = *puVar1;
  if ((this->Impl).bIsValid) {
    pFVar3 = this;
    if (!(this->Impl).bInline) {
      pFVar3 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
    }
    (this->Impl).field_0x40 = uVar2 & 0xfe;
    (*(code *)**(undefined8 **)(pFVar3->Impl).Data.Pad)(pFVar3,0);
    if (!(this->Impl).bInline) {
      FMemory::Free(*(void **)(this->Impl).Data.Pad);
      return;
    }
  }
  return;
}

// FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double> @ 14672a320

FMovieSceneChannelValueHelper * __thiscall
FMovieSceneChannelValueHelper::FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
          (FMovieSceneChannelValueHelper *this,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,double *param_2,
          TArrayView<FKeyHandle_const_,int> *param_3)

{
  undefined1 *puVar1;
  FKeyHandle *pFVar2;
  FKeyHandle FVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> *pTVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  FMovieSceneChannelValueHelper *pFVar31;
  FMovieSceneChannelValueHelper *pFVar32;
  FMovieSceneChannel *pFVar33;
  uchar *puVar34;
  FFrameNumber *pFVar35;
  FKeyHandle *pFVar36;
  undefined8 local_68 [2];
  FKeyHandle *local_58;
  undefined8 uStack_50;
  TArrayView<FFrameNumber,int> local_48;
  FMovieSceneChannelData local_38;
  undefined1 *local_20;
  
  uVar8 = param_1->field_0x0;
  uVar9 = param_1->field_0x1;
  uVar10 = param_1->field_0x2;
  uVar11 = param_1->field_0x3;
  uVar12 = param_1->field_0x4;
  uVar13 = param_1->field_0x5;
  uVar14 = param_1->field_0x6;
  uVar15 = param_1->field_0x7;
  lVar5 = *(longlong *)&param_1->field_0x8;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  uVar16 = param_1->field_0x10;
  uVar17 = param_1->field_0x11;
  uVar18 = param_1->field_0x12;
  uVar19 = param_1->field_0x13;
  uVar20 = param_1->field_0x14;
  uVar21 = param_1->field_0x15;
  uVar22 = param_1->field_0x16;
  uVar23 = param_1->field_0x17;
  uVar24 = param_1->field_0x18;
  uVar25 = param_1->field_0x19;
  uVar26 = param_1->field_0x1a;
  uVar27 = param_1->field_0x1b;
  (this->Impl).bIsValid = true;
  (this->Impl).bInline = true;
  (this->Impl).Data.Pad[0x10] = '\0';
  *(undefined ***)(this->Impl).Data.Pad =
       &___7__TChannelValueHelper_UFMovieSceneDoubleChannel__N_MovieSceneImpl__6B_;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x18] = uVar8;
  (pTVar7->Data).Pad[0x19] = uVar9;
  (pTVar7->Data).Pad[0x1a] = uVar10;
  (pTVar7->Data).Pad[0x1b] = uVar11;
  (pTVar7->Data).Pad[0x1c] = uVar12;
  (pTVar7->Data).Pad[0x1d] = uVar13;
  (pTVar7->Data).Pad[0x1e] = uVar14;
  (pTVar7->Data).Pad[0x1f] = uVar15;
  *(longlong *)((this->Impl).Data.Pad + 0x20) = lVar5;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x28] = uVar16;
  (pTVar7->Data).Pad[0x29] = uVar17;
  (pTVar7->Data).Pad[0x2a] = uVar18;
  (pTVar7->Data).Pad[0x2b] = uVar19;
  (pTVar7->Data).Pad[0x2c] = uVar20;
  (pTVar7->Data).Pad[0x2d] = uVar21;
  (pTVar7->Data).Pad[0x2e] = uVar22;
  (pTVar7->Data).Pad[0x2f] = uVar23;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x30] = uVar24;
  (pTVar7->Data).Pad[0x31] = uVar25;
  (pTVar7->Data).Pad[0x32] = uVar26;
  (pTVar7->Data).Pad[0x33] = uVar27;
  *(double **)((this->Impl).Data.Pad + 0x38) = param_2;
  if ((!(this->Impl).bIsValid) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar31 = this;
  if (!(this->Impl).bInline) {
    pFVar31 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((!(this->Impl).bIsValid) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar32 = this;
  if (!(this->Impl).bInline) {
    pFVar32 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((pFVar31 != pFVar32) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar33 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  local_58 = param_3->DataPtr;
  uStack_50 = *(undefined8 *)&param_3->ArrayNum;
  if (pFVar33 != (FMovieSceneChannel *)0x0) {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar33,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar33[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar33[1].KeyDeletedEvent.field_0x10);
    local_20 = &pFVar33[1].KeyAddedEvent.field_0x10;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (undefined1 *)0x0)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar28)) {
      pcVar6 = (code *)swi(3);
      pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
      return pFVar31;
    }
    pFVar2 = local_58 + (int)uStack_50;
    for (pFVar36 = local_58; pFVar36 != pFVar2; pFVar36 = pFVar36 + 1) {
      FVar3.Index = pFVar36->Index;
      iVar30 = FMovieSceneChannelData::GetIndex(&local_38,FVar3);
      if (iVar30 != -1) {
        local_48.DataPtr = (FFrameNumber *)((local_38.Times)->AllocatorInstance).Data;
        iVar4 = (local_38.Times)->ArrayNum;
        if ((iVar4 < 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar28)) {
          pcVar6 = (code *)swi(3);
          pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
          return pFVar31;
        }
        local_48.ArrayNum = iVar4;
        pFVar35 = TArrayView<FFrameNumber,int>::operator[](&local_48,iVar30);
        bVar28 = true;
        local_68[0] = CONCAT44(pFVar35->Value,FVar3.Index);
        goto LAB_14672a4cb;
      }
    }
  }
  bVar28 = false;
LAB_14672a4cb:
  if ((!(this->Impl).bIsValid) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar29)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar31 = this;
  if (!(this->Impl).bInline) {
    pFVar31 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  puVar34 = (pFVar31->Impl).Data.Pad + 8;
  if ((uchar *)local_68 != puVar34) {
    if (bVar28) {
      *(undefined8 *)puVar34 = local_68[0];
      (pFVar31->Impl).Data.Pad[0x10] = '\x01';
      return this;
    }
    if ((pFVar31->Impl).Data.Pad[0x10] != '\0') {
      (pFVar31->Impl).Data.Pad[0x10] = '\0';
    }
  }
  return this;
}

// FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float> @ 14672a860

FMovieSceneChannelValueHelper * __thiscall
FMovieSceneChannelValueHelper::FMovieSceneChannelValueHelper<FMovieSceneFloatChannel,float>
          (FMovieSceneChannelValueHelper *this,
          TMovieSceneChannelHandle<FMovieSceneFloatChannel> *param_1,float *param_2,
          TArrayView<FKeyHandle_const_,int> *param_3)

{
  undefined1 *puVar1;
  FKeyHandle *pFVar2;
  FKeyHandle FVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> *pTVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  FMovieSceneChannelValueHelper *pFVar31;
  FMovieSceneChannelValueHelper *pFVar32;
  FMovieSceneChannel *pFVar33;
  uchar *puVar34;
  FFrameNumber *pFVar35;
  FKeyHandle *pFVar36;
  undefined8 local_68 [2];
  FKeyHandle *local_58;
  undefined8 uStack_50;
  TArrayView<FFrameNumber,int> local_48;
  FMovieSceneChannelData local_38;
  undefined1 *local_20;
  
  uVar8 = param_1->field_0x0;
  uVar9 = param_1->field_0x1;
  uVar10 = param_1->field_0x2;
  uVar11 = param_1->field_0x3;
  uVar12 = param_1->field_0x4;
  uVar13 = param_1->field_0x5;
  uVar14 = param_1->field_0x6;
  uVar15 = param_1->field_0x7;
  lVar5 = *(longlong *)&param_1->field_0x8;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  uVar16 = param_1->field_0x10;
  uVar17 = param_1->field_0x11;
  uVar18 = param_1->field_0x12;
  uVar19 = param_1->field_0x13;
  uVar20 = param_1->field_0x14;
  uVar21 = param_1->field_0x15;
  uVar22 = param_1->field_0x16;
  uVar23 = param_1->field_0x17;
  uVar24 = param_1->field_0x18;
  uVar25 = param_1->field_0x19;
  uVar26 = param_1->field_0x1a;
  uVar27 = param_1->field_0x1b;
  (this->Impl).bIsValid = true;
  (this->Impl).bInline = true;
  (this->Impl).Data.Pad[0x10] = '\0';
  *(undefined ***)(this->Impl).Data.Pad =
       &___7__TChannelValueHelper_UFMovieSceneFloatChannel__M_MovieSceneImpl__6B_;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x18] = uVar8;
  (pTVar7->Data).Pad[0x19] = uVar9;
  (pTVar7->Data).Pad[0x1a] = uVar10;
  (pTVar7->Data).Pad[0x1b] = uVar11;
  (pTVar7->Data).Pad[0x1c] = uVar12;
  (pTVar7->Data).Pad[0x1d] = uVar13;
  (pTVar7->Data).Pad[0x1e] = uVar14;
  (pTVar7->Data).Pad[0x1f] = uVar15;
  *(longlong *)((this->Impl).Data.Pad + 0x20) = lVar5;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x28] = uVar16;
  (pTVar7->Data).Pad[0x29] = uVar17;
  (pTVar7->Data).Pad[0x2a] = uVar18;
  (pTVar7->Data).Pad[0x2b] = uVar19;
  (pTVar7->Data).Pad[0x2c] = uVar20;
  (pTVar7->Data).Pad[0x2d] = uVar21;
  (pTVar7->Data).Pad[0x2e] = uVar22;
  (pTVar7->Data).Pad[0x2f] = uVar23;
  pTVar7 = &this->Impl;
  (pTVar7->Data).Pad[0x30] = uVar24;
  (pTVar7->Data).Pad[0x31] = uVar25;
  (pTVar7->Data).Pad[0x32] = uVar26;
  (pTVar7->Data).Pad[0x33] = uVar27;
  *(float **)((this->Impl).Data.Pad + 0x38) = param_2;
  if ((!(this->Impl).bIsValid) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar31 = this;
  if (!(this->Impl).bInline) {
    pFVar31 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((!(this->Impl).bIsValid) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar32 = this;
  if (!(this->Impl).bInline) {
    pFVar32 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  if ((pFVar31 != pFVar32) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar28)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar33 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  local_58 = param_3->DataPtr;
  uStack_50 = *(undefined8 *)&param_3->ArrayNum;
  if (pFVar33 != (FMovieSceneChannel *)0x0) {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar33,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar33[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar33[1].KeyDeletedEvent.field_0x8);
    local_20 = &pFVar33[1].KeyAddedEvent.field_0x10;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (undefined1 *)0x0)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar28)) {
      pcVar6 = (code *)swi(3);
      pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
      return pFVar31;
    }
    pFVar2 = local_58 + (int)uStack_50;
    for (pFVar36 = local_58; pFVar36 != pFVar2; pFVar36 = pFVar36 + 1) {
      FVar3.Index = pFVar36->Index;
      iVar30 = FMovieSceneChannelData::GetIndex(&local_38,FVar3);
      if (iVar30 != -1) {
        local_48.DataPtr = (FFrameNumber *)((local_38.Times)->AllocatorInstance).Data;
        iVar4 = (local_38.Times)->ArrayNum;
        if ((iVar4 < 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar28)) {
          pcVar6 = (code *)swi(3);
          pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
          return pFVar31;
        }
        local_48.ArrayNum = iVar4;
        pFVar35 = TArrayView<FFrameNumber,int>::operator[](&local_48,iVar30);
        bVar28 = true;
        local_68[0] = CONCAT44(pFVar35->Value,FVar3.Index);
        goto LAB_14672aa0b;
      }
    }
  }
  bVar28 = false;
LAB_14672aa0b:
  if ((!(this->Impl).bIsValid) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsValid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                          ,0x97,
                          L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                         ), bVar29)) {
    pcVar6 = (code *)swi(3);
    pFVar31 = (FMovieSceneChannelValueHelper *)(*pcVar6)();
    return pFVar31;
  }
  pFVar31 = this;
  if (!(this->Impl).bInline) {
    pFVar31 = *(FMovieSceneChannelValueHelper **)(this->Impl).Data.Pad;
  }
  puVar34 = (pFVar31->Impl).Data.Pad + 8;
  if ((uchar *)local_68 != puVar34) {
    if (bVar28) {
      *(undefined8 *)puVar34 = local_68[0];
      (pFVar31->Impl).Data.Pad[0x10] = '\x01';
      return this;
    }
    if ((pFVar31->Impl).Data.Pad[0x10] != '\0') {
      (pFVar31->Impl).Data.Pad[0x10] = '\0';
    }
  }
  return this;
}

// FindFirstKey<FMovieSceneFloatChannel> @ 146741e00

TOptional<TTuple<FKeyHandle,FFrameNumber>_> * __cdecl
FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneFloatChannel>
          (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *__return_storage_ptr__,
          FMovieSceneFloatChannel *param_1,TArrayView<FKeyHandle_const_,int> *param_2)

{
  FKeyHandle *pFVar1;
  FKeyHandle FVar2;
  int iVar3;
  code *pcVar4;
  TTuple<FKeyHandle,FFrameNumber> TVar5;
  bool bVar6;
  int iVar7;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> *pTVar8;
  FFrameNumber *pFVar9;
  FKeyHandle *pFVar10;
  TArrayView<FFrameNumber,int> local_48;
  FMovieSceneChannelData local_38;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_20;
  
  if (param_1 != (FMovieSceneFloatChannel *)0x0) {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,(FMovieSceneChannel *)param_1,&param_1->Times,
               (FKeyHandleLookupTable *)&param_1->KeyHandles);
    local_20 = &param_1->Values;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *)(*pcVar4)();
      return pTVar8;
    }
    pFVar10 = param_2->DataPtr;
    pFVar1 = pFVar10 + param_2->ArrayNum;
    for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
      FVar2.Index = pFVar10->Index;
      iVar7 = FMovieSceneChannelData::GetIndex(&local_38,FVar2);
      if (iVar7 != -1) {
        local_48.DataPtr = (FFrameNumber *)((local_38.Times)->AllocatorInstance).Data;
        iVar3 = (local_38.Times)->ArrayNum;
        if ((iVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TOptional<TTuple<FKeyHandle,FFrameNumber>_> *)(*pcVar4)();
          return pTVar8;
        }
        local_48.ArrayNum = iVar3;
        pFVar9 = TArrayView<FFrameNumber,int>::operator[](&local_48,iVar7);
        __return_storage_ptr__->bIsSet = true;
        TVar5._4_4_ = pFVar9->Value;
        TVar5._0_4_ = FVar2.Index;
        __return_storage_ptr__->TypedValue = TVar5;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

