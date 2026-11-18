// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 28

// StaticStruct @ 14624bea0

UScriptStruct * __cdecl FMovieSceneTimeWarpVariant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpVariant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpVariant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpVariant,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpVariant");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpVariant.OuterSingleton;
}

// FMovieSceneTimeWarpVariant @ 146299610

FMovieSceneTimeWarpVariant * __thiscall
FMovieSceneTimeWarpVariant::FMovieSceneTimeWarpVariant
          (FMovieSceneTimeWarpVariant *this,double param_1)

{
  uint uVar1;
  uint uVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  (this->Variant).WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
  (this->Variant).Data[0] = '\0';
  (this->Variant).Data[1] = '\0';
  (this->Variant).Data[2] = '\0';
  (this->Variant).Data[3] = '\0';
  (this->Variant).Data[4] = '\0';
  (this->Variant).Data[5] = '\0';
  (this->Variant).Data[6] = '\0';
  (this->Variant).Data[7] = '\0';
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8;
  uVar1 = SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)param_1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    *(double *)(this->Variant).Data = param_1;
  }
  else {
    (this->Variant).Data[0] = '\0';
    (this->Variant).Data[1] = '\0';
    (this->Variant).Data[2] = '\0';
    (this->Variant).Data[3] = '\0';
    (this->Variant).Data[4] = '\0';
    (this->Variant).Data[5] = '\0';
    (this->Variant).Data[6] = 0xf9;
    (this->Variant).Data[7] = 0xff;
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8;
  return this;
}

// operator() @ 14629f2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneTimeWarpVariant::Serialize'::__l2::<lambda_1>::operator()
          (void *this,FArchive *param_1,uchar *param_2,void *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  code *pcVar3;
  FFrameRate FVar4;
  uint3 uVar5;
  uint3 uVar6;
  UObject *pUVar7;
  bool bVar8;
  FMovieSceneTimeWarpFrameRate *pFVar9;
  UScriptStruct *pUVar10;
  byte bVar11;
  undefined1 auStack_98 [32];
  char local_78 [4];
  uint local_74;
  uint local_70;
  int local_68;
  int iStack_64;
  UObject *local_60;
  uint local_58;
  uint local_54;
  UMovieSceneTimeWarpGetter *local_50;
  FMovieSceneTimeWarpFrameRate local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar11 = param_1->field_0x28 & 1;
  if ((**(ulonglong **)this & 0xfff8000000000000) == 0xfff8000000000000) {
    local_78[0] = ((byte)(**(ulonglong **)this >> 0x30) & 7) + 1;
  }
  else {
    local_78[0] = '\0';
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_78,1);
  }
  else {
    local_78[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (bVar11 != 0) {
    *param_2 = local_78[0] + 0xff;
  }
  switch(local_78[0]) {
  case '\x01':
    if (bVar11 == 0) {
      local_50 = FMovieSceneTimeWarpVariant::AsCustom(*(FMovieSceneTimeWarpVariant **)this);
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_50);
      return;
    }
    local_60 = (UObject *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_60);
    pUVar7 = local_60;
    puVar2 = *(ulonglong **)this;
    if (local_60 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_60);
      }
      *(UObject **)&pUVar7[2].field_0x10 = pUVar7;
      if ((((ulonglong)pUVar7 & 0xffff000000000000) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(NewValue & ~PAYLOAD_Bits) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                             ,0x85,
                             L"Unable to store a pointer outside of a 48 bit address space in this container"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *puVar2 = (ulonglong)pUVar7 | 0xfff8000000000000;
    return;
  case '\x02':
    pUVar10 = FMovieSceneTimeWarpFixedFrame::StaticStruct();
    break;
  case '\x03':
    if (bVar11 != 0) {
      local_68 = 60000;
      iStack_64 = 1;
      pUVar10 = TBaseStructure<FFrameRate>::Get();
      UScriptStruct::SerializeItem(pUVar10,param_1,&local_68,(void *)0x0);
      FVar4.Denominator = iStack_64;
      FVar4.Numerator = local_68;
      pFVar9 = FMovieSceneTimeWarpFrameRate::FMovieSceneTimeWarpFrameRate(&local_48,FVar4);
      *(undefined4 *)param_3 = *(undefined4 *)pFVar9;
      *(undefined2 *)((longlong)param_3 + 4) = *(undefined2 *)(pFVar9->FrameRateDenominator + 1);
      return;
    }
    uVar5 = *(uint3 *)param_3;
    local_74 = (uint)uVar5;
    uVar6 = *(uint3 *)((longlong)param_3 + 3);
    local_70 = (uint)uVar6;
    local_58 = (uVar5 & 0xff800000) << 8 | uVar5 & 0xff7fffff;
    local_54 = (uVar6 & 0xff800000) << 8 | uVar6 & 0xff7fffff;
    pUVar10 = TBaseStructure<FFrameRate>::Get();
    param_3 = &local_58;
    break;
  case '\x04':
    pUVar10 = FMovieSceneTimeWarpLoop::StaticStruct();
    break;
  case '\x05':
    pUVar10 = FMovieSceneTimeWarpClamp::StaticStruct();
    break;
  case '\x06':
    pUVar10 = FMovieSceneTimeWarpLoopFloat::StaticStruct();
    break;
  case '\a':
    pUVar10 = FMovieSceneTimeWarpClampFloat::StaticStruct();
    break;
  default:
    goto switchD_14629f36f_default;
  }
  UScriptStruct::SerializeItem(pUVar10,param_1,param_3,(void *)0x0);
switchD_14629f36f_default:
  return;
}

// AsClamp @ 1462a4150

FMovieSceneTimeWarpClamp __thiscall
FMovieSceneTimeWarpVariant::AsClamp(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FFrameNumber FVar4;
  undefined4 *in_RDX;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar1 >> 0x30) & 7) != 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::Clamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x58,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  *in_RDX = *(undefined4 *)(this->Variant).Data;
  return (FMovieSceneTimeWarpClamp)SUB84(in_RDX,0);
}

