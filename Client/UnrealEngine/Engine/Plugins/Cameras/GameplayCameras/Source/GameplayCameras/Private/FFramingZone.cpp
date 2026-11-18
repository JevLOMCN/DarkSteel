// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 17

// FFramingZone @ 14d5fb840

FFramingZone * __thiscall UE::Cameras::FFramingZone::FFramingZone(FFramingZone *this)

{
  this->LeftBound = 0.0;
  this->TopBound = 0.0;
  this->RightBound = 1.0;
  this->BottomBound = 1.0;
  return this;
}

// Add @ 14d6074c0

void __thiscall UE::Cameras::FFramingZone::Add(FFramingZone *this,FFramingZone *param_1)

{
  double dVar1;
  
  dVar1 = param_1->LeftBound;
  if (this->LeftBound <= param_1->LeftBound) {
    dVar1 = this->LeftBound;
  }
  this->LeftBound = dVar1;
  dVar1 = param_1->TopBound;
  if (this->TopBound <= param_1->TopBound) {
    dVar1 = this->TopBound;
  }
  this->TopBound = dVar1;
  dVar1 = param_1->RightBound;
  if (param_1->RightBound <= this->RightBound) {
    dVar1 = this->RightBound;
  }
  this->RightBound = dVar1;
  dVar1 = param_1->BottomBound;
  if (param_1->BottomBound <= this->BottomBound) {
    dVar1 = this->BottomBound;
  }
  this->BottomBound = dVar1;
  return;
}

// ClampBounds @ 14d60e090

