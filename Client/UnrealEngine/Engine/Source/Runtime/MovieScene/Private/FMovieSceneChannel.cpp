// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 21

// StaticStruct @ 146060c60

UScriptStruct * __cdecl FMovieSceneChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChannel.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChannel,(UObject *)pUVar1,
                         L"MovieSceneChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneChannel.OuterSingleton;
}

// ChangeFrameResolution @ 146060ce0

void __thiscall
FMovieSceneChannel::ChangeFrameResolution
          (FMovieSceneChannel *this,FFrameRate param_1,FFrameRate param_2)

{
  code *pcVar1;
  FFrameRateRetiming *pFVar2;
  FFrameRateRetiming local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  pFVar2 = UE::MovieScene::FFrameRateRetiming::FFrameRateRetiming(&local_28,param_1,param_2);
  (*pcVar1)(this,pFVar2);
  return;
}

// ClearDefault @ 146060d20

void __thiscall FMovieSceneChannel::ClearDefault(FMovieSceneChannel *this)

{
  return;
}

// PostEditChange @ 146060d30

void __thiscall FMovieSceneChannel::PostEditChange(FMovieSceneChannel *this)

{
  return;
}

// GetHandle @ 146060d40

FKeyHandle __thiscall FMovieSceneChannel::GetHandle(FMovieSceneChannel *this,int param_1)

{
  undefined4 in_register_00000014;
  
  FKeyHandle::FKeyHandle((FKeyHandle *)CONCAT44(in_register_00000014,param_1));
  return (FKeyHandle)param_1;
}

// GetIndex @ 146060d60

int __thiscall FMovieSceneChannel::GetIndex(FMovieSceneChannel *this,FKeyHandle param_1)

{
  return -1;
}

// ~FMovieSceneChannel @ 146097940

void __thiscall FMovieSceneChannel::~FMovieSceneChannel(FMovieSceneChannel *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneChannel__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->KeyMovedEvent).field_0x8,*(int *)&(this->KeyMovedEvent).field_0x10);
  pvVar1 = *(void **)&(this->KeyMovedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->KeyMovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->KeyDeletedEvent).field_0x8,*(int *)&(this->KeyDeletedEvent).field_0x10);
  pvVar1 = *(void **)&(this->KeyDeletedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->KeyDeletedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->KeyAddedEvent).field_0x8,*(int *)&(this->KeyAddedEvent).field_0x10);
  pvVar1 = *(void **)&(this->KeyAddedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->KeyAddedEvent);
  return;
}

// ComputeEffectiveRange @ 1460b5d40

TRange<FFrameNumber> * __thiscall
FMovieSceneChannel::ComputeEffectiveRange
          (FMovieSceneChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res10;
  uint local_res18;
  
  local_res18 = local_res18 & 0xffffff00;
  local_res10 = local_res10 & 0xffffff00;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res10;
  __return_storage_ptr__->LowerBound = TVar1;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res18;
  __return_storage_ptr__->UpperBound = TVar2;
  return __return_storage_ptr__;
}

// DeleteKeys @ 1460bad70

void __thiscall
FMovieSceneChannel::DeleteKeys(FMovieSceneChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  return;
}

// DeleteKeysFrom @ 1460bc360

void __thiscall
FMovieSceneChannel::DeleteKeysFrom(FMovieSceneChannel *this,FFrameNumber param_1,bool param_2)

{
  return;
}

// DuplicateKeys @ 1460c1710

void __thiscall
FMovieSceneChannel::DuplicateKeys
          (FMovieSceneChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  return;
}

// GetKeyTime @ 1460cd390

void __thiscall
FMovieSceneChannel::GetKeyTime(FMovieSceneChannel *this,FKeyHandle param_1,FFrameNumber *param_2)

{
  undefined4 uVar1;
  uint local_res10 [6];
  FFrameNumber *local_28;
  undefined4 uStack_20;
  uint *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  local_28._0_4_ = SUB84(param_2,0);
  uStack_20 = 1;
  uStack_10 = 1;
  local_res10[0] = param_1.Index;
  uVar1 = local_28._0_4_;
  local_28 = param_2;
  (**(code **)(this->_padding_ + 0x10))(uVar1,&local_18,&local_28);
  return;
}

// GetKeyTimes @ 1460cd430

void __thiscall
FMovieSceneChannel::GetKeyTimes
          (FMovieSceneChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  return;
}

// GetKeys @ 1460cd6f0

void __thiscall
FMovieSceneChannel::GetKeys
          (FMovieSceneChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// GetNumKeys @ 1460ce240

int __thiscall FMovieSceneChannel::GetNumKeys(FMovieSceneChannel *this)

{
  return 0;
}

// Offset @ 1460da900

void __thiscall FMovieSceneChannel::Offset(FMovieSceneChannel *this,FFrameNumber param_1)

{
  return;
}

// Optimize @ 1460dddb0

void __thiscall
FMovieSceneChannel::Optimize(FMovieSceneChannel *this,FKeyDataOptimizationParams *param_1)

{
  return;
}

// RemapTimes @ 1460e7670

void __thiscall FMovieSceneChannel::RemapTimes(FMovieSceneChannel *this,IRetimingInterface *param_1)

{
  return;
}

// Reset @ 1460e9360

void __thiscall FMovieSceneChannel::Reset(FMovieSceneChannel *this)

{
  return;
}

// SetKeyTime @ 1460f70f0

void __thiscall
FMovieSceneChannel::SetKeyTime(FMovieSceneChannel *this,FKeyHandle param_1,FFrameNumber param_2)

{
  uint local_res10 [2];
  int local_res18 [4];
  int *local_28;
  undefined4 uStack_20;
  uint *local_18;
  undefined4 uStack_10;
  
  local_28 = local_res18;
  local_18 = local_res10;
  uStack_20 = 1;
  uStack_10 = 1;
  local_res10[0] = param_1.Index;
  local_res18[0] = param_2.Value;
  (**(code **)(this->_padding_ + 0x18))(local_28._0_4_,&local_18,&local_28);
  return;
}

// SetKeyTimes @ 1460f7d00

void __thiscall
FMovieSceneChannel::SetKeyTimes
          (FMovieSceneChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  return;
}