// AsClampFloat @ 1462a4200

FMovieSceneTimeWarpClampFloat __thiscall
FMovieSceneTimeWarpVariant::AsClampFloat(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  undefined4 *in_RDX;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar1 >> 0x30) & 7) != 6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::ClampFloat",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,100,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return (FMovieSceneTimeWarpClampFloat)fVar4;
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return (FMovieSceneTimeWarpClampFloat)fVar4;
    }
  }
  *in_RDX = (int)*(undefined8 *)(this->Variant).Data;
  return (FMovieSceneTimeWarpClampFloat)SUB84(in_RDX,0);
}

// AsCustom @ 1462a42d0

UMovieSceneTimeWarpGetter * __thiscall
FMovieSceneTimeWarpVariant::AsCustom(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneTimeWarpGetter *pUVar4;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || ((uVar1 >> 0x30 & 7) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::Custom",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UMovieSceneTimeWarpGetter *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (UMovieSceneTimeWarpGetter *)FMovieSceneNumericVariant::GetCustomPtr(&this->Variant);
  return pUVar4;
}

// AsFixedPlayRate @ 1462a4340

double __thiscall FMovieSceneTimeWarpVariant::AsFixedPlayRate(FMovieSceneTimeWarpVariant *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variant.IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  return *(double *)(this->Variant).Data;
}

// AsFixedPlayRateFloat @ 1462a43a0

float __thiscall FMovieSceneTimeWarpVariant::AsFixedPlayRateFloat(FMovieSceneTimeWarpVariant *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variant.IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  dVar4 = *(double *)(this->Variant).Data;
  if (__real_47efffffe0000000 <= dVar4) {
    dVar4 = __real_47efffffe0000000;
  }
  if (dVar4 <= __real_c7efffffe0000000) {
    dVar4 = __real_c7efffffe0000000;
  }
  return (float)dVar4;
}

// AsFixedTime @ 1462a4410

FMovieSceneTimeWarpFixedFrame __thiscall
FMovieSceneTimeWarpVariant::AsFixedTime(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FFrameNumber FVar4;
  undefined4 *in_RDX;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar1 >> 0x30) & 7) != 1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::FixedTime",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  *in_RDX = *(undefined4 *)(this->Variant).Data;
  return (FMovieSceneTimeWarpFixedFrame)SUB84(in_RDX,0);
}

// AsFrameRate @ 1462a44c0

FMovieSceneTimeWarpFrameRate __thiscall
FMovieSceneTimeWarpVariant::AsFrameRate(FMovieSceneTimeWarpVariant *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *in_RDX;
  undefined2 uStackX_c;
  
  uVar4 = *(ulonglong *)(this->Variant).Data;
  if (((uVar4 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar4 >> 0x30) & 7) != 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::FrameRate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return SUB86(uVar3,0);
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return SUB86(uVar3,0);
    }
  }
  uVar4 = *(ulonglong *)(this->Variant).Data & 0xffffffffffff;
  *in_RDX = (int)uVar4;
  uStackX_c = (undefined2)(uVar4 >> 0x20);
  *(undefined2 *)(in_RDX + 1) = uStackX_c;
  return SUB86(in_RDX,0);
}

// AsLoop @ 1462a4590

FMovieSceneTimeWarpLoop __thiscall
FMovieSceneTimeWarpVariant::AsLoop(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FFrameNumber FVar4;
  undefined4 *in_RDX;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar1 >> 0x30) & 7) != 3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::Loop",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x52,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Value = (*pcVar2)();
      return (FFrameNumber)(FFrameNumber)FVar4.Value;
    }
  }
  *in_RDX = *(undefined4 *)(this->Variant).Data;
  return (FMovieSceneTimeWarpLoop)SUB84(in_RDX,0);
}

// AsLoopFloat @ 1462a4640

FMovieSceneTimeWarpLoopFloat __thiscall
FMovieSceneTimeWarpVariant::AsLoopFloat(FMovieSceneTimeWarpVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  undefined4 *in_RDX;
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || (((byte)(uVar1 >> 0x30) & 7) != 5)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetType() == EMovieSceneTimeWarpType::LoopFloat",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                       ,0x5e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return (FMovieSceneTimeWarpLoopFloat)fVar4;
    }
  }
  if ((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return (FMovieSceneTimeWarpLoopFloat)fVar4;
    }
  }
  *in_RDX = (int)*(undefined8 *)(this->Variant).Data;
  return (FMovieSceneTimeWarpLoopFloat)SUB84(in_RDX,0);
}

