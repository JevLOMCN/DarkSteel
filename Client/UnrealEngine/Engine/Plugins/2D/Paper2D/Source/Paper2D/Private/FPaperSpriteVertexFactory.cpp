// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// FPaperSpriteVertexFactory @ 14ace9440

FPaperSpriteVertexFactory * __thiscall
FPaperSpriteVertexFactory::FPaperSpriteVertexFactory(FPaperSpriteVertexFactory *this,Type param_1)

{
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)this,param_1,"FPaperSpriteVertexFactory");
  this->_padding_ = (longlong)&___7FPaperSpriteVertexFactory__6B_;
  return this;
}

// Init @ 14ad027a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperSpriteVertexFactory::Init
          (FPaperSpriteVertexFactory *this,FRHICommandListBase *param_1,
          FPaperSpriteVertexBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  FVertexBuffer **local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FVertexBuffer *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [56];
  undefined8 auStack_c0 [7];
  int local_88;
  int local_84 [5];
  FVertexBuffer *local_70;
  undefined4 local_68;
  undefined4 local_64;
  FRHIShaderResourceView *local_60;
  FRHIShaderResourceView *local_58;
  FRHIShaderResourceView *local_50;
  FRHIShaderResourceView *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  FVertexBuffer *local_38;
  undefined8 local_30;
  FRHIShaderResourceView *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_58 = (param_2->TangentBufferSRV).Reference;
  local_50 = (param_2->TexCoordBufferSRV).Reference;
  local_48 = (param_2->ColorBufferSRV).Reference;
  local_60 = (param_2->PositionBufferSRV).Reference;
  local_f8._0_8_ = &param_2->PositionBuffer;
  local_f8._16_8_ = &param_2->TangentBuffer;
  local_70 = &param_2->ColorBuffer;
  local_108 = &param_2->TexCoordBuffer;
  local_88 = 0;
  local_84[0] = 4;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_40 = 0xffffffff;
  local_3b = 1;
  local_38 = (FVertexBuffer *)0x0;
  local_30._0_4_ = 0;
  local_30._4_1_ = '\0';
  local_30._5_1_ = '\0';
  local_30._6_1_ = '\0';
  local_30._7_1_ = Default;
  local_28 = (FRHIShaderResourceView *)0x0;
  local_3c = 0;
  local_f8._8_4_ = 0;
  local_f8._12_4_ = 0x30c00;
  local_f8._24_4_ = 0;
  local_f8._28_4_ = 0x4050800;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x4050804;
  local_68 = 0;
  local_64 = 0x4080400;
  uStack_100 = 0;
  uStack_fc = 0x4020800;
  local_f8._32_8_ = local_f8._16_8_;
  if ((local_f8 + 0x30 <= &local_108) && (&local_108 < &local_88)) {
    local_118 = 0x10;
    local_130 = local_f8 + 0x30;
    local_120 = 0;
    local_128 = 4;
    local_138 = &local_108;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_88 == local_84[0]) {
    local_88 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                         (0x810,(ForElementType<FVertexStreamComponent> *)(local_f8 + 0x30),local_84
                         );
  }
  lVar3 = (longlong)local_88;
  local_88 = local_88 + 1;
  *(FVertexBuffer **)(local_f8 + lVar3 * 0x10 + 0x30) = local_108;
  auStack_c0[lVar3 * 2] = CONCAT44(uStack_fc,uStack_100);
  FLocalVertexFactory::SetData((FLocalVertexFactory *)this,param_1,(FDataType *)local_f8);
  this->VertexBuffer = param_2;
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  return;
}

