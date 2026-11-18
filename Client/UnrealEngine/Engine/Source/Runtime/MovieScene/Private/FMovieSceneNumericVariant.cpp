// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 38

// StaticStruct @ 1462490e0

UScriptStruct * __cdecl FMovieSceneNumericVariant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNumericVariant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneNumericVariant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNumericVariant,(UObject *)pUVar1,
                         L"MovieSceneNumericVariant");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNumericVariant.OuterSingleton;
}

// SetTypedData<FMovieSceneTimeWarpClamp> @ 1462890a0

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpClamp>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpClamp *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  ulonglong local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = (ulonglong)(uint)(param_1->Max).Value;
  *(ulonglong *)this->Data = local_res20 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// SetTypedData<FMovieSceneTimeWarpClampFloat> @ 146289180

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpClampFloat>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpClampFloat *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  ulonglong local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = (ulonglong)(uint)param_1->Max;
  *(ulonglong *)this->Data = local_res20 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// SetTypedData<FMovieSceneTimeWarpFixedFrame> @ 146289260

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpFixedFrame>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpFixedFrame *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  ulonglong local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = (ulonglong)(uint)(param_1->FrameNumber).Value;
  *(ulonglong *)this->Data = local_res20 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// SetTypedData<FMovieSceneTimeWarpFrameRate> @ 146289340

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpFrameRate>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpFrameRate *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong local_res8;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = (ulonglong)(uint6)*param_1;
  *(ulonglong *)this->Data = local_res8 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res20;
  return;
}

// SetTypedData<FMovieSceneTimeWarpLoop> @ 146289420

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpLoop>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpLoop *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  ulonglong local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = (ulonglong)(uint)(param_1->Duration).Value;
  *(ulonglong *)this->Data = local_res20 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// SetTypedData<FMovieSceneTimeWarpLoopFloat> @ 146289500

void __thiscall
FMovieSceneNumericVariant::SetTypedData<FMovieSceneTimeWarpLoopFloat>
          (FMovieSceneNumericVariant *this,FMovieSceneTimeWarpLoopFloat *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  ulonglong local_res20;
  undefined8 local_28 [2];
  
  if (6 < (byte)(param_2 - 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType > TYPE_CustomPtr && (InType <= TYPE_Bits >> 48)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res20 = (ulonglong)(uint)param_1->Duration;
  *(ulonglong *)this->Data = local_res20 | 0xfff8000000000000;
  if ((param_2 & 7) != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_2 & 7) << 0x30;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// UnsafePayloadCast<FMovieSceneTimeWarpClamp> @ 146298a80

FMovieSceneTimeWarpClamp __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpClamp>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  undefined4 *in_RDX;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Value = (*pcVar1)();
      return (FFrameNumber)(FFrameNumber)FVar3.Value;
    }
  }
  *in_RDX = *(undefined4 *)this->Data;
  return (FMovieSceneTimeWarpClamp)SUB84(in_RDX,0);
}

// UnsafePayloadCast<FMovieSceneTimeWarpClampFloat> @ 146298af0

FMovieSceneTimeWarpClampFloat __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpClampFloat>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined4 *in_RDX;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return (FMovieSceneTimeWarpClampFloat)fVar3;
    }
  }
  *in_RDX = (int)*(undefined8 *)this->Data;
  return (FMovieSceneTimeWarpClampFloat)SUB84(in_RDX,0);
}

// UnsafePayloadCast<FMovieSceneTimeWarpFixedFrame> @ 146298b70

FMovieSceneTimeWarpFixedFrame __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpFixedFrame>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  undefined4 *in_RDX;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Value = (*pcVar1)();
      return (FFrameNumber)(FFrameNumber)FVar3.Value;
    }
  }
  *in_RDX = *(undefined4 *)this->Data;
  return (FMovieSceneTimeWarpFixedFrame)SUB84(in_RDX,0);
}

// UnsafePayloadCast<FMovieSceneTimeWarpFrameRate> @ 146298be0

FMovieSceneTimeWarpFrameRate __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpFrameRate>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *in_RDX;
  undefined2 uStackX_c;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
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
  uVar4 = *(ulonglong *)this->Data & 0xffffffffffff;
  *in_RDX = (int)uVar4;
  uStackX_c = (undefined2)(uVar4 >> 0x20);
  *(undefined2 *)(in_RDX + 1) = uStackX_c;
  return SUB86(in_RDX,0);
}