void __thiscall UE::Cameras::FFramingZone::ClampBounds(FFramingZone *this,FFramingZone *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1->LeftBound;
  if (this->LeftBound <= param_1->LeftBound) {
    dVar1 = this->LeftBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  this->LeftBound = dVar1;
  dVar1 = param_1->TopBound;
  if (this->TopBound <= param_1->TopBound) {
    dVar1 = this->TopBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = this->RightBound;
  if (__real_3ff0000000000000 <= this->RightBound) {
    dVar2 = __real_3ff0000000000000;
  }
  this->TopBound = dVar1;
  if (dVar2 <= param_1->RightBound) {
    dVar2 = param_1->RightBound;
  }
  dVar1 = this->BottomBound;
  if (__real_3ff0000000000000 <= this->BottomBound) {
    dVar1 = __real_3ff0000000000000;
  }
  this->RightBound = dVar2;
  if (dVar1 <= param_1->BottomBound) {
    dVar1 = param_1->BottomBound;
  }
  this->BottomBound = dVar1;
  return;
}

// ClampBounds @ 14d60e0f0

void __thiscall UE::Cameras::FFramingZone::ClampBounds(FFramingZone *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (this->LeftBound <= dVar1) {
    dVar1 = this->LeftBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  this->LeftBound = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (this->TopBound <= dVar1) {
    dVar1 = this->TopBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = this->RightBound;
  if (__real_3ff0000000000000 <= this->RightBound) {
    dVar2 = __real_3ff0000000000000;
  }
  this->TopBound = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = this->BottomBound;
  if (__real_3ff0000000000000 <= this->BottomBound) {
    dVar1 = __real_3ff0000000000000;
  }
  this->RightBound = dVar2;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  this->BottomBound = dVar1;
  return;
}

// ClampBounds @ 14d60e150

void __thiscall
UE::Cameras::FFramingZone::ClampBounds(FFramingZone *this,TVector2<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - param_2;
  if (this->LeftBound <= dVar1) {
    dVar1 = this->LeftBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  this->LeftBound = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Y - param_2;
  if (this->TopBound <= dVar1) {
    dVar1 = this->TopBound;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  this->TopBound = dVar1;
  dVar1 = this->RightBound;
  if (__real_3ff0000000000000 <= this->RightBound) {
    dVar1 = __real_3ff0000000000000;
  }
  dVar2 = param_2 + (param_1->field0_0x0)._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = this->BottomBound;
  if (__real_3ff0000000000000 <= this->BottomBound) {
    dVar1 = __real_3ff0000000000000;
  }
  this->RightBound = dVar2;
  dVar2 = param_2 + (param_1->field0_0x0)._s_0.Y;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  this->BottomBound = dVar2;
  return;
}

// ClampBounds @ 14d60e1c0

void __thiscall UE::Cameras::FFramingZone::ClampBounds(FFramingZone *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = __real_3ff0000000000000;
  dVar3 = this->LeftBound;
  if (__real_3ff0000000000000 <= this->LeftBound) {
    dVar3 = __real_3ff0000000000000;
  }
  dVar2 = this->RightBound;
  if (__real_3ff0000000000000 <= this->RightBound) {
    dVar2 = __real_3ff0000000000000;
  }
  dVar4 = this->TopBound;
  if (__real_3ff0000000000000 <= this->TopBound) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  this->LeftBound = dVar3;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = this->BottomBound;
  if (dVar1 <= this->BottomBound) {
    dVar3 = dVar1;
  }
  this->TopBound = dVar4;
  this->RightBound = dVar2;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  this->BottomBound = dVar3;
  return;
}

// ComputeClosestIntersection @ 14d60f1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<double> * __thiscall
UE::Cameras::FFramingZone::ComputeClosestIntersection
          (FFramingZone *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,bool param_3)

{
  TVector2<double>_u_0 *pTVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  TVector2<double> *pTVar8;
  ForElementType<UE::Math::TVector2<double>_> FVar9;
  double dVar10;
  undefined1 auStackY_178 [32];
  TLess<void> local_128;
  undefined1 local_120 [16];
  TVector2<double>_u_0 local_110;
  TVector2<double>_u_0 local_100;
  TVector2<double>_u_0 local_f0;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  TVector2<double>_u_0 local_b8;
  ForElementType<UE::Math::TVector2<double>_> local_a8;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_a8.SecondaryData = (ForElementType<UE::Math::TVector2<double>_>)0x0;
  local_80 = 0;
  local_7c = 2;
  if (param_3) {
    pdVar7 = &local_c8;
    local_c8 = (param_2->field0_0x0)._s_0.X;
    dStack_c0 = (param_2->field0_0x0)._s_0.Y;
  }
  else {
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar10 = dVar3 * dVar3 + dVar2 * dVar2;
    if (dVar10 <= __real_3e45798ee0000000) {
      local_e0 = 0.0;
      dStack_d8 = 0.0;
    }
    else {
      local_d0 = __real_3ff0000000000000 / SQRT(dVar10);
      local_e0 = dVar2 * local_d0;
      dStack_d8 = dVar3 * local_d0;
    }
    pdVar7 = &local_e0;
  }
  dVar2 = *pdVar7;
  dVar3 = pdVar7[1];
  if (dVar3 != 0.0) {
    local_120._8_8_ = this->TopBound;
    local_120._0_8_ =
         ((double)local_120._8_8_ - (param_1->field0_0x0)._s_0.Y) * (dVar2 / dVar3) +
         (param_1->field0_0x0)._s_0.X;
    if ((this->LeftBound <= (double)local_120._0_8_) &&
       ((double)local_120._0_8_ < this->RightBound || (double)local_120._0_8_ == this->RightBound))
    {
      iVar6 = 0;
      if ((&local_a8 <= (ForElementType<UE::Math::TVector2<double>_> *)local_120) &&
         (local_120 < &local_a8.SecondaryData)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
        iVar6 = local_80;
        if (local_80 == local_7c) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                            (0x810,&local_a8,&local_7c);
        }
      }
      local_80 = iVar6 + 1;
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      pTVar1 = (TVector2<double>_u_0 *)((longlong)FVar9 + (longlong)iVar6 * 0x10);
      (((TVector2<double>_u_0 *)&(pTVar1->_s_0).X)->_s_0).X = (double)local_120._0_8_;
      (pTVar1->_s_0).Y = (double)local_120._8_8_;
    }
    local_110._s_0.Y = this->BottomBound;
    local_110._s_0.X =
         (local_110._s_0.Y - (param_1->field0_0x0)._s_0.Y) * (dVar2 / dVar3) +
         (param_1->field0_0x0)._s_0.X;
    if ((this->LeftBound <= local_110._s_0.X) &&
       (local_110._s_0.X < this->RightBound || local_110._s_0.X == this->RightBound)) {
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_110) {
        FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
          FVar9 = local_a8.SecondaryData;
        }
        if ((&local_110 < (TVector2<double>_u_0 *)((longlong)local_7c * 0x10 + (longlong)FVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = local_80;
      if (local_80 == local_7c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                          (0x810,&local_a8,&local_7c);
      }
      local_80 = iVar6 + 1;
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      pTVar1 = (TVector2<double>_u_0 *)((longlong)FVar9 + (longlong)iVar6 * 0x10);
      (((TVector2<double>_u_0 *)&(pTVar1->_s_0).X)->_s_0).X = local_110._s_0.X;
      (pTVar1->_s_0).Y = local_110._s_0.Y;
    }
  }
  if (dVar2 != 0.0) {
    local_100._s_0.X = this->LeftBound;
    local_100._s_0.Y =
         (local_100._s_0.X - (param_1->field0_0x0)._s_0.X) * (dVar3 / dVar2) +
         (param_1->field0_0x0)._s_0.Y;
    if ((this->TopBound <= local_100._s_0.Y) &&
       (local_100._s_0.Y < this->BottomBound || local_100._s_0.Y == this->BottomBound)) {
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_100) {
        FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
          FVar9 = local_a8.SecondaryData;
        }
        if ((&local_100 < (TVector2<double>_u_0 *)((longlong)local_7c * 0x10 + (longlong)FVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = local_80;
      if (local_80 == local_7c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                          (0x810,&local_a8,&local_7c);
      }
      local_80 = iVar6 + 1;
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      pTVar1 = (TVector2<double>_u_0 *)((longlong)FVar9 + (longlong)iVar6 * 0x10);
      (((TVector2<double>_u_0 *)&(pTVar1->_s_0).X)->_s_0).X = local_100._s_0.X;
      (pTVar1->_s_0).Y = local_100._s_0.Y;
    }
    local_f0._s_0.X = this->RightBound;
    local_f0._s_0.Y =
         (local_f0._s_0.X - (param_1->field0_0x0)._s_0.X) * (dVar3 / dVar2) +
         (param_1->field0_0x0)._s_0.Y;
    if ((this->TopBound <= local_f0._s_0.Y) &&
       (local_f0._s_0.Y < this->BottomBound || local_f0._s_0.Y == this->BottomBound)) {
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_f0) {
        FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
          FVar9 = local_a8.SecondaryData;
        }
        if ((&local_f0 < (TVector2<double>_u_0 *)((longlong)local_7c * 0x10 + (longlong)FVar9)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = local_80;
      if (local_80 == local_7c) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
                          (0x810,&local_a8,&local_7c);
      }
      local_80 = iVar6 + 1;
      FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
        FVar9 = local_a8.SecondaryData;
      }
      pTVar1 = (TVector2<double>_u_0 *)((longlong)FVar9 + (longlong)iVar6 * 0x10);
      (((TVector2<double>_u_0 *)&(pTVar1->_s_0).X)->_s_0).X = local_f0._s_0.X;
      (pTVar1->_s_0).Y = local_f0._s_0.Y;
    }
  }
  iVar6 = local_80;
  if ((local_80 < 1) || (2 < local_80)) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2453252780802965710>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Math\\CameraFramingZoneMath.cpp"
                       ,0xce,"NumIntersections > 0 && NumIntersections <= 2");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector2<double> *)(*pcVar4)();
      return pTVar8;
    }
    if (iVar6 < 1) {
      (__return_storage_ptr__->field0_0x0)._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
      bVar5 = local_a8.SecondaryData == (ForElementType<UE::Math::TVector2<double>_>)0x0;
      goto joined_r0x00014d60f7c9;
    }
  }
  if (1 < iVar6) {
    local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<UE::Math::TVector2<double>_>)0x0) {
      FVar9 = local_a8.SecondaryData;
    }
    AlgoImpl::
    IntroSortInternal<UE::Math::TVector2<double>,int,_UE::Cameras::FFramingZone::ComputeClosestIntersection_::__l30::<lambda_1>,TLess<void>_>
              ((TVector2<double> *)FVar9,local_80,(<lambda_1> *)&local_b8._s_0,local_128);
  }
  if ((local_80 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar4)();
    return pTVar8;
  }
  bVar5 = local_a8.SecondaryData == (ForElementType<UE::Math::TVector2<double>_>)0x0;
  FVar9 = (ForElementType<UE::Math::TVector2<double>_>)&local_a8;
  if (!bVar5) {
    FVar9 = local_a8.SecondaryData;
  }
  dVar2 = *(double *)((longlong)FVar9 + 8);
  (__return_storage_ptr__->field0_0x0).XY[0] = *(double *)FVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
joined_r0x00014d60f7c9:
  if (!bVar5) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  return __return_storage_ptr__;
}

// Contains @ 14d611bc0

bool __thiscall UE::Cameras::FFramingZone::Contains(FFramingZone *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((this->LeftBound <= dVar1) && (dVar1 < this->RightBound || dVar1 == this->RightBound)) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y, this->TopBound <= dVar1)) &&
     (dVar1 < this->BottomBound || dVar1 == this->BottomBound)) {
    return true;
  }
  return false;
}

