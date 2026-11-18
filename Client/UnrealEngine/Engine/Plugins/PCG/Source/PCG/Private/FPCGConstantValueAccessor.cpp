// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// GetRangeImpl @ 1499fca00

bool __thiscall
FPCGConstantValueAccessor<int>::GetRangeImpl
          (FPCGConstantValueAccessor<int> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      iVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = param_1->ArrayNum;
      *(int *)(lVar7 + (longlong)param_1->DataPtr) = iVar1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

// GetRangeImpl @ 1499fcac0

bool __thiscall
FPCGConstantValueAccessor<FString>::GetRangeImpl
          (FPCGConstantValueAccessor<FString> *this,TArrayView<FString,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  longlong lVar11;
  
  iVar2 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar2) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar10 = (ForAnyElementType *)
                ((longlong)&(param_1->DataPtr->Data).AllocatorInstance.Data + lVar11);
      if ((FString *)pFVar10 != &this->Value) {
        iVar3 = (this->Value).Data.ArrayNum;
        piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
        _Src = (this->Value).Data.AllocatorInstance.Data;
        iVar4 = *piVar1;
        *(int *)&pFVar10[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar10,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar10->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < iVar2);
  }
  return true;
}

// GetRangeImpl @ 1499fcbf0

bool __thiscall
FPCGConstantValueAccessor<bool>::GetRangeImpl
          (FPCGConstantValueAccessor<bool> *this,TArrayView<bool,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      bVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = param_1->ArrayNum;
      param_1->DataPtr[lVar7] = bVar1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

// GetRangeImpl @ 149b191e0

bool __thiscall
FPCGConstantValueAccessor<float>::GetRangeImpl
          (FPCGConstantValueAccessor<float> *this,TArrayView<float,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      fVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = param_1->ArrayNum;
      *(float *)(lVar7 + (longlong)param_1->DataPtr) = fVar1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

// GetRangeImpl @ 149b192a0

bool __thiscall
FPCGConstantValueAccessor<double>::GetRangeImpl
          (FPCGConstantValueAccessor<double> *this,TArrayView<double,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      dVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = param_1->ArrayNum;
      *(double *)(lVar7 + (longlong)param_1->DataPtr) = dVar1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

// GetRangeImpl @ 149b19360

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TQuat<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TQuat<double>_> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  TQuat<double> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  
  iVar16 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar16) {
    lVar15 = 0;
    do {
      uVar5 = *(undefined4 *)&(this->Value).X;
      uVar6 = *(undefined4 *)((longlong)&(this->Value).X + 4);
      uVar7 = *(undefined4 *)&(this->Value).Y;
      uVar8 = *(undefined4 *)((longlong)&(this->Value).Y + 4);
      dVar9 = (this->Value).Z;
      dVar10 = (this->Value).W;
      uVar13 = 0;
      if ((int)uVar14 < iVar16) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      pTVar3 = param_1->DataPtr;
      uVar14 = uVar14 + 1;
      iVar16 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)&pTVar3->X + lVar15);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      pdVar2 = (double *)((longlong)&pTVar3->Z + lVar15);
      *pdVar2 = dVar9;
      pdVar2[1] = dVar10;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < iVar16);
  }
  return true;
}

// GetRangeImpl @ 149b19430

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TRotator<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TRotator<double>_> *this,
          TArrayView<UE::Math::TRotator<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  iVar14 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      uVar5 = *(undefined4 *)&(this->Value).Pitch;
      uVar6 = *(undefined4 *)((longlong)&(this->Value).Pitch + 4);
      uVar7 = *(undefined4 *)&(this->Value).Yaw;
      uVar8 = *(undefined4 *)((longlong)&(this->Value).Yaw + 4);
      dVar2 = (this->Value).Roll;
      uVar11 = 0;
      if ((int)uVar12 < iVar14) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pTVar3 = param_1->DataPtr;
      uVar12 = uVar12 + 1;
      iVar14 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)&pTVar3->Pitch + lVar13);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(double *)((longlong)&pTVar3->Roll + lVar13) = dVar2;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < iVar14);
  }
  return true;
}

// GetRangeImpl @ 149b19510

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TTransform<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TTransform<double>_> *this,
          TArrayView<UE::Math::TTransform<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  
  iVar24 = param_1->ArrayNum;
  uVar22 = 0;
  if (0 < iVar24) {
    lVar23 = 0;
    do {
      dVar9 = (this->Value).Rotation.ZW.m128d_f64[0];
      dVar10 = (this->Value).Rotation.ZW.m128d_f64[1];
      dVar11 = (this->Value).Translation.XY.m128d_f64[0];
      dVar12 = (this->Value).Translation.XY.m128d_f64[1];
      uVar5 = *(undefined4 *)(this->Value).Rotation.XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((this->Value).Rotation.XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(this->Value).Rotation.XY.m128d_f64 + 0xc);
      dVar13 = (this->Value).Translation.ZW.m128d_f64[0];
      dVar14 = (this->Value).Translation.ZW.m128d_f64[1];
      uVar21 = 0;
      if ((int)uVar22 < iVar24) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      dVar15 = (this->Value).Scale3D.XY.m128d_f64[0];
      dVar16 = (this->Value).Scale3D.XY.m128d_f64[1];
      dVar17 = (this->Value).Scale3D.ZW.m128d_f64[0];
      dVar18 = (this->Value).Scale3D.ZW.m128d_f64[1];
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        uVar20 = (*pcVar4)();
        return (bool)uVar20;
      }
      pTVar3 = param_1->DataPtr;
      uVar22 = uVar22 + 1;
      iVar24 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + lVar23);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      pdVar2 = (double *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + lVar23);
      *pdVar2 = dVar9;
      pdVar2[1] = dVar10;
      pdVar2 = (double *)((longlong)(pTVar3->Translation).XY.m128d_f64 + lVar23);
      *pdVar2 = dVar11;
      pdVar2[1] = dVar12;
      pdVar2 = (double *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + lVar23);
      *pdVar2 = dVar13;
      pdVar2[1] = dVar14;
      pdVar2 = (double *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + lVar23);
      *pdVar2 = dVar15;
      pdVar2[1] = dVar16;
      pdVar2 = (double *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + lVar23);
      *pdVar2 = dVar17;
      pdVar2[1] = dVar18;
      lVar23 = lVar23 + 0x60;
    } while ((int)uVar22 < iVar24);
  }
  return true;
}

