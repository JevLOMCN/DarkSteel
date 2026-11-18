// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// TestEqual<void_*> @ 146297300

bool __thiscall
FAutomationTestBase::TestEqual<void_*>
          (FAutomationTestBase *this,FString *param_1,void **param_2,void **param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<TOptional<FFrameTime>_> @ 146297380

bool __thiscall
FAutomationTestBase::TestEqual<TOptional<FFrameTime>_>
          (FAutomationTestBase *this,FString *param_1,TOptional<FFrameTime> *param_2,
          TOptional<FFrameTime> *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fStackX_14;
  float fStackX_1c;
  FString local_18;
  
  if (param_2->bIsSet == param_3->bIsSet) {
    if (param_2->bIsSet == false) {
      bVar2 = false;
      goto LAB_1462973d8;
    }
    if ((param_2->TypedValue).FrameNumber.Value == (param_3->TypedValue).FrameNumber.Value) {
      fStackX_14 = (param_2->TypedValue).SubFrame;
      fStackX_1c = (param_3->TypedValue).SubFrame;
      if (fStackX_14 == fStackX_1c) {
        bVar2 = false;
        goto LAB_1462973d8;
      }
    }
  }
  bVar2 = true;
LAB_1462973d8:
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<FFrameTime> @ 146297440

bool __thiscall
FAutomationTestBase::TestEqual<FFrameTime>
          (FAutomationTestBase *this,FString *param_1,FFrameTime *param_2,FFrameTime *param_3)

{
  code *pcVar1;
  float fStackX_14;
  float fStackX_1c;
  FString local_18;
  
  if ((*param_2).FrameNumber.Value == (*param_3).FrameNumber.Value) {
    fStackX_14 = (*param_2).SubFrame;
    fStackX_1c = (*param_3).SubFrame;
    if (fStackX_14 == fStackX_1c) {
      return true;
    }
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TRange<FFrameTime>_> @ 1462974e0

bool __thiscall
FAutomationTestBase::TestEqual<TRange<FFrameTime>_>
          (FAutomationTestBase *this,FString *param_1,TRange<FFrameTime> *param_2,
          TRange<FFrameTime> *param_3)

{
  uchar uVar1;
  FFrameTime FVar2;
  code *pcVar3;
  bool bVar4;
  float fStackX_14;
  undefined1 local_18 [16];
  
  bVar4 = TRange<FFrameTime>::IsEmpty(param_2);
  if ((bVar4) && (bVar4 = TRange<FFrameTime>::IsEmpty(param_3), bVar4)) {
    return true;
  }
  uVar1 = (param_2->LowerBound).Type.Value;
  if (uVar1 != (param_3->LowerBound).Type.Value) goto LAB_14629758a;
  if (uVar1 != '\x02') {
    local_18._0_8_ = (param_3->LowerBound).Value;
    FVar2 = (param_2->LowerBound).Value;
    if (FVar2.FrameNumber.Value.Value != (int)local_18._0_8_) goto LAB_14629758a;
    fStackX_14 = FVar2.SubFrame;
    if (fStackX_14 != (float)local_18._4_4_) goto LAB_14629758a;
  }
  uVar1 = (param_2->UpperBound).Type.Value;
  if (uVar1 == (param_3->UpperBound).Type.Value) {
    if (uVar1 == '\x02') {
      return true;
    }
    local_18._0_8_ = (param_3->UpperBound).Value;
    FVar2 = (param_2->UpperBound).Value;
    if (FVar2.FrameNumber.Value.Value == (int)local_18._0_8_) {
      fStackX_14 = FVar2.SubFrame;
      if (fStackX_14 == (float)local_18._4_4_) {
        return true;
      }
    }
  }
LAB_14629758a:
  pcVar3 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl((FString *)local_18,L"%s: The two values are not equal.");
  (*pcVar3)(this,local_18,0);
  if ((FFrameTime)local_18._0_8_ != (FFrameTime)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  return false;
}

// TestEqual<TScriptInterface<IMovieSceneEasingFunction>_> @ 1462975e0

bool __thiscall
FAutomationTestBase::TestEqual<TScriptInterface<IMovieSceneEasingFunction>_>
          (FAutomationTestBase *this,FString *param_1,
          TScriptInterface<IMovieSceneEasingFunction> *param_2,
          TScriptInterface<IMovieSceneEasingFunction> *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  FString local_18;
  
  lVar2 = 0;
  lVar3 = lVar2;
  if (*(longlong *)param_2 != 0) {
    lVar3 = *(longlong *)&param_2->field_0x8;
  }
  if (*(longlong *)param_3 != 0) {
    lVar2 = *(longlong *)&param_3->field_0x8;
  }
  if ((lVar3 == lVar2) && (*(longlong *)param_2 == *(longlong *)param_3)) {
    return true;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<enum_EPlayDirection> @ 146297680

bool __thiscall
FAutomationTestBase::TestEqual<enum_EPlayDirection>
          (FAutomationTestBase *this,FString *param_1,EPlayDirection *param_2,
          EPlayDirection *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<enum_EPlayDirection> @ 146297700

bool __thiscall
FAutomationTestBase::TestEqual<enum_EPlayDirection>
          (FAutomationTestBase *this,wchar_t *param_1,EPlayDirection *param_2,
          EPlayDirection *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<enum_ETestMovieSceneEnum> @ 146297770

bool __thiscall
FAutomationTestBase::TestEqual<enum_ETestMovieSceneEnum>
          (FAutomationTestBase *this,FString *param_1,ETestMovieSceneEnum *param_2,
          ETestMovieSceneEnum *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<enum_EMovieScenePlayerStatus::Type> @ 1462977f0

bool __thiscall
FAutomationTestBase::TestEqual<enum_EMovieScenePlayerStatus::Type>
          (FAutomationTestBase *this,FString *param_1,Type *param_2,Type *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<enum_EMovieScenePlayerStatus::Type> @ 146297870

bool __thiscall
FAutomationTestBase::TestEqual<enum_EMovieScenePlayerStatus::Type>
          (FAutomationTestBase *this,wchar_t *param_1,Type *param_2,Type *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<bool> @ 1462978e0

bool __thiscall
FAutomationTestBase::TestEqual<bool>
          (FAutomationTestBase *this,FString *param_1,bool *param_2,bool *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestNotEqual<void_*> @ 146297960

bool __thiscall
FAutomationTestBase::TestNotEqual<void_*>
          (FAutomationTestBase *this,FString *param_1,void **param_2,void **param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 == *param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

