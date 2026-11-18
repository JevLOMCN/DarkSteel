// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 85

// TestEqual<signed_char> @ 14e3e5da0

bool __thiscall
FAutomationTestBase::TestEqual<signed_char>
          (FAutomationTestBase *this,wchar_t *param_1,schar *param_2,schar *param_3)

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

// TestEqual<short> @ 14e3e5e10

bool __thiscall
FAutomationTestBase::TestEqual<short>
          (FAutomationTestBase *this,wchar_t *param_1,short *param_2,short *param_3)

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

// TestEqual<unsigned_short> @ 14e3e5e80

bool __thiscall
FAutomationTestBase::TestEqual<unsigned_short>
          (FAutomationTestBase *this,wchar_t *param_1,ushort *param_2,ushort *param_3)

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

// TestEqual<int> @ 14e3e5ef0

bool __thiscall
FAutomationTestBase::TestEqual<int>
          (FAutomationTestBase *this,wchar_t *param_1,int *param_2,int *param_3)

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

// TestEqual<float> @ 14e3e5f60

bool __thiscall
FAutomationTestBase::TestEqual<float>
          (FAutomationTestBase *this,wchar_t *param_1,float *param_2,float *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_3 != *param_2) {
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

// TestEqual<double> @ 14e3e5fd0

bool __thiscall
FAutomationTestBase::TestEqual<double>
          (FAutomationTestBase *this,wchar_t *param_1,double *param_2,double *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_3 != *param_2) {
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

// TestEqual<UE::Math::TBox2<float>_> @ 14e3e6040

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBox2<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBox2<float> *param_2,TBox2<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->Min).field0_0x0._s_0.X == (param_2->Min).field0_0x0._s_0.X) &&
       ((param_3->Min).field0_0x0._s_0.Y == (param_2->Min).field0_0x0._s_0.Y)) &&
      ((param_3->Max).field0_0x0._s_0.X == (param_2->Max).field0_0x0._s_0.X)) &&
     ((param_3->Max).field0_0x0._s_0.Y == (param_2->Max).field0_0x0._s_0.Y)) {
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

// TestEqual<UE::Math::TBox<float>_> @ 14e3e60e0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBox<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBox<float> *param_2,TBox<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->IsValid == '\0') {
    if (param_3->IsValid == '\0') {
      return true;
    }
  }
  else if ((((param_3->IsValid != '\0') &&
            ((param_3->Min).field0_0x0._s_0.X == (param_2->Min).field0_0x0._s_0.X)) &&
           ((param_3->Min).field0_0x0._s_0.Y == (param_2->Min).field0_0x0._s_0.Y)) &&
          ((((param_3->Min).field0_0x0._s_0.Z == (param_2->Min).field0_0x0._s_0.Z &&
            ((param_3->Max).field0_0x0._s_0.X == (param_2->Max).field0_0x0._s_0.X)) &&
           (((param_3->Max).field0_0x0._s_0.Y == (param_2->Max).field0_0x0._s_0.Y &&
            ((param_3->Max).field0_0x0._s_0.Z == (param_2->Max).field0_0x0._s_0.Z)))))) {
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

// TestEqual<UE::Math::TBoxSphereBounds<float,float>_> @ 14e3e61b0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TBoxSphereBounds<float,float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TBoxSphereBounds<float,float> *param_2,
          TBoxSphereBounds<float,float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->Origin).field0_0x0._s_0.X == (param_2->Origin).field0_0x0._s_0.X) &&
       ((param_3->Origin).field0_0x0._s_0.Y == (param_2->Origin).field0_0x0._s_0.Y)) &&
      ((param_3->Origin).field0_0x0._s_0.Z == (param_2->Origin).field0_0x0._s_0.Z)) &&
     ((((param_3->BoxExtent).field0_0x0._s_0.X == (param_2->BoxExtent).field0_0x0._s_0.X &&
       ((param_3->BoxExtent).field0_0x0._s_0.Y == (param_2->BoxExtent).field0_0x0._s_0.Y)) &&
      (((param_3->BoxExtent).field0_0x0._s_0.Z == (param_2->BoxExtent).field0_0x0._s_0.Z &&
       (param_3->SphereRadius == param_2->SphereRadius)))))) {
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

// TestEqual<UE::Math::TIntPoint<int>_> @ 14e3e6270

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TIntPoint<int>_>
          (FAutomationTestBase *this,wchar_t *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_2->field0_0x0)._s_0.X == (param_3->field0_0x0)._s_0.X) &&
     ((param_2->field0_0x0)._s_0.Y == (param_3->field0_0x0)._s_0.Y)) {
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

// TestEqual<UE::Math::TIntRect<int>_> @ 14e3e62f0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TIntRect<int>_>
          (FAutomationTestBase *this,wchar_t *param_1,TIntRect<int> *param_2,TIntRect<int> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((*(int *)&param_2->field0_0x0 == *(int *)&param_3->field0_0x0) &&
       (*(int *)((longlong)&param_2->field0_0x0 + 4) == *(int *)((longlong)&param_3->field0_0x0 + 4)
       )) && (*(int *)((longlong)&param_2->field0_0x0 + 8) ==
              *(int *)((longlong)&param_3->field0_0x0 + 8))) &&
     (*(int *)((longlong)&param_2->field0_0x0 + 0xc) ==
      *(int *)((longlong)&param_3->field0_0x0 + 0xc))) {
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

// TestEqual<UE::Math::TIntVector3<int>_> @ 14e3e6380

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TIntVector3<int>_>
          (FAutomationTestBase *this,wchar_t *param_1,TIntVector3<int> *param_2,
          TIntVector3<int> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((param_2->field0_0x0)._s_0.X == (param_3->field0_0x0)._s_0.X) &&
      ((param_2->field0_0x0)._s_0.Y == (param_3->field0_0x0)._s_0.Y)) &&
     ((param_2->field0_0x0)._s_0.Z == (param_3->field0_0x0)._s_0.Z)) {
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

// TestEqual<UE::Math::TMatrix<float>_> @ 14e3e6400

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TMatrix<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TMatrix<float> *param_2,
          TMatrix<float> *param_3)