// GetRangeImpl @ 149b19640

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TVector2<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TVector2<double>_> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  iVar12 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar12) {
    lVar11 = 0;
    do {
      uVar3 = *(undefined4 *)&(this->Value).field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
      uVar5 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
      uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
      uVar9 = 0;
      if ((int)uVar10 < iVar12) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
      uVar10 = uVar10 + 1;
      iVar12 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)&param_1->DataPtr->field0_0x0 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < iVar12);
  }
  return true;
}

// GetRangeImpl @ 149b19700

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TVector4<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TVector4<double>_> *this,
          TArrayView<UE::Math::TVector4<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  TVector4<double> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  
  iVar16 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar16) {
    lVar15 = 0;
    do {
      uVar5 = *(undefined4 *)&(this->Value).field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
      dVar9 = (this->Value).field0_0x0._s_0.Z;
      dVar10 = (this->Value).field0_0x0._s_0.W;
      uVar13 = 0;
      if ((int)uVar14 < iVar16) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
      pTVar3 = param_1->DataPtr;
      uVar14 = uVar14 + 1;
      iVar16 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)&pTVar3->field0_0x0 + lVar15);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      pdVar2 = (double *)((longlong)&pTVar3->field0_0x0 + lVar15 + 0x10);
      *pdVar2 = dVar9;
      pdVar2[1] = dVar10;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < iVar16);
  }
  return true;
}

// GetRangeImpl @ 149b197d0

bool __thiscall
FPCGConstantValueAccessor<UE::Math::TVector<double>_>::GetRangeImpl
          (FPCGConstantValueAccessor<UE::Math::TVector<double>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  TVector<double> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  iVar14 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      uVar5 = *(undefined4 *)&(this->Value).field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc);
      dVar2 = (this->Value).field0_0x0._s_0.Z;
      uVar11 = 0;
      if ((int)uVar12 < iVar14) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pTVar3 = param_1->DataPtr;
      uVar12 = uVar12 + 1;
      iVar14 = param_1->ArrayNum;
      puVar1 = (undefined4 *)((longlong)&pTVar3->field0_0x0 + lVar13);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(double *)((longlong)&pTVar3->field0_0x0 + lVar13 + 0x10) = dVar2;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < iVar14);
  }
  return true;
}

// GetRangeImpl @ 149b198b0

bool __thiscall
FPCGConstantValueAccessor<FSoftObjectPath>::GetRangeImpl
          (FPCGConstantValueAccessor<FSoftObjectPath> *this,TArrayView<FSoftObjectPath,int> *param_1
          ,int param_2,IPCGAttributeAccessorKeys *param_3)

{
  FUtf8String *pFVar1;
  int *piVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Src;
  code *pcVar7;
  FName FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType *pFVar14;
  
  iVar4 = param_1->ArrayNum;
  uVar12 = 0;
  if (0 < iVar4) {
    lVar13 = 0;
    pFVar1 = &(this->Value).SubPathString;
    do {
      uVar11 = 0;
      if ((int)uVar12 < iVar4) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      FVar8 = (this->Value).AssetPath.AssetName;
      pFVar14 = (ForAnyElementType *)
                ((longlong)&(param_1->DataPtr->SubPathString).Data.AllocatorInstance.Data + lVar13);
      pFVar3 = (FName *)((longlong)&(param_1->DataPtr->AssetPath).PackageName.ComparisonIndex.Value
                        + lVar13);
      *pFVar3 = (this->Value).AssetPath.PackageName;
      pFVar3[1] = FVar8;
      if ((FUtf8String *)pFVar14 != pFVar1) {
        iVar5 = (this->Value).SubPathString.Data.ArrayNum;
        piVar2 = (int *)((longlong)&pFVar14[1].Data + 4);
        _Src = (pFVar1->Data).AllocatorInstance.Data;
        iVar6 = *piVar2;
        *(int *)&pFVar14[1].Data = iVar5;
        if ((iVar5 == 0) && (iVar6 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar5,iVar6,pFVar14,iVar5,piVar2);
          if (iVar5 != 0) {
            memcpy(pFVar14->Data,_Src,(longlong)iVar5);
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while ((int)uVar12 < iVar4);
  }
  return true;
}

// GetRangeImpl @ 149b199f0

bool __thiscall
FPCGConstantValueAccessor<FName>::GetRangeImpl
          (FPCGConstantValueAccessor<FName> *this,TArrayView<FName,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      FVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar7 < iVar8) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar8 = param_1->ArrayNum;
      *(FName *)((longlong)&(param_1->DataPtr->ComparisonIndex).Value + lVar6) = FVar1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < iVar8);
  }
  return true;
}

// GetRangeImpl @ 149b19ab0

bool __thiscall
FPCGConstantValueAccessor<__int64>::GetRangeImpl
          (FPCGConstantValueAccessor<__int64> *this,TArrayView<__int64,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      lVar1 = this->Value;
      uVar5 = 0;
      if ((int)uVar6 < iVar8) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      iVar8 = param_1->ArrayNum;
      *(long64 *)(lVar7 + (longlong)param_1->DataPtr) = lVar1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