// UnsafePayloadCast<FMovieSceneTimeWarpLoop> @ 146298c60

FMovieSceneTimeWarpLoop __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpLoop>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  FFrameNumber FVar3;
  undefined4 *in_RDX;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Value = (*pcVar1)();
      return (FFrameNumber)(FFrameNumber)FVar3.Value;
    }
  }
  *in_RDX = *(undefined4 *)this->Data;
  return (FMovieSceneTimeWarpLoop)SUB84(in_RDX,0);
}

// UnsafePayloadCast<FMovieSceneTimeWarpLoopFloat> @ 146298cd0

FMovieSceneTimeWarpLoopFloat __thiscall
FMovieSceneNumericVariant::UnsafePayloadCast<FMovieSceneTimeWarpLoopFloat>
          (FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined4 *in_RDX;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneNumericVariant.h"
                       ,0x156,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return (FMovieSceneTimeWarpLoopFloat)fVar3;
    }
  }
  *in_RDX = (int)*(undefined8 *)this->Data;
  return (FMovieSceneTimeWarpLoopFloat)SUB84(in_RDX,0);
}

// FMovieSceneNumericVariant @ 1462993d0

FMovieSceneNumericVariant * __thiscall
FMovieSceneNumericVariant::FMovieSceneNumericVariant(FMovieSceneNumericVariant *this,double param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  *(double *)this->Data = param_1;
  (this->WeakCustomGetter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return this;
}

// FMovieSceneNumericVariant @ 146299420

FMovieSceneNumericVariant * __thiscall
FMovieSceneNumericVariant::FMovieSceneNumericVariant
          (FMovieSceneNumericVariant *this,UMovieSceneNumericVariantGetter *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneNumericVariant *pFVar3;
  
  (this->WeakCustomGetter).WeakPtr = (FWeakObjectPtr)0x0;
  if (param_1 != (UMovieSceneNumericVariantGetter *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (param_1->ReferenceToSelf).field0_0x0.DebugPtr = param_1;
    if (((ulonglong)param_1 & 0xffff000000000000) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NewValue & ~PAYLOAD_Bits) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                         ,0x85,
                         L"Unable to store a pointer outside of a 48 bit address space in this container"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMovieSceneNumericVariant *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  *(ulonglong *)this->Data = (ulonglong)param_1 | 0xfff8000000000000;
  return this;
}

// FMovieSceneNumericVariant @ 1462994b0

FMovieSceneNumericVariant * __thiscall
FMovieSceneNumericVariant::FMovieSceneNumericVariant(FMovieSceneNumericVariant *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  (this->WeakCustomGetter).WeakPtr = (FWeakObjectPtr)0x0;
  this->Data[0] = '\0';
  this->Data[1] = '\0';
  this->Data[2] = '\0';
  this->Data[3] = '\0';
  this->Data[4] = '\0';
  this->Data[5] = '\0';
  this->Data[6] = '\0';
  this->Data[7] = '\0';
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return this;
}

// operator() @ 14629f530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneNumericVariant::Serialize'::__l5::<lambda_1>::operator()
          (void *this,FArchive *param_1,uchar *param_2,void *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  uchar local_48 [8];
  UObject *local_40;
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48[0] = '\0';
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_48,1);
  }
  else {
    local_48[0] = *(uchar *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_48[0] == '\0') {
    local_40 = (UObject *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_40);
    pUVar4 = local_40;
    puVar2 = *(ulonglong **)this;
    if (local_40 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_40);
      }
      *(UObject **)&pUVar4[2].field_0x10 = pUVar4;
    }
    if (((ulonglong)pUVar4 & 0xffff000000000000) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NewValue & ~PAYLOAD_Bits) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                         ,0x85,
                         L"Unable to store a pointer outside of a 48 bit address space in this container"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *puVar2 = (ulonglong)pUVar4 | 0xfff8000000000000;
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_38,6);
    *(undefined4 *)param_3 = local_38;
    *(undefined2 *)((longlong)param_3 + 4) = local_34;
    *param_2 = local_48[0];
  }
  return;
}