// ExportTextItem @ 1462ac460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneTimeWarpVariant::ExportTextItem
          (FMovieSceneTimeWarpVariant *this,FString *param_1,FMovieSceneTimeWarpVariant *param_2,
          UObject *param_3,int param_4,UObject *param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPackage *pUVar5;
  UEnum *this_00;
  UScriptStruct *pUVar6;
  char cVar7;
  int iVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  FName local_70;
  double local_68;
  UMovieSceneTimeWarpGetter *local_60;
  FString local_58;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if ((uVar1 & 0xfff8000000000000) == 0xfff8000000000000) {
    cVar7 = ((byte)(uVar1 >> 0x30) & 7) + 1;
  }
  else {
    cVar7 = '\0';
  }
  this_00 = Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton == (UEnum *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MovieScene();
    this_00 = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType,(UObject *)pUVar5,
                            L"EMovieSceneTimeWarpType");
    Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton = this_00;
    if ((this_00 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  UEnum::GetNameByValue(this_00,(long64)&local_70);
  ::FName::ToString(&local_70,&local_58);
  iVar8 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  switch(cVar7) {
  case '\0':
    local_68 = AsFixedPlayRate(this);
    pUVar6 = FMovieSceneFixedPlayRateStruct::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,&local_68,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x01':
    local_60 = AsCustom(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_60 != (UMovieSceneTimeWarpGetter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_60);
    }
    pUVar6 = FMovieSceneCustomTimeWarpGetterStruct::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,&local_60,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x02':
    AsFixedTime(this);
    pUVar6 = FMovieSceneTimeWarpFixedFrame::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_84,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x03':
    AsFrameRate(this);
    pUVar6 = FMovieSceneTimeWarpFrameRate::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_48,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x04':
    AsLoop(this);
    pUVar6 = FMovieSceneTimeWarpLoop::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_80,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x05':
    AsClamp(this);
    pUVar6 = FMovieSceneTimeWarpClamp::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_7c,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\x06':
    AsLoopFloat(this);
    pUVar6 = FMovieSceneTimeWarpLoopFloat::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_78,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  case '\a':
    AsClampFloat(this);
    pUVar6 = FMovieSceneTimeWarpClampFloat::StaticStruct();
    UScriptStruct::ExportText(pUVar6,param_1,local_74,(void *)0x0,param_3,param_4,param_5,true);
    bVar3 = true;
    break;
  default:
    `FMovieSceneTimeWarpVariant::ExportTextItem'::__l4::<lambda_1>::operator()(local_88);
    bVar3 = false;
  }
  return bVar3;
}

// ImportTextItem @ 1462b1950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001462b1d11) */

bool __thiscall
FMovieSceneTimeWarpVariant::ImportTextItem
          (FMovieSceneTimeWarpVariant *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  FName FVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  wchar_t *pwVar8;
  FName *pFVar9;
  UPackage *pUVar10;
  UEnum *this_00;
  ulonglong uVar11;
  UScriptStruct *pUVar12;
  undefined1 auStackY_a58 [32];
  undefined1 local_a14;
  undefined1 local_a13;
  undefined1 local_a12;
  undefined1 local_a11;
  undefined1 local_a10;
  undefined1 local_a0f;
  undefined1 local_a0e;
  undefined1 local_a0d;
  undefined1 local_a0c [4];
  undefined4 local_a08;
  uint local_a04;
  uint local_a00;
  uint local_9fc;
  uint local_9f8;
  uint local_9f4;
  FWeakObjectPtr local_9f0;
  FWeakObjectPtr local_9e8;
  undefined8 local_9e0;
  FWeakObjectPtr local_9d8;
  FWeakObjectPtr local_9d0;
  FWeakObjectPtr local_9c8;
  FWeakObjectPtr local_9c0;
  ulonglong local_9b8;
  double local_9b0;
  UObject *local_9a8;
  ulonglong local_9a0;
  undefined4 local_998;
  undefined4 uStack_994;
  ulonglong local_990;
  ulonglong local_988;
  ulonglong local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  code *local_940;
  undefined1 *local_938;
  code *local_930;
  undefined1 *local_928;
  code *local_920;
  undefined1 *local_918;
  code *local_900;
  undefined1 *local_8f8;
  code *local_8f0;
  undefined1 *local_8e8;
  code *local_8e0;
  undefined1 *local_8d8;
  code *local_8d0;
  undefined1 *local_8c8;
  code *local_8c0;
  undefined1 *local_8b8;
  FName local_8b0;
  undefined2 local_8a8;
  undefined1 uStack_8a6;
  undefined1 uStack_8a5;
  undefined1 uStack_8a4;
  undefined1 uStack_8a3;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a58;
  local_898.Base = local_878;
  local_898.CurPos = local_878;
  local_898.bIsDynamic = false;
  local_898.bIsExternal = false;
  local_898.End = local_62;
  iVar6 = wcsncmp(L"EMovieSceneTimeWarpType::",*param_1,0x19);
  if (iVar6 != 0) goto LAB_1462b20a8;
  *param_1 = *param_1 + 0x19;
  if (local_898.End < local_898.CurPos + 0x19) {
    TStringBuilderBase<wchar_t>::Extend(&local_898,0x19);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_898.CurPos,L"EMovieSceneTimeWarpType::",0x32);
  local_898.CurPos = (wchar_t *)((longlong)pvVar7 + 0x32);
  pwVar8 = FPropertyHelpers::ReadToken(*param_1,&local_898,false);
  if (pwVar8 == (wchar_t *)0x0) goto LAB_1462b20a8;
  *param_1 = pwVar8;
  pFVar9 = ::FName::FName(&local_8b0,
                          (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1),
                          local_898.Base,FNAME_Find);
  FVar1 = *pFVar9;
  if (FVar1 == (FName)0x0) goto LAB_1462b20a8;
  this_00 = Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton == (UEnum *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_MovieScene();
    this_00 = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneTimeWarpType,(UObject *)pUVar10,
                            L"EMovieSceneTimeWarpType");
    Z_Registration_Info_UEnum_EMovieSceneTimeWarpType.OuterSingleton = this_00;
    if ((this_00 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Enum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                           ,0x1c5,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  uVar11 = UEnum::GetValueByName(this_00,FVar1,None);
  if (uVar11 == 0xffffffffffffffff) goto LAB_1462b20a8;
  switch(uVar11 & 0xff) {
  case 0:
    local_9b0 = __real_3ff0000000000000;
    pUVar12 = FMovieSceneFixedPlayRateStruct::StaticStruct();
    local_938 = &local_a14;
    local_940 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l27::<lambda_1>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_9b0,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_940,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      Set(this,local_9b0);
      bVar4 = true;
      goto LAB_1462b20aa;
    }
    break;
  case 1:
    bVar4 = false;
    local_9a8 = (UObject *)0x0;
    pUVar12 = FMovieSceneCustomTimeWarpGetterStruct::StaticStruct();
    local_928 = &local_a13;
    local_930 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l31::<lambda_2>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_9a8,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_930,true);
    pUVar3 = local_9a8;
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      if (local_9a8 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_9a8);
        }
        *(UObject **)&pUVar3[2].field_0x10 = pUVar3;
        if ((((ulonglong)pUVar3 & 0xffff000000000000) != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(NewValue & ~PAYLOAD_Bits) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                               ,0x85,
                               L"Unable to store a pointer outside of a 48 bit address space in this container"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      *(ulonglong *)(this->Variant).Data = (ulonglong)pUVar3 | 0xfff8000000000000;
      bVar4 = true;
    }
    goto LAB_1462b20aa;
  case 2:
    bVar4 = false;
    local_a04 = 0;
    pUVar12 = FMovieSceneTimeWarpFixedFrame::StaticStruct();
    local_918 = &local_a12;
    local_920 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l35::<lambda_3>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_a04,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_920,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_9a0 = (ulonglong)local_a04;
      local_9e8.ObjectIndex = 0;
      local_9e8.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_9a0 | 0xfff9000000000000;
      local_978 = 0;
      FWeakObjectPtr::operator=(&local_9e8,(FObjectPtr)&local_978);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9e8;
    }
    goto LAB_1462b20aa;
  case 3:
    local_970 = 0x10000ea60;
    uStack_994 = 1;
    local_998 = 60000;
    local_a08 = 60000;
    local_8a8 = 60000;
    uStack_8a5 = 1;
    uStack_8a4 = 0;
    uStack_8a3 = 0;
    uStack_8a6 = 0;
    pUVar12 = FMovieSceneTimeWarpFrameRate::StaticStruct();
    local_8f8 = &local_a11;
    local_900 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l39::<lambda_4>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_8a8,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_900,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_9e0 = (ulonglong)
                  CONCAT24(CONCAT11(uStack_8a3,uStack_8a4),
                           CONCAT13(uStack_8a5,CONCAT12(uStack_8a6,local_8a8)));
      local_9d8.ObjectIndex = 0;
      local_9d8.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_9e0 | 0xfffa000000000000;
      local_968 = 0;
      FWeakObjectPtr::operator=(&local_9d8,(FObjectPtr)&local_968);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9d8;
      goto LAB_1462b20aa;
    }
    break;
  case 4:
    bVar4 = false;
    local_a00 = 0;
    pUVar12 = FMovieSceneTimeWarpLoop::StaticStruct();
    local_8e8 = &local_a10;
    local_8f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l43::<lambda_5>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_a00,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_8f0,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_990 = (ulonglong)local_a00;
      local_9d0.ObjectIndex = 0;
      local_9d0.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_990 | 0xfffb000000000000;
      local_960 = 0;
      FWeakObjectPtr::operator=(&local_9d0,(FObjectPtr)&local_960);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9d0;
    }
    goto LAB_1462b20aa;
  case 5:
    bVar4 = false;
    local_9fc = 0;
    pUVar12 = FMovieSceneTimeWarpClamp::StaticStruct();
    local_8d8 = &local_a0f;
    local_8e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l47::<lambda_6>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_9fc,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_8e0,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_988 = (ulonglong)local_9fc;
      local_9c8.ObjectIndex = 0;
      local_9c8.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_988 | 0xfffc000000000000;
      local_958 = 0;
      FWeakObjectPtr::operator=(&local_9c8,(FObjectPtr)&local_958);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9c8;
    }
    goto LAB_1462b20aa;
  case 6:
    local_9f8 = 0x3f800000;
    pUVar12 = FMovieSceneTimeWarpLoopFloat::StaticStruct();
    local_8c8 = &local_a0e;
    local_8d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l51::<lambda_7>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_9f8,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_8d0,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_980 = (ulonglong)local_9f8;
      local_9c0.ObjectIndex = 0;
      local_9c0.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_980 | 0xfffd000000000000;
      local_950 = 0;
      FWeakObjectPtr::operator=(&local_9c0,(FObjectPtr)&local_950);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9c0;
      goto LAB_1462b20aa;
    }
    break;
  case 7:
    local_9f4 = 0x3f800000;
    pUVar12 = FMovieSceneTimeWarpClampFloat::StaticStruct();
    local_8b8 = &local_a0d;
    local_8c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l55::<lambda_8>,FString>
                ::Call;
    pwVar8 = UScriptStruct::ImportText
                       (pUVar12,*param_1,&local_9f4,param_3,param_2,param_4,
                        (TFunctionRef<FString___cdecl(void)> *)&local_8c0,true);
    if (pwVar8 != (wchar_t *)0x0) {
      *param_1 = pwVar8;
      local_9b8 = (ulonglong)local_9f4;
      local_9f0.ObjectIndex = 0;
      local_9f0.ObjectSerialNumber = 0;
      *(ulonglong *)(this->Variant).Data = local_9b8 | 0xfffe000000000000;
      local_948 = 0;
      FWeakObjectPtr::operator=(&local_9f0,(FObjectPtr)&local_948);
      bVar4 = true;
      (this->Variant).WeakCustomGetter.WeakPtr = local_9f0;
      goto LAB_1462b20aa;
    }
    break;
  default:
    `FMovieSceneTimeWarpVariant::ImportTextItem'::__l25::<lambda_9>::operator()(local_a0c);
  }
LAB_1462b20a8:
  bVar4 = false;
LAB_1462b20aa:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
  return bVar4;
}

// RemapTime @ 1462b83c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFrameTime __thiscall
FMovieSceneTimeWarpVariant::RemapTime(FMovieSceneTimeWarpVariant *this,FFrameTime param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  FMovieSceneTimeWarpFixedFrame FVar3;
  FMovieSceneTimeWarpLoop FVar4;
  FMovieSceneTimeWarpClamp FVar5;
  FMovieSceneTimeWarpLoopFloat FVar6;
  FMovieSceneTimeWarpClampFloat FVar7;
  FMovieSceneTimeWarpFrameRate FVar8;
  UMovieSceneTimeWarpGetter *pUVar9;
  undefined4 extraout_var;
  undefined2 extraout_var_04;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  int iVar10;
  FFrameRate in_R8;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  float fStack_2c;
  FFrameRate local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(this->Variant).Data;
  iVar10 = in_R8.Numerator;
  fStack_2c = (float)in_R8.Denominator;
  if ((uVar1 & 0xfff8000000000000) == 0xfff8000000000000) {
    switch((ushort)(uVar1 >> 0x30) & 7) {
    case 0:
      pUVar9 = AsCustom(this);
      if (pUVar9 != (UMovieSceneTimeWarpGetter *)0x0) {
        (**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9,param_1);
        return param_1;
      }
    default:
      *(FFrameRate *)param_1 = in_R8;
      break;
    case 1:
      FVar3 = AsFixedTime(this);
      *(undefined4 *)param_1 = *(undefined4 *)CONCAT44(extraout_var,FVar3.FrameNumber.Value);
      *(undefined4 *)((longlong)param_1 + 4) = 0;
      break;
    case 2:
      FVar8 = AsFrameRate(this);
      local_54 = (uint)*(uint3 *)CONCAT26(extraout_var_04,FVar8);
      local_58 = (uint)*(uint3 *)((longlong)CONCAT26(extraout_var_04,FVar8) + 3);
      ConvertFrameTime(param_1,in_R8,(FFrameRate)0x100000001);
      break;
    case 3:
      local_28 = in_R8;
      FVar4 = AsLoop(this);
      local_28.Numerator =
           iVar10 - ((int)((longlong)
                           ((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 |
                           (ulonglong)in_R8 & 0xffffffff) /
                          (longlong)*(int *)CONCAT44(extraout_var_00,FVar4.Duration.Value)) -
                    ((uint)((ulonglong)in_R8 >> 0x1f) & 1)) *
                    *(int *)CONCAT44(extraout_var_00,FVar4.Duration.Value);
      *(FFrameRate *)param_1 = local_28;
      break;
    case 4:
      FVar5 = AsClamp(this);
      FMovieSceneTimeWarpClamp::Clamp
                ((FMovieSceneTimeWarpClamp *)CONCAT44(extraout_var_01,FVar5.Max.Value),param_1);
      break;
    case 5:
      dVar12 = (double)iVar10 + (double)fStack_2c;
      FVar6 = AsLoopFloat(this);
      fVar11 = *(float *)CONCAT44(extraout_var_02,FVar6.Duration);
      dVar12 = dVar12 - (double)((float)(int)((longlong)
                                              ROUND((dVar12 + dVar12) / (double)fVar11 -
                                                    __real_3fe0000000000000) >> 1) * fVar11);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar12;
      auVar14 = roundpd(ZEXT416((uint)fVar11),auVar2,1);
      dVar13 = auVar14._0_8_;
      dVar12 = dVar12 - dVar13;
      if (__real_41dfffffffc00000 <= dVar13) {
        dVar13 = __real_41dfffffffc00000;
      }
      if (dVar13 <= __real_c1e0000000000000) {
        dVar13 = __real_c1e0000000000000;
      }
      goto LAB_1462b848f;
    case 6:
      FVar7 = AsClampFloat(this);
      FMovieSceneTimeWarpClampFloat::Clamp
                ((FMovieSceneTimeWarpClampFloat *)CONCAT44(extraout_var_03,FVar7.Max),param_1);
    }
  }
  else {
    dVar12 = ((double)iVar10 + (double)fStack_2c) * *(double *)(this->Variant).Data;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar12;
    auVar14 = roundpd(in_XMM3,auVar14,1);
    dVar13 = auVar14._0_8_;
    dVar12 = dVar12 - dVar13;
    if (__real_41dfffffffc00000 <= dVar13) {
      dVar13 = __real_41dfffffffc00000;
    }
    if (dVar13 <= __real_c1e0000000000000) {
      dVar13 = __real_c1e0000000000000;
    }
LAB_1462b848f:
    fVar11 = (float)dVar12;
    if (::FFrameTime::MaxSubframe <= (float)dVar12) {
      fVar11 = ::FFrameTime::MaxSubframe;
    }
    *(int *)param_1 = (int)dVar13;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)((longlong)param_1 + 4) = fVar11;
    if (::FFrameTime::MaxSubframe <= fVar11) {
      fVar11 = ::FFrameTime::MaxSubframe;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)((longlong)param_1 + 4) = fVar11;
  }
  return param_1;
}

// ScaleBy @ 1462ba7d0

void __thiscall FMovieSceneTimeWarpVariant::ScaleBy(FMovieSceneTimeWarpVariant *this,double param_1)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar2 [16];
  bool bVar3;
  UMovieSceneTimeWarpGetter *pUVar4;
  byte bVar5;
  undefined1 auVar7 [16];
  double dVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  uVar1 = *(ulonglong *)(this->Variant).Data;
  if ((uVar1 & 0xfff8000000000000) == 0xfff8000000000000) {
    bVar5 = (byte)(uVar1 >> 0x30);
    switch((ushort)(uVar1 >> 0x30) & 7) {
    case 0:
      pUVar4 = AsCustom(this);
      if (pUVar4 != (UMovieSceneTimeWarpGetter *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pUVar4->_padding_ + 0x2b8);
                    /* WARNING: Could not recover jumptable at 0x0001462ba898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pUVar4,UNRECOVERED_JUMPTABLE);
        return;
      }
      break;
    case 3:
      AsLoop(this);
      auVar7._0_8_ = (double)local_res8;
      auVar7._8_8_ = 0;
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_48 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (double)(float)param_1 * auVar7._0_8_;
      auVar9 = roundpd(auVar7,auVar2,1);
      dVar6 = auVar9._0_8_;
      if (__real_41dfffffffc00000 <= auVar9._0_8_) {
        dVar6 = __real_41dfffffffc00000;
      }
      if (dVar6 <= __real_c1e0000000000000) {
        dVar6 = __real_c1e0000000000000;
      }
      local_68 = (ulonglong)(uint)(int)dVar6;
      *(ulonglong *)(this->Variant).Data = local_68 | 0xfffb000000000000;
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_48);
      (this->Variant).WeakCustomGetter.WeakPtr = local_res18;
      return;
    case 4:
      if (((bVar5 & 7) != 4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetType() == EMovieSceneTimeWarpType::Clamp",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                             ,0x58,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLiteral()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                             ,0x156,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      auVar8._0_8_ = (double)*(int *)(this->Variant).Data;
      auVar8._8_8_ = 0;
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_40 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (double)(float)param_1 * auVar8._0_8_;
      auVar9 = roundpd(auVar8,auVar9,1);
      dVar6 = auVar9._0_8_;
      if (__real_41dfffffffc00000 <= auVar9._0_8_) {
        dVar6 = __real_41dfffffffc00000;
      }
      if (dVar6 <= __real_c1e0000000000000) {
        dVar6 = __real_c1e0000000000000;
      }
      local_60 = (ulonglong)(uint)(int)dVar6;
      *(ulonglong *)(this->Variant).Data = local_60 | 0xfffc000000000000;
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
      (this->Variant).WeakCustomGetter.WeakPtr = local_res20;
      return;
    case 5:
      if (((bVar5 & 7) != 5) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetType() == EMovieSceneTimeWarpType::LoopFloat",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                             ,0x5e,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLiteral()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                             ,0x156,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      local_38 = 0;
      local_58 = (ulonglong)
                 (uint)(float)((double)(float)*(undefined8 *)(this->Variant).Data * param_1);
      *(ulonglong *)(this->Variant).Data = local_58 | 0xfffd000000000000;
      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_38);
      (this->Variant).WeakCustomGetter.WeakPtr = local_78;
      return;
    case 6:
      if (((bVar5 & 7) != 6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetType() == EMovieSceneTimeWarpType::ClampFloat",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpVariant.cpp"
                             ,100,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((*(ulonglong *)(this->Variant).Data & 0xfff8000000000000) != 0xfff8000000000000) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLiteral()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                             ,0x156,L""), bVar3)) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_30[0] = 0;
      local_50 = (ulonglong)
                 (uint)(float)((double)(float)*(undefined8 *)(this->Variant).Data * param_1);
      *(ulonglong *)(this->Variant).Data = local_50 | 0xfffe000000000000;
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)local_30);
      (this->Variant).WeakCustomGetter.WeakPtr = local_70;
      return;
    }
  }
  else {
    Set(this,param_1 * *(double *)(this->Variant).Data);
  }
  return;
}

// Serialize @ 1462bb010

bool __thiscall
FMovieSceneTimeWarpVariant::Serialize(FMovieSceneTimeWarpVariant *this,FArchive *param_1)

{
  bool bVar1;
  FMovieSceneTimeWarpVariant *local_res8;
  code *local_18;
  FMovieSceneTimeWarpVariant **local_10;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneTimeWarpVariant::Serialize'::__l2::<lambda_1>,void,FArchive_&,unsigned_char_&,void_*>
             ::Call;
  local_res8 = this;
  bVar1 = FMovieSceneNumericVariant::SerializeCustom
                    (&this->Variant,param_1,
                     (TFunctionRef<void___cdecl(FArchive_&,unsigned_char_&,void_*)> *)&local_18);
  return bVar1;
}

// SerializeFromMismatchedTag @ 1462bb6c0

bool __thiscall
FMovieSceneTimeWarpVariant::SerializeFromMismatchedTag
          (FMovieSceneTimeWarpVariant *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  float fVar5;
  FName FVar6;
  FArchive *pFVar7;
  ulong64 *puVar8;
  float *pfVar9;
  short *psVar10;
  longlong *plVar11;
  char *pcVar12;
  uint *puVar13;
  ushort *puVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  FNameEntryId FVar18;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  FName FVar24;
  FName FVar25;
  FName FVar26;
  FName FVar27;
  FName FVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  ulong64 local_res10;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  FVar6 = param_1->Type;
  FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar28.Number = 0;
  FVar28.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar18.Value);
  if (FVar6 == FVar28) {
    local_res10 = 0;
    pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar8 = (ulong64 *)**(longlong **)&pFVar7->field_0x8;
    if ((ulong64 *)(*(longlong **)&pFVar7->field_0x8)[1] < puVar8 + 1) {
      if ((pFVar7->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar7,&local_res10);
      }
    }
    else {
      local_res10 = *puVar8;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 8;
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    uVar29 = (uint)local_res10 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = (uint)(local_res10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    local_28[0] = 0;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar30,uVar29) &&
        (double)CONCAT44(uVar30,uVar29) != __real_3e45798ee2308c3a) {
      *(ulong64 *)(this->Variant).Data = local_res10;
    }
    else {
      (this->Variant).Data[0] = '\0';
      (this->Variant).Data[1] = '\0';
      (this->Variant).Data[2] = '\0';
      (this->Variant).Data[3] = '\0';
      (this->Variant).Data[4] = '\0';
      (this->Variant).Data[5] = '\0';
      (this->Variant).Data[6] = 0xf9;
      (this->Variant).Data[7] = 0xff;
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
    (this->Variant).WeakCustomGetter.WeakPtr = local_res20;
    return true;
  }
  FVar6 = param_1->Type;
  FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar19.Number = 0;
  FVar19.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar18.Value);
  if (FVar6 == FVar19) {
    uVar17 = local_res10 >> 0x20;
    local_res10 = local_res10 & 0xffffffff00000000;
    pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
    pfVar9 = (float *)**(undefined8 **)&pFVar7->field_0x8;
    if ((float *)(*(undefined8 **)&pFVar7->field_0x8)[1] < pfVar9 + 1) {
      if ((pFVar7->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,4);
        dVar31 = (double)(float)local_res10;
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)&local_res10);
        dVar31 = (double)(float)local_res10;
      }
    }
    else {
      fVar5 = *pfVar9;
      local_res10 = CONCAT44((int)uVar17,fVar5);
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
      dVar31 = (double)fVar5;
    }
  }
  else {
    FVar6 = param_1->Type;
    FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar20.Number = 0;
    FVar20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar18.Value);
    if (((FVar6 == FVar20) ||
        (FVar6 = param_1->Type, FVar18 = FNameEntryId::FromValidEName((EName)&local_res10),
        FVar21.Number = 0,
        FVar21.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar18.Value),
        FVar6 == FVar21)) ||
       (FVar6 = param_1->Type, FVar18 = FNameEntryId::FromValidEName((EName)&local_res10),
       FVar22.Number = 0,
       FVar22.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar18.Value),
       FVar6 == FVar22)) {
      uVar17 = local_res10 >> 0x20;
      local_res10 = local_res10 & 0xffffffff00000000;
      pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
      puVar16 = (undefined4 *)**(undefined8 **)&pFVar7->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar16 + 1) {
        if ((pFVar7->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)&local_res10);
        }
      }
      else {
        local_res10 = CONCAT44((int)uVar17,*puVar16);
        **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
      }
      uVar29 = (uint)(float)local_res10;
    }
    else {
      FVar6 = param_1->Type;
      FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
      FVar23.Number = 0;
      FVar23.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar18.Value);
      if (FVar6 == FVar23) {
        uVar17 = local_res10 >> 0x10;
        local_res10 = local_res10 & 0xffffffffffff0000;
        pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
        psVar10 = (short *)**(undefined8 **)&pFVar7->field_0x8;
        if ((short *)(*(undefined8 **)&pFVar7->field_0x8)[1] < psVar10 + 1) {
          if ((pFVar7->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,2);
            uVar29 = (int)(short)(ushort)local_res10;
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar7,(ushort *)&local_res10);
            uVar29 = (int)(short)(ushort)local_res10;
          }
        }
        else {
          sVar3 = *psVar10;
          local_res10 = CONCAT62((int6)uVar17,sVar3);
          **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
          uVar29 = (int)sVar3;
        }
      }
      else {
        FVar6 = param_1->Type;
        FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
        FVar24.Number = 0;
        FVar24.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_05,FVar18.Value);
        if (FVar6 == FVar24) {
          uVar17 = local_res10 >> 8;
          local_res10 = local_res10 & 0xffffffffffffff00;
          plVar11 = *(longlong **)(*(longlong *)param_2 + 8);
          pcVar12 = *(char **)plVar11[1];
          if ((char *)((undefined8 *)plVar11[1])[1] < pcVar12 + 1) {
            (**(code **)(*plVar11 + 0x188))(plVar11,&local_res10,1);
            uVar29 = (int)(char)(byte)local_res10;
          }
          else {
            cVar1 = *pcVar12;
            local_res10 = CONCAT71((int7)uVar17,cVar1);
            *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 1;
            uVar29 = (int)cVar1;
          }
        }
        else {
          FVar6 = param_1->Type;
          FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
          FVar25.Number = 0;
          FVar25.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_06,FVar18.Value);
          if (FVar6 == FVar25) {
            uVar17 = local_res10 >> 0x20;
            local_res10 = local_res10 & 0xffffffff00000000;
            pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
            puVar13 = (uint *)**(undefined8 **)&pFVar7->field_0x8;
            if ((uint *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar13 + 1) {
              if ((pFVar7->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,4);
                dVar31 = (double)(local_res10 & 0xffffffff);
              }
              else {
                FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)&local_res10);
                dVar31 = (double)(local_res10 & 0xffffffff);
              }
            }
            else {
              uVar29 = *puVar13;
              local_res10 = CONCAT44((int)uVar17,uVar29);
              **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
              dVar31 = (double)uVar29;
            }
            goto LAB_1462bbb79;
          }
          FVar6 = param_1->Type;
          FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
          FVar26.Number = 0;
          FVar26.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_07,FVar18.Value);
          if (FVar6 == FVar26) {
            uVar17 = local_res10 >> 0x10;
            local_res10 = local_res10 & 0xffffffffffff0000;
            pFVar7 = *(FArchive **)(*(longlong *)param_2 + 8);
            puVar14 = (ushort *)**(undefined8 **)&pFVar7->field_0x8;
            if ((ushort *)(*(undefined8 **)&pFVar7->field_0x8)[1] < puVar14 + 1) {
              if ((pFVar7->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,&local_res10,2);
                uVar29 = (uint)(ushort)local_res10;
              }
              else {
                FArchive::SerializeByteOrderSwapped(pFVar7,(ushort *)&local_res10);
                uVar29 = (uint)(ushort)local_res10;
              }
            }
            else {
              uVar4 = *puVar14;
              local_res10 = CONCAT62((int6)uVar17,uVar4);
              **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 2;
              uVar29 = (uint)uVar4;
            }
          }
          else {
            FVar6 = param_1->Type;
            FVar18 = FNameEntryId::FromValidEName((EName)&local_res10);
            FVar27.Number = 0;
            FVar27.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_08,FVar18.Value);
            if (FVar6 != FVar27) {
              return false;
            }
            uVar17 = local_res10 >> 8;
            local_res10 = local_res10 & 0xffffffffffffff00;
            plVar11 = *(longlong **)(*(longlong *)param_2 + 8);
            pbVar15 = *(byte **)plVar11[1];
            if ((byte *)((undefined8 *)plVar11[1])[1] < pbVar15 + 1) {
              (**(code **)(*plVar11 + 0x188))(plVar11,&local_res10,1);
              uVar29 = (uint)(byte)local_res10;
            }
            else {
              bVar2 = *pbVar15;
              local_res10 = CONCAT71((int7)uVar17,bVar2);
              *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 1;
              uVar29 = (uint)bVar2;
            }
          }
        }
      }
    }
    dVar31 = (double)(int)uVar29;
  }
LAB_1462bbb79:
  Set(this,dVar31);
  return true;
}

// Set @ 1462bbcd0

void __thiscall
FMovieSceneTimeWarpVariant::Set(FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpClamp *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber = 0;
  local_res8[0].ObjectIndex = (param_1->Max).Value;
  uVar1 = (ulonglong)local_res8[0] | 0xfffc000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbd30

void __thiscall
FMovieSceneTimeWarpVariant::Set
          (FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpClampFloat *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber = 0;
  local_res8[0].ObjectIndex = (int)param_1->Max;
  uVar1 = (ulonglong)local_res8[0] | 0xfffe000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbd90

void __thiscall
FMovieSceneTimeWarpVariant::Set
          (FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpFixedFrame *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber = 0;
  local_res8[0].ObjectIndex = (param_1->FrameNumber).Value;
  uVar1 = (ulonglong)local_res8[0] | 0xfff9000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbdf0

void __thiscall
FMovieSceneTimeWarpVariant::Set
          (FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpFrameRate *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber._2_2_ = 0;
  local_res8[0]._0_6_ = *param_1;
  uVar1 = (ulonglong)local_res8[0] | 0xfffa000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbe60

void __thiscall
FMovieSceneTimeWarpVariant::Set(FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpLoop *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber = 0;
  local_res8[0].ObjectIndex = (param_1->Duration).Value;
  uVar1 = (ulonglong)local_res8[0] | 0xfffb000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbec0

void __thiscall
FMovieSceneTimeWarpVariant::Set
          (FMovieSceneTimeWarpVariant *this,FMovieSceneTimeWarpLoopFloat *param_1)

{
  ulonglong uVar1;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  local_res8[0].ObjectSerialNumber = 0;
  local_res8[0].ObjectIndex = (int)param_1->Duration;
  uVar1 = (ulonglong)local_res8[0] | 0xfffd000000000000;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  *(ulonglong *)(this->Variant).Data = uVar1;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res8[0];
  return;
}

// Set @ 1462bbf20

void __thiscall FMovieSceneTimeWarpVariant::Set(FMovieSceneTimeWarpVariant *this,double param_1)

{
  uint uVar1;
  uint uVar2;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  uVar1 = SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)param_1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = 0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    *(double *)(this->Variant).Data = param_1;
  }
  else {
    (this->Variant).Data[0] = '\0';
    (this->Variant).Data[1] = '\0';
    (this->Variant).Data[2] = '\0';
    (this->Variant).Data[3] = '\0';
    (this->Variant).Data[4] = '\0';
    (this->Variant).Data[5] = '\0';
    (this->Variant).Data[6] = 0xf9;
    (this->Variant).Data[7] = 0xff;
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  (this->Variant).WeakCustomGetter.WeakPtr = local_res18;
  return;
}

// Set @ 1462bbf90

void __thiscall
FMovieSceneTimeWarpVariant::Set(FMovieSceneTimeWarpVariant *this,UMovieSceneTimeWarpGetter *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UMovieSceneTimeWarpGetter *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    param_1->_padding_ = (longlong)param_1;
    if (((ulonglong)param_1 & 0xffff000000000000) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NewValue & ~PAYLOAD_Bits) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                         ,0x85,
                         L"Unable to store a pointer outside of a 48 bit address space in this container"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  *(ulonglong *)(this->Variant).Data = (ulonglong)param_1 | 0xfff8000000000000;
  return;
}

// operator() @ 1504e7f90

bool __thiscall
`FMovieSceneTimeWarpVariant::ExportTextItem'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4583980399876637092>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4583980399876637092>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e8a00

bool __thiscall
`FMovieSceneTimeWarpVariant::ImportTextItem'::__l25::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4583980399876637233>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4583980399876637233>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