// FromPoints @ 14d6177f0

FFramingZone * __cdecl
UE::Cameras::FFramingZone::FromPoints
          (FFramingZone *__return_storage_ptr__,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFramingZone *pFVar4;
  TVector2<double> *pTVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar7 = param_1->ArrayNum;
  __return_storage_ptr__->LeftBound = 0.0;
  __return_storage_ptr__->TopBound = 0.0;
  __return_storage_ptr__->RightBound = 1.0;
  __return_storage_ptr__->BottomBound = 1.0;
  if (iVar7 < 1) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2453252780802965547>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Math\\CameraFramingZoneMath.cpp"
                       ,0x2b,"ScreenPoints.Num() > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFramingZone *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    pTVar5 = TArrayView<UE::Math::TVector2<double>_const_,int>::operator[](param_1,0);
    uVar8 = 1;
    dVar12 = (pTVar5->field0_0x0)._s_0.X;
    dVar11 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->LeftBound = dVar12;
    __return_storage_ptr__->TopBound = dVar11;
    __return_storage_ptr__->RightBound = dVar12;
    __return_storage_ptr__->BottomBound = dVar11;
    if (1 < iVar7) {
      lVar6 = 0x10;
      do {
        uVar3 = 0;
        if ((int)uVar8 < iVar7) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FFramingZone *)(*pcVar1)();
          return pFVar4;
        }
        uVar8 = uVar8 + 1;
        iVar7 = param_1->ArrayNum;
        dVar12 = *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar6);
        dVar11 = *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar6 + 8);
        dVar9 = dVar12;
        if (__return_storage_ptr__->LeftBound <= dVar12) {
          dVar9 = __return_storage_ptr__->LeftBound;
        }
        if (dVar12 <= __return_storage_ptr__->RightBound) {
          dVar12 = __return_storage_ptr__->RightBound;
        }
        dVar10 = __return_storage_ptr__->TopBound;
        if (dVar11 <= __return_storage_ptr__->TopBound) {
          dVar10 = dVar11;
        }
        lVar6 = lVar6 + 0x10;
        if (dVar11 <= __return_storage_ptr__->BottomBound) {
          dVar11 = __return_storage_ptr__->BottomBound;
        }
        __return_storage_ptr__->LeftBound = dVar9;
        __return_storage_ptr__->RightBound = dVar12;
        __return_storage_ptr__->TopBound = dVar10;
        __return_storage_ptr__->BottomBound = dVar11;
      } while ((int)uVar8 < iVar7);
    }
  }
  return __return_storage_ptr__;
}

