// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 3

// FNativeMediaSourceColorSettings @ 14ea39390

FNativeMediaSourceColorSettings * __thiscall
FNativeMediaSourceColorSettings::FNativeMediaSourceColorSettings
          (FNativeMediaSourceColorSettings *this)

{
  this->EncodingOverride = (atomic<UE::Color::EEncoding>)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ColorSpaceOverride).bIsSet = false;
  this->_padding_ = (longlong)&___7FNativeMediaSourceColorSettings__6B_;
  this->ChromaticAdaptationMethod = (atomic<UE::Color::EChromaticAdaptationMethod>)0x1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ColorSpaceCriticalSection,4000);
  return this;
}

// GetColorSpaceOverride @ 14ea4b500

FColorSpace * __thiscall
FNativeMediaSourceColorSettings::GetColorSpaceOverride
          (FNativeMediaSourceColorSettings *this,FColorSpace *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ColorSpaceCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->ColorSpaceOverride).bIsSet != false) {
      param_1 = &(this->ColorSpaceOverride).TypedValue;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 14ea5ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FNativeMediaSourceColorSettings::Update
          (FNativeMediaSourceColorSettings *this,FMediaSourceColorSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ETextureColorSpace EVar1;
  double dVar2;
  FColorSpace *pFVar3;
  FColorSpace *pFVar4;
  TOptional<UE::Color::FColorSpace> *pTVar5;
  double (*padVar6) [4];
  longlong lVar7;
  undefined1 auStackY_1a8 [32];
  FColorSpace local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  lpCriticalSection = &this->ColorSpaceCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar1 = param_1->ColorSpaceOverride;
  pTVar5 = &this->ColorSpaceOverride;
  if (EVar1 == TCS_Custom) {
    pFVar3 = UE::Color::FColorSpace::FColorSpace
                       (&local_178,&param_1->RedChromaticityCoordinate,
                        &param_1->GreenChromaticityCoordinate,&param_1->BlueChromaticityCoordinate,
                        &param_1->WhiteChromaticityCoordinate);
    if ((TOptional<UE::Color::FColorSpace> *)pFVar3 == pTVar5) goto LAB_14ea60112;
    lVar7 = 2;
    do {
      padVar6 = (pTVar5->TypedValue).RgbToXYZ.M + 2;
      dVar2 = (pFVar3->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar4 = (FColorSpace *)((pFVar3->RgbToXYZ).M + 2);
      (pTVar5->TypedValue).Chromaticities.Elements[0].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[0].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[1].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[1].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[2].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[2].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[3].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[3].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[0][1];
      (pTVar5->TypedValue).RgbToXYZ.M[0][0] = (pFVar3->RgbToXYZ).M[0][0];
      (pTVar5->TypedValue).RgbToXYZ.M[0][1] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[0][3];
      (pTVar5->TypedValue).RgbToXYZ.M[0][2] = (pFVar3->RgbToXYZ).M[0][2];
      (pTVar5->TypedValue).RgbToXYZ.M[0][3] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[1][1];
      (pTVar5->TypedValue).RgbToXYZ.M[1][0] = (pFVar3->RgbToXYZ).M[1][0];
      (pTVar5->TypedValue).RgbToXYZ.M[1][1] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[1][3];
      (pTVar5->TypedValue).RgbToXYZ.M[1][2] = (pFVar3->RgbToXYZ).M[1][2];
      (pTVar5->TypedValue).RgbToXYZ.M[1][3] = dVar2;
      lVar7 = lVar7 + -1;
      pFVar3 = pFVar4;
      pTVar5 = (TOptional<UE::Color::FColorSpace> *)padVar6;
    } while (lVar7 != 0);
  }
  else {
    if (EVar1 == TCS_None) {
      if ((this->ColorSpaceOverride).bIsSet != false) {
        (this->ColorSpaceOverride).bIsSet = false;
      }
      goto LAB_14ea60112;
    }
    pFVar3 = UE::Color::FColorSpace::FColorSpace(&local_178,EVar1);
    if ((TOptional<UE::Color::FColorSpace> *)pFVar3 == pTVar5) goto LAB_14ea60112;
    lVar7 = 2;
    do {
      padVar6 = (pTVar5->TypedValue).RgbToXYZ.M + 2;
      dVar2 = (pFVar3->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar4 = (FColorSpace *)((pFVar3->RgbToXYZ).M + 2);
      (pTVar5->TypedValue).Chromaticities.Elements[0].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[0].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[1].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[1].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[2].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[2].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pTVar5->TypedValue).Chromaticities.Elements[3].field0_0x0._s_0.X =
           (pFVar3->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pTVar5->TypedValue).Chromaticities.Elements[3].field0_0x0._s_0.Y = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[0][1];
      (pTVar5->TypedValue).RgbToXYZ.M[0][0] = (pFVar3->RgbToXYZ).M[0][0];
      (pTVar5->TypedValue).RgbToXYZ.M[0][1] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[0][3];
      (pTVar5->TypedValue).RgbToXYZ.M[0][2] = (pFVar3->RgbToXYZ).M[0][2];
      (pTVar5->TypedValue).RgbToXYZ.M[0][3] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[1][1];
      (pTVar5->TypedValue).RgbToXYZ.M[1][0] = (pFVar3->RgbToXYZ).M[1][0];
      (pTVar5->TypedValue).RgbToXYZ.M[1][1] = dVar2;
      dVar2 = (pFVar3->RgbToXYZ).M[1][3];
      (pTVar5->TypedValue).RgbToXYZ.M[1][2] = (pFVar3->RgbToXYZ).M[1][2];
      (pTVar5->TypedValue).RgbToXYZ.M[1][3] = dVar2;
      lVar7 = lVar7 + -1;
      pFVar3 = pFVar4;
      pTVar5 = (TOptional<UE::Color::FColorSpace> *)padVar6;
    } while (lVar7 != 0);
  }
  dVar2 = (pFVar4->Chromaticities).Elements[0].field0_0x0._s_0.Y;
  (*padVar6)[0] = (pFVar4->Chromaticities).Elements[0].field0_0x0._s_0.X;
  (*padVar6)[1] = dVar2;
  dVar2 = (pFVar4->Chromaticities).Elements[1].field0_0x0._s_0.Y;
  (*padVar6)[2] = (pFVar4->Chromaticities).Elements[1].field0_0x0._s_0.X;
  (*padVar6)[3] = dVar2;
  dVar2 = (pFVar4->Chromaticities).Elements[2].field0_0x0._s_0.Y;
  (*padVar6)[4] = (pFVar4->Chromaticities).Elements[2].field0_0x0._s_0.X;
  (*padVar6)[5] = dVar2;
  dVar2 = (pFVar4->Chromaticities).Elements[3].field0_0x0._s_0.Y;
  (*padVar6)[6] = (pFVar4->Chromaticities).Elements[3].field0_0x0._s_0.X;
  (*padVar6)[7] = dVar2;
  dVar2 = (pFVar4->RgbToXYZ).M[0][1];
  (*padVar6)[8] = (pFVar4->RgbToXYZ).M[0][0];
  (*padVar6)[9] = dVar2;
  (this->ColorSpaceOverride).bIsSet = true;
LAB_14ea60112:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LOCK();
  this->EncodingOverride = (atomic<UE::Color::EEncoding>)param_1->EncodingOverride;
  UNLOCK();
  LOCK();
  this->ChromaticAdaptationMethod =
       (atomic<UE::Color::EChromaticAdaptationMethod>)param_1->ChromaticAdaptationMethod;
  UNLOCK();
  return;
}