// operator() @ 14629f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMovieSceneNumericVariant::Serialize'::__l7::<lambda_2>::operator()
          (void *this,FArchive *param_1,uchar *param_2,void *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  UMovieSceneNumericVariantGetter *local_30;
  undefined4 local_28;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  puVar1 = *(ulonglong **)this;
  if ((*puVar1 & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xbc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38[0] = *(byte *)((longlong)puVar1 + 6) & 7;
  if ((param_1->field_0x28 & 4) != 0) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,1);
    }
    else {
      local_38[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
  }
  if (local_38[0] == 0) {
    local_30 = FMovieSceneNumericVariant::GetCustomPtr(*(FMovieSceneNumericVariant **)this);
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_30);
  }
  else {
    local_28 = *(undefined4 *)param_3;
    local_24 = *(undefined2 *)((longlong)param_3 + 4);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,6);
  }
  return;
}

// AddStructReferencedObjects @ 1462a31f0

void __thiscall
FMovieSceneNumericVariant::AddStructReferencedObjects
          (FMovieSceneNumericVariant *this,FReferenceCollector *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneNumericVariantGetter *pUVar3;
  undefined8 uVar4;
  
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     ((*(ulonglong *)this->Data >> 0x30 & 7) == 0)) {
    pUVar3 = GetCustomPtr(this);
    if ((((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) ||
        ((*(ulonglong *)this->Data >> 0x30 & 7) != 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsLiteral() && (GetTypeBits() == TYPE_CustomPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                           ,0xc4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->Data[0] & 1) == 0) && (pUVar3 != (UMovieSceneNumericVariantGetter *)0x0)) {
      uVar4 = (**(code **)(param_1->_padding_ + 0x60))(param_1);
      (**(code **)(param_1->_padding_ + 0x88))(param_1,&pUVar3->ReferenceToSelf,0,uVar4);
    }
  }
  return;
}

// DeepCopy @ 1462ab7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneNumericVariant * __thiscall
FMovieSceneNumericVariant::DeepCopy
          (FMovieSceneNumericVariant *this,FMovieSceneNumericVariant *__return_storage_ptr__,
          UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneNumericVariantGetter *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FMovieSceneNumericVariant *pFVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  UMovieSceneNumericVariantGetter *local_50;
  FMovieSceneNumericVariant local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     ((*(ulonglong *)this->Data >> 0x30 & 7) == 0)) {
    pUVar3 = GetCustomPtr(this);
    pUVar5 = (UObject *)0x0;
    if (pUVar3 != (UMovieSceneNumericVariantGetter *)0x0) {
      local_58 = 0;
      pUVar4 = Z_Construct_UClass_UMovieSceneNumericVariantGetter_NoRegister();
      pUVar5 = DuplicateObject_Internal(pUVar4,(UObject *)pUVar3,param_1,(FName)0x0);
    }
    local_48.WeakCustomGetter.WeakPtr.ObjectIndex = 0;
    local_48.WeakCustomGetter.WeakPtr.ObjectSerialNumber = 0;
    if (pUVar5 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(UObject **)&pUVar5[2].field_0x10 = pUVar5;
      if (((ulonglong)pUVar5 & 0xffff000000000000) != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewValue & ~PAYLOAD_Bits) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                           ,0x85,
                           L"Unable to store a pointer outside of a 48 bit address space in this container"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMovieSceneNumericVariant *)(*pcVar1)();
          return pFVar6;
        }
      }
    }
    local_48.Data = (uchar  [8])((ulonglong)pUVar5 | 0xfff8000000000000);
    bVar2 = HasCustomWeakPtrFlag(this);
    if (((bVar2) && (((ulonglong)local_48.Data & 0xfff8000000000000) == 0xfff8000000000000)) &&
       (((ulonglong)local_48.Data >> 0x30 & 7) == 0)) {
      local_50 = GetCustomPtr(&local_48);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_50 != (UMovieSceneNumericVariantGetter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_50);
      }
      FWeakObjectPtr::operator=(&local_48.WeakCustomGetter.WeakPtr,(FObjectPtr)&local_50);
      local_48.Data = (uchar  [8])((ulonglong)local_48.Data | 1);
    }
    *&__return_storage_ptr__->Data = local_48.Data;
    (__return_storage_ptr__->WeakCustomGetter).WeakPtr = local_48.WeakCustomGetter.WeakPtr;
  }
  else {
    (__return_storage_ptr__->WeakCustomGetter).WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)__return_storage_ptr__->Data = *(undefined8 *)this->Data;
    (__return_storage_ptr__->WeakCustomGetter).WeakPtr = (this->WeakCustomGetter).WeakPtr;
  }
  return __return_storage_ptr__;
}