// FromRelativeMargins @ 14d617970

FFramingZone * __cdecl
UE::Cameras::FFramingZone::FromRelativeMargins
          (FFramingZone *__return_storage_ptr__,TVector2<double> *param_1,
          FCameraFramingZone *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = dVar2 + param_2->Right;
  dVar2 = dVar2 - param_2->Left;
  dVar4 = dVar1 + param_2->Bottom;
  dVar1 = dVar1 - param_2->Top;
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  __return_storage_ptr__->LeftBound = dVar2;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  __return_storage_ptr__->TopBound = dVar1;
  __return_storage_ptr__->RightBound = dVar3;
  __return_storage_ptr__->BottomBound = dVar4;
  return __return_storage_ptr__;
}

// FromScreenMargins @ 14d6179f0

FFramingZone * __cdecl
UE::Cameras::FFramingZone::FromScreenMargins
          (FFramingZone *__return_storage_ptr__,FCameraFramingZone *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = __real_3ff0000000000000;
  dVar2 = __real_3ff0000000000000 - param_1->Right;
  dVar3 = param_1->Left;
  if (__real_3ff0000000000000 <= param_1->Left) {
    dVar3 = __real_3ff0000000000000;
  }
  dVar4 = param_1->Top;
  if (__real_3ff0000000000000 <= param_1->Top) {
    dVar4 = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  __return_storage_ptr__->LeftBound = dVar3;
  __return_storage_ptr__->TopBound = dVar4;
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar3 = dVar1 - param_1->Bottom;
  __return_storage_ptr__->RightBound = dVar2;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  __return_storage_ptr__->BottomBound = dVar3;
  return __return_storage_ptr__;
}

// GetCanvasPosition @ 14d619c90

TVector2<double> * __thiscall
UE::Cameras::FFramingZone::GetCanvasPosition
          (FFramingZone *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y * this->TopBound;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (param_1->field0_0x0)._s_0.X * this->LeftBound;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// GetCanvasSize @ 14d619cb0

TVector2<double> * __thiscall
UE::Cameras::FFramingZone::GetCanvasSize
          (FFramingZone *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (this->BottomBound - this->TopBound) * (param_1->field0_0x0)._s_0.Y;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (this->RightBound - this->LeftBound) * (param_1->field0_0x0)._s_0.X;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// GetNormalizedBound @ 14d61ac10

double __cdecl UE::Cameras::FFramingZone::GetNormalizedBound(double param_1)

{
  return ((param_1 - __real_3fe0000000000000) + param_1) - __real_3fe0000000000000;
}

// GetNormalizedBounds @ 14d61ac40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
UE::Cameras::FFramingZone::GetNormalizedBounds
          (FFramingZone *this,TVector4<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar2 = this->LeftBound - ___xmm_3fe00000000000003fe0000000000000;
  dVar3 = this->TopBound - _UNK_150689678;
  dVar5 = this->RightBound - ___xmm_3fe00000000000003fe0000000000000;
  dVar6 = this->BottomBound - _UNK_150689678;
  dVar3 = dVar3 + dVar3;
  dVar6 = dVar6 + dVar6;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2 + dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5 + dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar4;
  return __return_storage_ptr__;
}

// IsValid @ 14d621670

bool __thiscall UE::Cameras::FFramingZone::IsValid(FFramingZone *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = this->LeftBound;
  if ((((((0.0 <= dVar1) && (dVar1 <= __real_3ff0000000000000)) &&
        (dVar2 = this->TopBound, 0.0 <= dVar2)) &&
       ((dVar2 <= __real_3ff0000000000000 && (dVar3 = this->RightBound, 0.0 <= dVar3)))) &&
      ((dVar3 <= __real_3ff0000000000000 &&
       ((dVar4 = this->BottomBound, 0.0 <= dVar4 && (dVar4 <= __real_3ff0000000000000)))))) &&
     ((dVar1 <= dVar3 && (dVar2 <= dVar4)))) {
    return true;
  }
  return false;
}

// Serialize @ 14d6356b0

void __thiscall UE::Cameras::FFramingZone::Serialize(FFramingZone *this,FArchive *param_1)

{
  undefined1 *puVar1;
  double *pdVar2;
  double *pdVar3;
  
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)this);
    }
  }
  else {
    this->LeftBound = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar2 = &this->TopBound;
  puVar1 = &param_1->field_0x2a;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar2 = &this->RightBound;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar2 = &this->BottomBound;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if (pdVar3 + 1 <= (double *)(*(longlong **)&param_1->field_0x8)[1]) {
    *pdVar2 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return;
  }
  if ((*puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d6357f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
  return;
}

