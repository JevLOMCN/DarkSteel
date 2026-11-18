// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ~FRDGTextureDesc @ 14485e1e0

void __thiscall FRDGTextureDesc::~FRDGTextureDesc(FRDGTextureDesc *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&this->field_0x40;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Create2D @ 14486c9e0

FRDGTextureDesc * __cdecl
FRDGTextureDesc::Create2D
          (FRDGTextureDesc *__return_storage_ptr__,TIntPoint<int> param_1,EPixelFormat param_2,
          FClearValueBinding *param_3,ETextureCreateFlags param_4,uchar param_5,uchar param_6,
          uint param_7)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)((longlong)&param_3->Value + 4);
  *(ETextureCreateFlags *)__return_storage_ptr__ = param_4;
  fVar1 = (param_3->Value).Color[3];
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar1;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(uint *)&__return_storage_ptr__->field_0x20 = param_7;
  *(TIntPoint<int>_u_0 *)&__return_storage_ptr__->field_0x24 =
       (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  __return_storage_ptr__->field_0x30 = param_5;
  __return_storage_ptr__->field_0x31 = param_6;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  __return_storage_ptr__->field_0x32 = 0;
  __return_storage_ptr__->field_0x33 = param_2;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// Create3D @ 144c329d0

FRDGTextureDesc * __cdecl
FRDGTextureDesc::Create3D
          (FRDGTextureDesc *__return_storage_ptr__,TIntVector3<int> *param_1,EPixelFormat param_2,
          FClearValueBinding *param_3,ETextureCreateFlags param_4,uchar param_5,uint param_6)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FRDGTextureDesc *pFVar7;
  
  if (0xffff < (param_1->field0_0x0)._s_0.Z) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                       ,0x29e,L"Depth parameter (Size.Z) exceeds valid range");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGTextureDesc *)(*pcVar2)();
      return pFVar7;
    }
  }
  uVar3 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)((longlong)&param_3->Value + 4);
  uVar5 = *(undefined8 *)&param_1->field0_0x0;
  *(ETextureCreateFlags *)__return_storage_ptr__ = param_4;
  fVar1 = (param_3->Value).Color[3];
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar4;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar1;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(uint *)&__return_storage_ptr__->field_0x20 = param_6;
  *(undefined8 *)&__return_storage_ptr__->field_0x24 = uVar5;
  *(undefined2 *)&__return_storage_ptr__->field_0x2c =
       *(undefined2 *)((longlong)&param_1->field0_0x0 + 8);
  __return_storage_ptr__->field_0x30 = param_5;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  __return_storage_ptr__->field_0x33 = param_2;
  *(undefined2 *)&__return_storage_ptr__->field_0x2e = 1;
  *(undefined2 *)&__return_storage_ptr__->field_0x31 = 0x201;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// FRDGTextureDesc @ 145127460

FRDGTextureDesc * __thiscall FRDGTextureDesc::FRDGTextureDesc(FRDGTextureDesc *this)

{
  byte bVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 1;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  bVar1 = (byte)GNumExplicitGPUsForRendering;
  *(undefined4 *)&this->field_0x20 = 0;
  *(int *)&this->field_0x1c = (1 << (bVar1 & 0x1f)) + -1;
  *(undefined4 *)&this->field_0x24 = 1;
  *(undefined4 *)&this->field_0x28 = 1;
  *(undefined4 *)&this->field_0x2c = 0x10001;
  *(undefined4 *)&this->field_0x30 = 0x101;
  *(undefined2 *)&this->field_0x34 = 0xff00;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x4c = 1;
  return this;
}

// Create2DArray @ 1452ba120

FRDGTextureDesc * __cdecl
FRDGTextureDesc::Create2DArray
          (FRDGTextureDesc *__return_storage_ptr__,TIntPoint<int> param_1,EPixelFormat param_2,
          FClearValueBinding *param_3,ETextureCreateFlags param_4,ushort param_5,uchar param_6,
          uchar param_7,uint param_8)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)((longlong)&param_3->Value + 4);
  *(ETextureCreateFlags *)__return_storage_ptr__ = param_4;
  fVar1 = (param_3->Value).Color[3];
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar1;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(uint *)&__return_storage_ptr__->field_0x20 = param_8;
  *(TIntPoint<int>_u_0 *)&__return_storage_ptr__->field_0x24 =
       (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  *(ushort *)&__return_storage_ptr__->field_0x2e = param_5;
  __return_storage_ptr__->field_0x30 = param_6;
  __return_storage_ptr__->field_0x31 = param_7;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x2c = 1;
  __return_storage_ptr__->field_0x32 = 1;
  __return_storage_ptr__->field_0x33 = param_2;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  return __return_storage_ptr__;
}

// CreateRenderTargetTextureDesc @ 1454e9740

FRDGTextureDesc * __cdecl
FRDGTextureDesc::CreateRenderTargetTextureDesc
          (FRDGTextureDesc *__return_storage_ptr__,TIntPoint<int> param_1,EPixelFormat param_2,
          FClearValueBinding *param_3,ETextureCreateFlags param_4,bool param_5,ushort param_6)

{
  float fVar1;
  undefined8 uVar2;
  
  *(ETextureCreateFlags *)__return_storage_ptr__ = param_4;
  fVar1 = (param_3->Value).Color[3];
  uVar2 = *(undefined8 *)((longlong)&param_3->Value + 4);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)param_3;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar2;
  *(float *)&__return_storage_ptr__->field_0x18 = fVar1;
  *(int *)&__return_storage_ptr__->field_0x1c =
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  *(TIntPoint<int>_u_0 *)&__return_storage_ptr__->field_0x24 =
       (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  *(undefined2 *)&__return_storage_ptr__->field_0x30 = 0x101;
  __return_storage_ptr__->field_0x33 = param_2;
  *(undefined2 *)&__return_storage_ptr__->field_0x34 = 0xff00;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  if (param_5) {
    *(ushort *)&__return_storage_ptr__->field_0x2e = param_6;
    *(undefined2 *)&__return_storage_ptr__->field_0x2c = 1;
    __return_storage_ptr__->field_0x32 = 1;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
    *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x10001;
  __return_storage_ptr__->field_0x32 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  return __return_storage_ptr__;
}