// ExportTextItem @ 1462ac450

bool __thiscall
FMovieSceneNumericVariant::ExportTextItem
          (FMovieSceneNumericVariant *this,FString *param_1,FMovieSceneNumericVariant *param_2,
          UObject *param_3,int param_4,UObject *param_5)

{
  return false;
}

// Get @ 1462ae840

double __thiscall FMovieSceneNumericVariant::Get(FMovieSceneNumericVariant *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UMovieSceneNumericVariantGetter *pUVar1;
  double dVar2;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    return *(double *)this->Data;
  }
  if ((*(ulonglong *)this->Data >> 0x30 & 7) == 0) {
    pUVar1 = GetCustomPtr(this);
    if (pUVar1 != (UMovieSceneNumericVariantGetter *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2b0);
                    /* WARNING: Could not recover jumptable at 0x0001462ae889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      dVar2 = (double)(*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
      return dVar2;
    }
  }
  return 0.0;
}

// GetCustomPtr @ 1462aef70

UMovieSceneNumericVariantGetter * __thiscall
FMovieSceneNumericVariant::GetCustomPtr(FMovieSceneNumericVariant *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  UMovieSceneNumericVariantGetter *pUVar4;
  UObject *pUVar5;
  undefined1 local_res8 [8];
  
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) ||
     ((*(ulonglong *)this->Data >> 0x30 & 7) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCustomPtr()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xca,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UMovieSceneNumericVariantGetter *)(*pcVar2)();
      return pUVar4;
    }
  }
  uVar1 = *(ulonglong *)this->Data;
  pUVar4 = (UMovieSceneNumericVariantGetter *)(uVar1 & 0xfffffffffffc);
  if (pUVar4 != (UMovieSceneNumericVariantGetter *)0x0) {
    if (((uVar1 & 0xfff8000000000000) != 0xfff8000000000000) || ((uVar1 >> 0x30 & 7) != 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLiteral() && (GetTypeBits() == TYPE_CustomPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                         ,0xc4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UMovieSceneNumericVariantGetter *)(*pcVar2)();
        return pUVar4;
      }
    }
    if ((this->Data[0] & 1) != 0) {
      pUVar5 = FWeakObjectPtr::Get(&(this->WeakCustomGetter).WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        bVar3 = `FMovieSceneNumericVariant::GetCustomPtr'::__l10::<lambda_1>::operator()(local_res8)
        ;
        if (!bVar3) {
          pUVar4 = (UMovieSceneNumericVariantGetter *)0x0;
        }
      }
    }
  }
  return pUVar4;
}

// GetPreloadDependencies @ 1462af5d0

void __thiscall
FMovieSceneNumericVariant::GetPreloadDependencies
          (FMovieSceneNumericVariant *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeBits @ 1462b0cf0

uchar __thiscall FMovieSceneNumericVariant::GetTypeBits(FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if ((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return this->Data[6] & 7;
}

// HasCustomWeakPtrFlag @ 1462b1460

bool __thiscall FMovieSceneNumericVariant::HasCustomWeakPtrFlag(FMovieSceneNumericVariant *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) ||
     ((*(ulonglong *)this->Data >> 0x30 & 7) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (GetTypeBits() == TYPE_CustomPtr)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xc4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->Data[0] & 1);
}

// Identical @ 1462b16f0

bool __thiscall
FMovieSceneNumericVariant::Identical
          (FMovieSceneNumericVariant *this,FMovieSceneNumericVariant *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  FField *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  UMovieSceneNumericVariantGetter *pUVar9;
  UMovieSceneNumericVariantGetter *pUVar10;
  ulonglong uVar11;
  int iVar12;
  TFieldIterator<FProperty> TStack_48;
  
  uVar11 = *(ulonglong *)this->Data & 0xfff8000000000000;
  if ((uVar11 != 0xfff8000000000000) ==
      ((*(ulonglong *)param_1->Data & 0xfff8000000000000) != 0xfff8000000000000)) {
    if (uVar11 == 0xfff8000000000000) {
      bVar1 = this->Data[6];
      if (((*(ulonglong *)param_1->Data & 0xfff8000000000000) != 0xfff8000000000000) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLiteral()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                             ,0xbc,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((bVar1 & 7) == (param_1->Data[6] & 7)) {
        uVar11 = *(ulonglong *)this->Data;
        if (((uVar11 & 0xfff8000000000000) != 0xfff8000000000000) || ((uVar11 >> 0x30 & 7) != 0)) {
          return ((uVar11 ^ *(ulonglong *)param_1->Data) & 0xffffffffffff) == 0;
        }
        pUVar9 = GetCustomPtr(this);
        pUVar10 = GetCustomPtr(param_1);
        if (pUVar9 == pUVar10) {
          return true;
        }
        if (((pUVar9 != (UMovieSceneNumericVariantGetter *)0x0) &&
            (pUVar10 != (UMovieSceneNumericVariantGetter *)0x0)) &&
           (TStack_48.Struct = (UStruct *)pUVar9->_padding_,
           TStack_48.Struct == (UStruct *)pUVar10->_padding_)) {
          if (TStack_48.Struct == (UStruct *)0x0) {
            TStack_48.Field = (FField *)0x0;
          }
          else {
            TStack_48.Field = (TStack_48.Struct)->ChildProperties;
          }
          TStack_48.InterfaceIndex = -1;
          TStack_48.bIncludeSuper = true;
          TStack_48.bIncludeDeprecated = true;
          TStack_48.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&TStack_48);
          pFVar5 = TStack_48.Field;
          do {
            TStack_48.Field = pFVar5;
            if (pFVar5 == (FField *)0x0) {
              uVar7 = (**(code **)(pUVar9->_padding_ + 0x1a8))(pUVar9,pUVar10);
              return (bool)uVar7;
            }
            iVar12 = 0;
            if (0 < (int)pFVar5[1]._padding_) {
              do {
                pcVar4 = *(code **)(pFVar5->_padding_ + 0xb8);
                if (((iVar12 < 0) || ((int)pFVar5[1]._padding_ <= iVar12)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                iVar2 = *(int *)((longlong)&pFVar5[1]._padding_ + 4);
                iVar3 = *(int *)((longlong)&pFVar5[1].Owner.Container + 4);
                if (((iVar12 < 0) || ((int)pFVar5[1]._padding_ <= iVar12)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar6)) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
                cVar8 = (*pcVar4)(pFVar5,(longlong)&pUVar9->_padding_ +
                                         (longlong)
                                         *(int *)((longlong)&pFVar5[1].Owner.Container + 4) +
                                         (longlong)*(int *)((longlong)&pFVar5[1]._padding_ + 4) *
                                         (longlong)iVar12,
                                  (longlong)&pUVar10->_padding_ +
                                  (longlong)iVar3 + (longlong)iVar2 * (longlong)iVar12,0);
                if (cVar8 == '\0') {
                  return false;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < (int)pFVar5[1]._padding_);
            }
            TStack_48.Field = pFVar5->Next;
            TFieldIterator<FProperty>::IterateToNext(&TStack_48);
            pFVar5 = TStack_48.Field;
          } while( true );
        }
      }
    }
    else if (*(double *)param_1->Data == *(double *)this->Data) {
      return true;
    }
  }
  return false;
}

// ImportTextItem @ 1462b1940

bool __thiscall
FMovieSceneNumericVariant::ImportTextItem
          (FMovieSceneNumericVariant *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  return false;
}

// MakeWeakUnsafe @ 1462b5b40

void __thiscall FMovieSceneNumericVariant::MakeWeakUnsafe(FMovieSceneNumericVariant *this)

{
  UMovieSceneNumericVariantGetter *local_res8 [4];
  
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     ((*(ulonglong *)this->Data >> 0x30 & 7) == 0)) {
    local_res8[0] = GetCustomPtr(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8[0] != (UMovieSceneNumericVariantGetter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    FWeakObjectPtr::operator=(&(this->WeakCustomGetter).WeakPtr,(FObjectPtr)local_res8);
    *(ulonglong *)this->Data = *(ulonglong *)this->Data | 1;
  }
  return;
}

// Serialize @ 1462bafc0

bool __thiscall
FMovieSceneNumericVariant::Serialize(FMovieSceneNumericVariant *this,FArchive *param_1)

{
  FMovieSceneNumericVariant *local_res10 [3];
  code *local_18;
  FMovieSceneNumericVariant **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneNumericVariant::Serialize'::__l5::<lambda_1>,void,FArchive_&,unsigned_char_&,void_*>
             ::Call;
  if ((param_1->field_0x28 & 1) == 0) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMovieSceneNumericVariant::Serialize'::__l7::<lambda_2>,void,FArchive_&,unsigned_char_&,void_*>
               ::Call;
  }
  local_res10[0] = this;
  SerializeCustom(this,param_1,
                  (TFunctionRef<void___cdecl(FArchive_&,unsigned_char_&,void_*)> *)&local_18);
  return true;
}

// SerializeCustom @ 1462bb070

bool __thiscall
FMovieSceneNumericVariant::SerializeCustom
          (FMovieSceneNumericVariant *this,FArchive *param_1,
          TFunctionRef<void___cdecl(FArchive_&,unsigned_char_&,void_*)> *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar local_res10 [16];
  bool local_res20 [8];
  byte local_38 [4];
  uint local_34;
  FMovieSceneNumericVariant *local_30;
  FMovieSceneNumericVariant *local_28 [2];
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_res20[0] = (*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000;
    if ((param_1->field_0x28 & 4) != 0) {
      ::operator<<(param_1,local_res20);
    }
    if (local_res20[0] == false) {
      if (((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsLiteral()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                             ,0xbc,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_38[0] = this->Data[6] & 7;
      local_28[0] = this;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1,local_38,local_28);
      return true;
    }
  }
  else {
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_34 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_34,4);
      if (1 < local_34) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_34;
      if ((param_1->field_0x28 & 1) == 0) goto LAB_1462bb171;
    }
    else {
      uVar2 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    local_res10[0] = uVar2 != 0;
    if (!(bool)local_res10[0]) {
      this->Data[0] = '\0';
      this->Data[1] = '\0';
      this->Data[2] = '\0';
      this->Data[3] = '\0';
      this->Data[4] = '\0';
      this->Data[5] = '\0';
      this->Data[6] = 0xf8;
      this->Data[7] = 0xff;
      local_30 = this;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,param_1,local_res10,&local_30);
      SetTypeBits(this,local_res10[0]);
      return true;
    }
  }
LAB_1462bb171:
  ::operator<<(param_1,(double *)this);
  return true;
}

// SerializeFromMismatchedTag @ 1462bb200

bool __thiscall
FMovieSceneNumericVariant::SerializeFromMismatchedTag
          (FMovieSceneNumericVariant *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  float fVar4;
  FName FVar5;
  FArchive *pFVar6;
  double *pdVar7;
  float *pfVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  char *pcVar11;
  uint *puVar12;
  ushort *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  FNameEntryId FVar17;
  uint uVar18;
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
  double dVar29;
  double local_res10;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  FVar5 = param_1->Type;
  FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar28.Number = 0;
  FVar28.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar17.Value);
  if (FVar5 == FVar28) {
    local_res10 = 0.0;
    pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
    pdVar7 = (double *)**(longlong **)&pFVar6->field_0x8;
    if ((double *)(*(longlong **)&pFVar6->field_0x8)[1] < pdVar7 + 1) {
      if ((pFVar6->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,8);
        dVar29 = local_res10;
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)&local_res10);
        dVar29 = local_res10;
      }
    }
    else {
      local_res10 = *pdVar7;
      **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
      dVar29 = local_res10;
    }
  }
  else {
    FVar5 = param_1->Type;
    FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar19.Number = 0;
    FVar19.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar17.Value);
    if (FVar5 == FVar19) {
      uVar16 = (ulonglong)local_res10 >> 0x20;
      local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
      pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
      pfVar8 = (float *)**(undefined8 **)&pFVar6->field_0x8;
      if ((float *)(*(undefined8 **)&pFVar6->field_0x8)[1] < pfVar8 + 1) {
        if ((pFVar6->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,4);
          dVar29 = (double)local_res10._0_4_;
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_res10);
          dVar29 = (double)local_res10._0_4_;
        }
      }
      else {
        fVar4 = *pfVar8;
        local_res10 = (double)CONCAT44((int)uVar16,fVar4);
        **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
        dVar29 = (double)fVar4;
      }
    }
    else {
      FVar5 = param_1->Type;
      FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
      FVar20.Number = 0;
      FVar20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar17.Value);
      if (((FVar5 != FVar20) &&
          (FVar5 = param_1->Type, FVar17 = FNameEntryId::FromValidEName((EName)&local_res10),
          FVar21.Number = 0,
          FVar21.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar17.Value),
          FVar5 != FVar21)) &&
         (FVar5 = param_1->Type, FVar17 = FNameEntryId::FromValidEName((EName)&local_res10),
         FVar22.Number = 0,
         FVar22.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar17.Value),
         FVar5 != FVar22)) {
        FVar5 = param_1->Type;
        FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
        FVar23.Number = 0;
        FVar23.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar17.Value);
        if (FVar5 == FVar23) {
          uVar16 = (ulonglong)local_res10 >> 0x10;
          local_res10 = (double)((ulonglong)local_res10 & 0xffffffffffff0000);
          pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
          puVar9 = (undefined2 *)**(undefined8 **)&pFVar6->field_0x8;
          if ((undefined2 *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar9 + 1) {
            if ((pFVar6->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar6,(ushort *)&local_res10);
            }
          }
          else {
            local_res10 = (double)CONCAT62((int6)uVar16,*puVar9);
            **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 2;
          }
          uVar18 = (uint)(short)local_res10._0_2_;
        }
        else {
          FVar5 = param_1->Type;
          FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
          FVar24.Number = 0;
          FVar24.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_05,FVar17.Value);
          if (FVar5 == FVar24) {
            uVar16 = (ulonglong)local_res10 >> 8;
            local_res10 = (double)((ulonglong)local_res10 & 0xffffffffffffff00);
            plVar10 = *(longlong **)(*(longlong *)param_2 + 8);
            pcVar11 = *(char **)plVar10[1];
            if ((char *)((undefined8 *)plVar10[1])[1] < pcVar11 + 1) {
              (**(code **)(*plVar10 + 0x188))(plVar10,&local_res10,1);
              uVar18 = (uint)(char)local_res10._0_1_;
            }
            else {
              cVar1 = *pcVar11;
              local_res10 = (double)CONCAT71((int7)uVar16,cVar1);
              *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 1;
              uVar18 = (uint)cVar1;
            }
          }
          else {
            FVar5 = param_1->Type;
            FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
            FVar25.Number = 0;
            FVar25.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_06,FVar17.Value);
            if (FVar5 == FVar25) {
              uVar16 = (ulonglong)local_res10 >> 0x20;
              local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
              pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
              puVar12 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
              if (puVar12 + 1 <= (uint *)(*(undefined8 **)&pFVar6->field_0x8)[1]) {
                uVar18 = *puVar12;
                local_res10 = (double)CONCAT44((int)uVar16,uVar18);
                **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
                Set(this,(double)uVar18);
                return true;
              }
              if ((pFVar6->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,4);
                Set(this,(double)((ulonglong)local_res10 & 0xffffffff));
                return true;
              }
              FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_res10);
              Set(this,(double)((ulonglong)local_res10 & 0xffffffff));
              return true;
            }
            FVar5 = param_1->Type;
            FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
            FVar26.Number = 0;
            FVar26.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_07,FVar17.Value);
            if (FVar5 == FVar26) {
              uVar16 = (ulonglong)local_res10 >> 0x10;
              local_res10 = (double)((ulonglong)local_res10 & 0xffffffffffff0000);
              pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
              puVar13 = (ushort *)**(undefined8 **)&pFVar6->field_0x8;
              if ((ushort *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar13 + 1) {
                if ((pFVar6->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,2);
                  uVar18 = (uint)local_res10._0_2_;
                }
                else {
                  FArchive::SerializeByteOrderSwapped(pFVar6,(ushort *)&local_res10);
                  uVar18 = (uint)local_res10._0_2_;
                }
              }
              else {
                uVar3 = *puVar13;
                local_res10 = (double)CONCAT62((int6)uVar16,uVar3);
                **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 2;
                uVar18 = (uint)uVar3;
              }
            }
            else {
              FVar5 = param_1->Type;
              FVar17 = FNameEntryId::FromValidEName((EName)&local_res10);
              FVar27.Number = 0;
              FVar27.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_08,FVar17.Value);
              if (FVar5 != FVar27) {
                return false;
              }
              uVar16 = (ulonglong)local_res10 >> 8;
              local_res10 = (double)((ulonglong)local_res10 & 0xffffffffffffff00);
              plVar10 = *(longlong **)(*(longlong *)param_2 + 8);
              pbVar14 = *(byte **)plVar10[1];
              if ((byte *)((undefined8 *)plVar10[1])[1] < pbVar14 + 1) {
                (**(code **)(*plVar10 + 0x188))(plVar10,&local_res10,1);
                uVar18 = (uint)local_res10._0_1_;
              }
              else {
                bVar2 = *pbVar14;
                local_res10 = (double)CONCAT71((int7)uVar16,bVar2);
                *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 1;
                uVar18 = (uint)bVar2;
              }
            }
          }
        }
        Set(this,(double)(int)uVar18);
        return true;
      }
      uVar16 = (ulonglong)local_res10 >> 0x20;
      local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
      pFVar6 = *(FArchive **)(*(longlong *)param_2 + 8);
      puVar15 = (undefined4 *)**(undefined8 **)&pFVar6->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar15 + 1) {
        if ((pFVar6->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_res10);
        }
      }
      else {
        local_res10 = (double)CONCAT44((int)uVar16,*puVar15);
        **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
      }
      dVar29 = (double)(int)local_res10._0_4_;
    }
  }
  *(double *)this->Data = dVar29;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
  (this->WeakCustomGetter).WeakPtr = local_res20;
  return true;
}

// Set @ 1462bbc10

void __thiscall FMovieSceneNumericVariant::Set(FMovieSceneNumericVariant *this,double param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  *(double *)this->Data = param_1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// Set @ 1462bbc50

void __thiscall
FMovieSceneNumericVariant::Set
          (FMovieSceneNumericVariant *this,UMovieSceneNumericVariantGetter *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UMovieSceneNumericVariantGetter *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (param_1->ReferenceToSelf).field0_0x0.DebugPtr = param_1;
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
  *(ulonglong *)this->Data = (ulonglong)param_1 | 0xfff8000000000000;
  return;
}

// SetTypeBits @ 1462bd2d0

void __thiscall
FMovieSceneNumericVariant::SetTypeBits(FMovieSceneNumericVariant *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) != 0xfff8000000000000) ||
     ((param_1 & 7) != param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLiteral() && (InType & 0x7) == InType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneNumericVariant.cpp"
                       ,0xb0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  *(ulonglong *)this->Data = *(ulonglong *)this->Data | (ulonglong)(param_1 & 7) << 0x30;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->WeakCustomGetter).WeakPtr = local_res8;
  return;
}

// SetWeakUnsafe @ 1462bd390

void __thiscall
FMovieSceneNumericVariant::SetWeakUnsafe
          (FMovieSceneNumericVariant *this,UMovieSceneNumericVariantGetter *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (UMovieSceneNumericVariantGetter *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (param_1->ReferenceToSelf).field0_0x0.DebugPtr = param_1;
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
  *(ulonglong *)this->Data = (ulonglong)param_1 | 0xfff8000000000000;
  MakeWeakUnsafe(this);
  return;
}

// ShallowCopy @ 1462bd420

FMovieSceneNumericVariant * __thiscall
FMovieSceneNumericVariant::ShallowCopy
          (FMovieSceneNumericVariant *this,FMovieSceneNumericVariant *__return_storage_ptr__)

{
  (__return_storage_ptr__->WeakCustomGetter).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)__return_storage_ptr__->Data = *(undefined8 *)this->Data;
  (__return_storage_ptr__->WeakCustomGetter).WeakPtr = (this->WeakCustomGetter).WeakPtr;
  return __return_storage_ptr__;
}

// operator() @ 1504e8010

bool __thiscall `FMovieSceneNumericVariant::GetCustomPtr'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2694709017481051951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2694709017481051951>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

