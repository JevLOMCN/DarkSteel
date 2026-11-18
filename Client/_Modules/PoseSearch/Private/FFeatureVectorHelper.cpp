// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// Copy @ 14a8eea70

void __cdecl
UE::PoseSearch::FFeatureVectorHelper::Copy
          (TArrayView<float,int> *param_1,int param_2,int param_3,
          TArrayView<float_const_,int> *param_4)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  
  if ((param_1->DataPtr == (float *)0x0) || (param_4->DataPtr == (float *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.GetData() && OriginValues.GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->ArrayNum != param_4->ArrayNum) || (param_1->ArrayNum < param_2 + param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() == OriginValues.Num() && DataOffset + DataCardinality <= Values.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x8b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pfVar7 = param_1->DataPtr + param_2;
  pfVar8 = param_4->DataPtr + param_2;
  if (pfVar7 == pfVar8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValuesData != OriginValuesData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x90,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = 0;
  if (3 < param_3) {
    uVar4 = (param_3 - 4U >> 2) + 1;
    uVar5 = (ulonglong)uVar4;
    iVar6 = uVar4 * 4;
    do {
      *pfVar7 = *pfVar8;
      pfVar7[1] = pfVar8[1];
      pfVar7[2] = pfVar8[2];
      pfVar1 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      pfVar7[3] = *pfVar1;
      pfVar7 = pfVar7 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar6 < param_3) {
    lVar9 = (longlong)pfVar8 - (longlong)pfVar7;
    uVar5 = (ulonglong)(uint)(param_3 - iVar6);
    do {
      *pfVar7 = *(float *)(lVar9 + (longlong)pfVar7);
      pfVar7 = pfVar7 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// DecodeFloat @ 14a8f29e0

float __cdecl
UE::PoseSearch::FFeatureVectorHelper::DecodeFloat(TArrayView<float_const_,int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  
  if (param_1->ArrayNum < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  pfVar3 = TArrayView<float_const_,int>::operator[](param_1,param_2);
  return *pfVar3;
}

// DecodeVector2D @ 14a8f2a40

TVector2<double> * __cdecl
UE::PoseSearch::FFeatureVectorHelper::DecodeVector2D
          (TVector2<double> *__return_storage_ptr__,TArrayView<float_const_,int> *param_1,
          int param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  float *pfVar6;
  
  if (param_1->ArrayNum < param_2 + 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pfVar6 = TArrayView<float_const_,int>::operator[](param_1,param_2 + 1);
  fVar1 = *pfVar6;
  pfVar6 = TArrayView<float_const_,int>::operator[](param_1,param_2);
  fVar2 = *pfVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar2;
  return __return_storage_ptr__;
}

// DecodeVector @ 14a8f2ae0

TVector<double> * __cdecl
UE::PoseSearch::FFeatureVectorHelper::DecodeVector
          (TVector<double> *__return_storage_ptr__,TArrayView<float_const_,int> *param_1,int param_2
          ,EComponentStrippingVector param_3)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  
  if (param_3 == None) {
    if ((param_1->ArrayNum < param_2 + 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x61,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
    pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2 + 2);
    fVar2 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2 + 1);
    fVar1 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
  }
  else {
    if (param_3 == StripXY) {
      if ((param_1->ArrayNum < param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values.Num() >= DataOffset + 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                             ,100,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
      pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2);
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)*pfVar7;
      return __return_storage_ptr__;
    }
    if (param_3 != StripZ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x6a,L"");
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (!bVar5) {
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        return __return_storage_ptr__;
      }
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
    if ((param_1->ArrayNum < param_2 + 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x67,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
    pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2 + 1);
    fVar1 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](param_1,param_2);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  fVar2 = *pfVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar2;
  return __return_storage_ptr__;
}

// EncodeFloat @ 14a8f3fb0

void __cdecl
UE::PoseSearch::FFeatureVectorHelper::EncodeFloat
          (TArrayView<float,int> *param_1,int param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  
  if (param_1->ArrayNum < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pfVar3 = TArrayView<float,int>::operator[](param_1,param_2);
  *pfVar3 = param_3;
  return;
}

// EncodeVector2D @ 14a8f4020

void __cdecl
UE::PoseSearch::FFeatureVectorHelper::EncodeVector2D
          (TArrayView<float,int> *param_1,int param_2,TVector2<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  
  if (param_1->ArrayNum < param_2 + 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  pfVar4 = TArrayView<float,int>::operator[](param_1,param_2);
  *pfVar4 = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  pfVar4 = TArrayView<float,int>::operator[](param_1,param_2 + 1);
  *pfVar4 = (float)dVar1;
  return;
}

// EncodeVector @ 14a8f40c0

void __cdecl
UE::PoseSearch::FFeatureVectorHelper::EncodeVector
          (TArrayView<float,int> *param_1,int param_2,TVector<double> *param_3,
          EComponentStrippingVector param_4,bool param_5)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TVector<double>_u_0 local_38 [2];
  
  if ((param_1->DataPtr == (float *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.GetData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x21,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_5) {
    local_38[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
    local_38[0]._0_8_ = (param_3->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_3->field0_0x0)._s_0.Y;
    if (param_4 == None) {
      uVar7 = param_2 + 2;
      if ((param_1->ArrayNum < (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values.Num() >= DataOffset + 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                             ,0x29,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_38[0]._s_0,__real_3e45798ee0000000);
      uVar6 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = param_1->ArrayNum;
      param_1->DataPtr[param_2] = (float)(double)local_38[0]._0_8_;
      uVar8 = param_2 + 1;
      uVar6 = 0;
      if ((int)uVar8 < iVar3) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1->DataPtr[(int)uVar8] = (float)(double)local_38[0]._8_8_;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1->DataPtr[(int)uVar7] = (float)(double)local_38[0]._16_8_;
      return;
    }
    if (param_4 == StripXY) {
      if ((param_1->ArrayNum < param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values.Num() >= DataOffset + 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                             ,0x30,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38[0]._s_0.X = 0.0;
      local_38[0]._s_0.Y = 0.0;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_38[0]._s_0,__real_3e45798ee0000000);
      uVar7 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1->DataPtr[param_2] = (float)(double)local_38[0]._16_8_;
      return;
    }
    if (param_4 == StripZ) {
      uVar7 = param_2 + 1;
      if ((param_1->ArrayNum < (int)uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values.Num() >= DataOffset + 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                             ,0x37,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38[0]._s_0.Z = 0.0;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_38[0]._s_0,__real_3e45798ee0000000);
      uVar6 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = param_1->ArrayNum;
      param_1->DataPtr[param_2] = (float)(double)local_38[0]._0_8_;
      uVar6 = 0;
      if ((int)uVar7 < iVar3) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1->DataPtr[(int)uVar7] = (float)(double)local_38[0]._8_8_;
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x3e,L"");
    if (!bVar5) {
      return;
    }
code_r0x00014a8f44c3:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_4 == None) {
    uVar7 = param_2 + 2;
    if ((param_1->ArrayNum < (int)uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x47,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar1 = (param_3->field0_0x0)._s_0.X;
    uVar6 = 0;
    if (param_2 < param_1->ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar3 = param_1->ArrayNum;
    param_1->DataPtr[param_2] = (float)dVar1;
    uVar8 = param_2 + 1;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    uVar6 = 0;
    if ((int)uVar8 < iVar3) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1->DataPtr[(int)uVar8] = (float)dVar1;
    uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    uVar9 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    if (param_4 == StripXY) {
      if ((param_1->ArrayNum < param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Values.Num() >= DataOffset + 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                             ,0x4d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar1 = (param_3->field0_0x0)._s_0.Z;
      uVar7 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1->DataPtr[param_2] = (float)dVar1;
      return;
    }
    if (param_4 != StripZ) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x56,L"");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014a8f44c3;
    }
    uVar7 = param_2 + 1;
    if ((param_1->ArrayNum < (int)uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x51,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar1 = (param_3->field0_0x0)._s_0.X;
    uVar6 = 0;
    if (param_2 < param_1->ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1->DataPtr[param_2] = (float)dVar1;
    uVar2 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    uVar9 = (undefined4)uVar2;
    uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->DataPtr[(int)uVar7] = (float)(double)CONCAT44(uVar10,uVar9);
  return;
}

// GetVectorCardinality @ 14a8ffeb0

int __cdecl
UE::PoseSearch::FFeatureVectorHelper::GetVectorCardinality(EComponentStrippingVector param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == None) {
    return 3;
  }
  if (param_1 == StripXY) {
    return 1;
  }
  if (param_1 == StripZ) {
    return 2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                     ,0x1a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