{
  code *pcVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FString local_18;
  
  lVar5 = 0;
  lVar3 = (longlong)param_2 - (longlong)param_3;
  do {
    lVar4 = 0;
    pfVar2 = (float *)param_3;
    do {
      if (*pfVar2 != *(float *)((longlong)pfVar2 + lVar3)) {
        pcVar1 = *(code **)(this->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
        (*pcVar1)(this,&local_18,0);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return false;
      }
      lVar4 = lVar4 + 1;
      pfVar2 = pfVar2 + 1;
    } while (lVar4 < 4);
    lVar5 = lVar5 + 1;
    param_3 = (TMatrix<float> *)((longlong)param_3 + 0x10);
  } while (lVar5 < 4);
  return true;
}

// TestEqual<UE::Math::TMatrix<double>_> @ 14e3e64a0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TMatrix<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TMatrix<double> *param_2,
          TMatrix<double> *param_3)

{
  code *pcVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  FString local_18;
  
  lVar5 = 0;
  lVar3 = (longlong)param_2 - (longlong)param_3;
  do {
    lVar4 = 0;
    pdVar2 = (double *)param_3;
    do {
      if (*pdVar2 != *(double *)((longlong)pdVar2 + lVar3)) {
        pcVar1 = *(code **)(this->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
        (*pcVar1)(this,&local_18,0);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return false;
      }
      lVar4 = lVar4 + 1;
      pdVar2 = pdVar2 + 1;
    } while (lVar4 < 4);
    lVar5 = lVar5 + 1;
    param_3 = (TMatrix<double> *)((longlong)param_3 + 0x20);
  } while (lVar5 < 4);
  return true;
}

// TestEqual<UE::Math::TPlane<float>_> @ 14e3e6540

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TPlane<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TPlane<float> *param_2,TPlane<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((*(float *)&param_3->_padding_ == *(float *)&param_2->_padding_) &&
       (*(float *)((longlong)&param_3->_padding_ + 4) ==
        *(float *)((longlong)&param_2->_padding_ + 4))) &&
      ((float)param_3->_padding_ == (float)param_2->_padding_)) && (param_3->W == param_2->W)) {
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

// TestEqual<UE::Math::TQuat<float>_> @ 14e3e65e0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TQuat<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TQuat<float> *param_2,TQuat<float> *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  FString local_18;
  
  auVar2._4_4_ = -(uint)(param_2->Y != param_3->Y);
  auVar2._0_4_ = -(uint)(param_2->X != param_3->X);
  auVar2._8_4_ = -(uint)(param_2->Z != param_3->Z);
  auVar2._12_4_ = -(uint)(param_2->W != param_3->W);
  iVar3 = movmskps(in_EAX,auVar2);
  if (iVar3 != 0) {
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

// TestEqual<UE::Math::TRotator<float>_> @ 14e3e6650

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TRotator<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TRotator<float> *param_2,
          TRotator<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_3->Pitch == param_2->Pitch) && (param_3->Yaw == param_2->Yaw)) &&
     (param_3->Roll == param_2->Roll)) {
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

// TestEqual<UE::Math::TRotator<double>_> @ 14e3e66e0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TRotator<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TRotator<double> *param_2,
          TRotator<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_3->Pitch == param_2->Pitch) && (param_3->Yaw == param_2->Yaw)) &&
     (param_3->Roll == param_2->Roll)) {
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

// TestEqual<UE::Math::TVector2<float>_> @ 14e3e6770

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector2<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector2<float> *param_2,
          TVector2<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
     ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) {
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

// TestEqual<UE::Math::TVector4<float>_> @ 14e3e67f0

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector4<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector4<float> *param_2,
          TVector4<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
       ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
      ((param_3->field0_0x0)._s_0.Z == (param_2->field0_0x0)._s_0.Z)) &&
     ((param_3->field0_0x0)._s_0.W == (param_2->field0_0x0)._s_0.W)) {
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

// TestEqual<UE::Math::TVector<float>_> @ 14e3e6890

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector<float>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
      ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
     ((param_3->field0_0x0)._s_0.Z == (param_2->field0_0x0)._s_0.Z)) {
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

// TestEqual<UE::Math::TVector<double>_> @ 14e3e6920

bool __thiscall
FAutomationTestBase::TestEqual<UE::Math::TVector<double>_>
          (FAutomationTestBase *this,wchar_t *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((((param_3->field0_0x0)._s_0.X == (param_2->field0_0x0)._s_0.X) &&
      ((param_3->field0_0x0)._s_0.Y == (param_2->field0_0x0)._s_0.Y)) &&
     ((param_3->field0_0x0)._s_0.Z == (param_2->field0_0x0)._s_0.Z)) {
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

// TestEqual<FColor> @ 14e3e69b0

bool __thiscall
FAutomationTestBase::TestEqual<FColor>
          (FAutomationTestBase *this,wchar_t *param_1,FColor *param_2,FColor *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2->field0_0x0).Bits != (param_3->field0_0x0).Bits) {
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

// TestEqual<FDateTime> @ 14e3e6a20

bool __thiscall
FAutomationTestBase::TestEqual<FDateTime>
          (FAutomationTestBase *this,wchar_t *param_1,FDateTime *param_2,FDateTime *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Ticks != param_3->Ticks) {
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

// TestEqual<FFrameNumber> @ 14e3e6a90

bool __thiscall
FAutomationTestBase::TestEqual<FFrameNumber>
          (FAutomationTestBase *this,wchar_t *param_1,FFrameNumber *param_2,FFrameNumber *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Value != param_3->Value) {
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

// TestEqual<FFrameRate> @ 14e3e6b00

bool __thiscall
FAutomationTestBase::TestEqual<FFrameRate>
          (FAutomationTestBase *this,wchar_t *param_1,FFrameRate *param_2,FFrameRate *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if ((param_2->Numerator == param_3->Numerator) && (param_2->Denominator == param_3->Denominator))
  {
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

// TestEqual<FFrameTime> @ 14e3e6b80

bool __thiscall
FAutomationTestBase::TestEqual<FFrameTime>
          (FAutomationTestBase *this,wchar_t *param_1,FFrameTime *param_2,FFrameTime *param_3)

{
  code *pcVar1;
  float fStackX_1c;
  float fStackX_24;
  FString local_18;
  
  if (((*param_2).FrameNumber.Value == (*param_3).FrameNumber.Value) &&
     (fStackX_1c = (*param_2).SubFrame, fStackX_24 = (*param_3).SubFrame, fStackX_1c == fStackX_24))
  {
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

// TestEqual<FLinearColor> @ 14e3e6c10

bool __thiscall
FAutomationTestBase::TestEqual<FLinearColor>
          (FAutomationTestBase *this,wchar_t *param_1,FLinearColor *param_2,FLinearColor *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->field0_0x0)._s_0.R == (param_2->field0_0x0)._s_0.R) &&
       ((param_3->field0_0x0)._s_0.G == (param_2->field0_0x0)._s_0.G)) &&
      ((param_3->field0_0x0)._s_0.B == (param_2->field0_0x0)._s_0.B)) &&
     ((param_3->field0_0x0)._s_0.A == (param_2->field0_0x0)._s_0.A)) {
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

// TestEqual<FTimespan> @ 14e3e6cb0

bool __thiscall
FAutomationTestBase::TestEqual<FTimespan>
          (FAutomationTestBase *this,wchar_t *param_1,FTimespan *param_2,FTimespan *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Ticks != param_3->Ticks) {
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

// TestEqual<FTwoVectors> @ 14e3e6d20

bool __thiscall
FAutomationTestBase::TestEqual<FTwoVectors>
          (FAutomationTestBase *this,wchar_t *param_1,FTwoVectors *param_2,FTwoVectors *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((((param_3->v1).field0_0x0._s_0.X == (param_2->v1).field0_0x0._s_0.X) &&
       ((param_3->v1).field0_0x0._s_0.Y == (param_2->v1).field0_0x0._s_0.Y)) &&
      ((param_3->v1).field0_0x0._s_0.Z == (param_2->v1).field0_0x0._s_0.Z)) &&
     ((((param_3->v2).field0_0x0._s_0.X == (param_2->v2).field0_0x0._s_0.X &&
       ((param_3->v2).field0_0x0._s_0.Y == (param_2->v2).field0_0x0._s_0.Y)) &&
      ((param_3->v2).field0_0x0._s_0.Z == (param_2->v2).field0_0x0._s_0.Z)))) {
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

// TestEqual<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 14e3e6de0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2);
      if (iVar2 != 0) goto LAB_14e3e6e20;
    }
    return true;
  }
LAB_14e3e6e20:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e3e6e80

bool __thiscall
FAutomationTestBase::TestEqual<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2);
      if (iVar2 != 0) goto LAB_14e3e6ec0;
    }
    return true;
  }
LAB_14e3e6ec0:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e3e6f20

bool __thiscall
FAutomationTestBase::TestEqual<TArray<short,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 * 2);
      if (iVar2 != 0) goto LAB_14e3e6f63;
    }
    return true;
  }
LAB_14e3e6f63:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e3e6fc0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 * 2);
      if (iVar2 != 0) goto LAB_14e3e7003;
    }
    return true;
  }
LAB_14e3e7003:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e3e7060

bool __thiscall
FAutomationTestBase::TestEqual<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 2);
      if (iVar2 != 0) goto LAB_14e3e70a4;
    }
    return true;
  }
LAB_14e3e70a4:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e3e7100

bool __thiscall
FAutomationTestBase::TestEqual<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 2);
      if (iVar2 != 0) goto LAB_14e3e7144;
    }
    return true;
  }
LAB_14e3e7144:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e3e71a0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 2);
      if (iVar2 != 0) goto LAB_14e3e71e4;
    }
    return true;
  }
LAB_14e3e71e4:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e3e7240

bool __thiscall
FAutomationTestBase::TestEqual<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 3);
      if (iVar2 != 0) goto LAB_14e3e7284;
    }
    return true;
  }
LAB_14e3e7284:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e72e0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBox2<float>,int>
                      ((TBox2<float> *)(param_2->AllocatorInstance).Data,
                       (TBox2<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7370

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBox2<double>,int>
                      ((TBox2<double> *)(param_2->AllocatorInstance).Data,
                       (TBox2<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7400

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBox<float>,int>
                      ((TBox<float> *)(param_2->AllocatorInstance).Data,
                       (TBox<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7490

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBox<double>,int>
                      ((TBox<double> *)(param_2->AllocatorInstance).Data,
                       (TBox<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7520

bool __thiscall
FAutomationTestBase::
TestEqual<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBoxSphereBounds<float,float>,int>
                      ((TBoxSphereBounds<float,float> *)(param_2->AllocatorInstance).Data,
                       (TBoxSphereBounds<float,float> *)(param_3->AllocatorInstance).Data,
                       param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e3e75b0

bool __thiscall
FAutomationTestBase::
TestEqual<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TBoxSphereBounds<double,double>,int>
                      ((TBoxSphereBounds<double,double> *)(param_2->AllocatorInstance).Data,
                       (TBoxSphereBounds<double,double> *)(param_3->AllocatorInstance).Data,
                       param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e7640

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TIntPoint<int>,int>
                      ((TIntPoint<int> *)(param_2->AllocatorInstance).Data,
                       (TIntPoint<int> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e76d0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TIntRect<int>,int>
                      ((TIntRect<int> *)(param_2->AllocatorInstance).Data,
                       (TIntRect<int> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e3e7760

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TIntVector3<int>,int>
                      ((TIntVector3<int> *)(param_2->AllocatorInstance).Data,
                       (TIntVector3<int> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e77f0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TMatrix<float>,int>
                      ((TMatrix<float> *)(param_2->AllocatorInstance).Data,
                       (TMatrix<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7880

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TMatrix<double>,int>
                      ((TMatrix<double> *)(param_2->AllocatorInstance).Data,
                       (TMatrix<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7910

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TPlane<float>,int>
                      ((TPlane<float> *)(param_2->AllocatorInstance).Data,
                       (TPlane<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e79a0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TPlane<double>,int>
                      ((TPlane<double> *)(param_2->AllocatorInstance).Data,
                       (TPlane<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7a30

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TQuat<float>,int>
                      ((TQuat<float> *)(param_2->AllocatorInstance).Data,
                       (TQuat<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7ac0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TQuat<double>,int>
                      ((TQuat<double> *)(param_2->AllocatorInstance).Data,
                       (TQuat<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7b50

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TRotator<float>,int>
                      ((TRotator<float> *)(param_2->AllocatorInstance).Data,
                       (TRotator<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7be0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TRotator<double>,int>
                      ((TRotator<double> *)(param_2->AllocatorInstance).Data,
                       (TRotator<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7c70

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector2<float>,int>
                      ((TVector2<float> *)(param_2->AllocatorInstance).Data,
                       (TVector2<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7d00

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector2<double>,int>
                      ((TVector2<double> *)(param_2->AllocatorInstance).Data,
                       (TVector2<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7d90

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector4<float>,int>
                      ((TVector4<float> *)(param_2->AllocatorInstance).Data,
                       (TVector4<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7e20

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector4<double>,int>
                      ((TVector4<double> *)(param_2->AllocatorInstance).Data,
                       (TVector4<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e3e7eb0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector<float>,int>
                      ((TVector<float> *)(param_2->AllocatorInstance).Data,
                       (TVector<float> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e3e7f40

bool __thiscall
FAutomationTestBase::TestEqual<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<UE::Math::TVector<double>,int>
                      ((TVector<double> *)(param_2->AllocatorInstance).Data,
                       (TVector<double> *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e3e7fd0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FColor,int>
                      ((FColor *)(param_2->AllocatorInstance).Data,
                       (FColor *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e3e8060

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDateTime,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FDateTime,int>
                      ((FDateTime *)(param_2->AllocatorInstance).Data,
                       (FDateTime *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e3e80f0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FFrameNumber,int>
                      ((FFrameNumber *)(param_2->AllocatorInstance).Data,
                       (FFrameNumber *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e3e8180

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FFrameRate,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FFrameRate,int>
                      ((FFrameRate *)(param_2->AllocatorInstance).Data,
                       (FFrameRate *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e3e8210

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FFrameTime,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FFrameTime,int>
                      ((FFrameTime *)(param_2->AllocatorInstance).Data,
                       (FFrameTime *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e3e82a0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FGuid,int>
                      ((FGuid *)(param_2->AllocatorInstance).Data,
                       (FGuid *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e3e8330

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FLinearColor,int>
                      ((FLinearColor *)(param_2->AllocatorInstance).Data,
                       (FLinearColor *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e3e83c0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FSoftObjectPath,int>
                      ((FSoftObjectPath *)(param_2->AllocatorInstance).Data,
                       (FSoftObjectPath *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e3e8450

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FTimespan,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FTimespan,int>
                      ((FTimespan *)(param_2->AllocatorInstance).Data,
                       (FTimespan *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e3e84e0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FTwoVectors,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FTwoVectors,int>
                      ((FTwoVectors *)(param_2->AllocatorInstance).Data,
                       (FTwoVectors *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>_> @ 14e3e8570

bool __thiscall
FAutomationTestBase::
TestEqual<TArray<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type>,TSizedDefaultAllocator<32>_>
                   *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>,int>
                      ((TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type> *)
                       (param_2->AllocatorInstance).Data,
                       (TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type> *)
                       (param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e3e8600

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FFloat16,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FFloat16,int>
                      ((FFloat16 *)(param_2->AllocatorInstance).Data,
                       (FFloat16 *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e3e8690

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FName,int>
                      ((FName *)(param_2->AllocatorInstance).Data,
                       (FName *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e3e8720

bool __thiscall
FAutomationTestBase::TestEqual<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    bVar2 = CompareItems<FString,int>
                      ((FString *)(param_2->AllocatorInstance).Data,
                       (FString *)(param_3->AllocatorInstance).Data,param_2->ArrayNum);
    if (bVar2) {
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

// TestEqual<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e3e88f0

bool __thiscall
FAutomationTestBase::TestEqual<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 3);
      if (iVar2 != 0) goto LAB_14e3e8934;
    }
    return true;
  }
LAB_14e3e8934:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e3e8990

bool __thiscall
FAutomationTestBase::TestEqual<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2 << 3);
      if (iVar2 != 0) goto LAB_14e3e89d4;
    }
    return true;
  }
LAB_14e3e89d4:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e3e8a30

bool __thiscall
FAutomationTestBase::TestEqual<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  FString local_18;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 == param_3->ArrayNum) {
    if (iVar2 != 0) {
      iVar2 = memcmp((param_2->AllocatorInstance).Data,(param_3->AllocatorInstance).Data,
                     (longlong)iVar2);
      if (iVar2 != 0) goto LAB_14e3e8a70;
    }
    return true;
  }
LAB_14e3e8a70:
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar1)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>_> @ 14e3e8b40

bool __thiscall
FAutomationTestBase::
TestEqual<TEnumAsByte<enum_UE::InterchangeStorageTest::Private::ETestEnum::Type>_>
          (FAutomationTestBase *this,wchar_t *param_1,
          TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type> *param_2,
          TEnumAsByte<UE::InterchangeStorageTest::Private::ETestEnum::Type> *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Value != param_3->Value) {
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

// TestEqual<FFloat16> @ 14e3e8bb0

bool __thiscall
FAutomationTestBase::TestEqual<FFloat16>
          (FAutomationTestBase *this,wchar_t *param_1,FFloat16 *param_2,FFloat16 *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  FString local_28 [2];
  
  fVar3 = FGenericPlatformMath::LoadHalf(&param_3->Encoded);
  fVar4 = FGenericPlatformMath::LoadHalf(&param_2->Encoded);
  if (fVar4 == fVar3) {
    bVar2 = true;
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(local_28,L"%s: The two values are not equal.");
    (*pcVar1)(this,local_28,0);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  return bVar2;
}

// TestEqual<FName> @ 14e3e8c40

bool __thiscall
FAutomationTestBase::TestEqual<FName>
          (FAutomationTestBase *this,wchar_t *param_1,FName *param_2,FName *param_3)

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

// TestEqual<FString> @ 14e3e8cb0

bool __thiscall
FAutomationTestBase::TestEqual<FString>
          (FAutomationTestBase *this,wchar_t *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FString local_18;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar1 = (param_3->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (bVar4) {
    return true;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar2)(this,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// TestEqual<__int64> @ 14e3e8dc0

bool __thiscall
FAutomationTestBase::TestEqual<__int64>
          (FAutomationTestBase *this,wchar_t *param_1,long64 *param_2,long64 *param_3)

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

// TestEqual<unsigned___int64> @ 14e3e8e30

bool __thiscall
FAutomationTestBase::TestEqual<unsigned___int64>
          (FAutomationTestBase *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3)

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

// TestEqual @ 14e4602d0

bool __thiscall
FAutomationTestBase::TestEqual
          (FAutomationTestBase *this,wchar_t *param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar1 = TestEqual(this,param_1,pwVar2,pwVar3);
  return bVar1;
}

