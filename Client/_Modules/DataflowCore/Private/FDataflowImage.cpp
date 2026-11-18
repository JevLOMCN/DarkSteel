// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 18

// StaticStruct @ 1443f6d60

UScriptStruct * __cdecl FDataflowImage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImage,(UObject *)pUVar1,L"DataflowImage"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FDataflowImage.OuterSingleton;
}

// FDataflowImage @ 14442c430

FDataflowImage * __thiscall
FDataflowImage::FDataflowImage(FDataflowImage *this,FDataflowImage *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  size_t _Size;
  FScriptContainerElement *_Src;
  longlong lVar3;
  
  lVar3 = (param_1->Image)._padding_;
  pTVar1 = &(this->Image).RawData;
  plVar2 = &(this->Image).RawData.ArrayMax;
  (this->Image)._padding_ = (param_1->Image)._padding_;
  (this->Image)._padding_ = lVar3;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Size = (param_1->Image).RawData.ArrayNum;
  _Src = (param_1->Image).RawData.AllocatorInstance.Data;
  (this->Image).RawData.ArrayNum = _Size;
  if (_Size == 0) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,_Size,0,&pTVar1->AllocatorInstance,_Size,plVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
  }
  return this;
}

// ~FDataflowImage @ 1444337a0

void __thiscall FDataflowImage::~FDataflowImage(FDataflowImage *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Image).RawData.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 1444341f0

FDataflowImage * __thiscall FDataflowImage::operator=(FDataflowImage *this,FDataflowImage *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  size_t _Size;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar4;
  
  lVar3 = (param_1->Image)._padding_;
  pTVar4 = &(param_1->Image).RawData;
  pTVar1 = &(this->Image).RawData;
  (this->Image)._padding_ = (param_1->Image)._padding_;
  (this->Image)._padding_ = lVar3;
  if (pTVar1 != pTVar4) {
    lVar3 = (this->Image).RawData.ArrayMax;
    plVar2 = &(this->Image).RawData.ArrayMax;
    _Src = (pTVar4->AllocatorInstance).Data;
    _Size = (param_1->Image).RawData.ArrayNum;
    (this->Image).RawData.ArrayNum = _Size;
    if ((_Size == 0) && (lVar3 == 0)) {
      *plVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,_Size,lVar3,&pTVar1->AllocatorInstance,_Size,plVar2);
      if (_Size != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,_Size);
      }
    }
  }
  return this;
}

// ConvertToRGBA32F @ 14443d080

void __thiscall FDataflowImage::ConvertToRGBA32F(FDataflowImage *this)

{
  FImage::ChangeFormat(&this->Image,RGBA32F,Linear);
  return;
}

// CopyRGBAPixels @ 14443d320

bool __thiscall
FDataflowImage::CopyRGBAPixels
          (FDataflowImage *this,TArrayView<UE::Math::TVector4<float>,__int64> *param_1)

{
  FImageView local_38;
  FImageView local_20;
  
  if (*(char *)((longlong)&(this->Image)._padding_ + 4) == '\x05') {
    local_38._padding_._4_4_ = *(int *)((longlong)&(this->Image)._padding_ + 4);
    local_38._padding_._0_4_ = (int)(this->Image)._padding_;
    if ((longlong)(local_38._padding_._4_4_ * (int)local_38._padding_) == param_1->ArrayNum) {
      local_38.RawData = param_1->DataPtr;
      local_20._padding_ = (this->Image)._padding_;
      local_20._padding_ = (this->Image)._padding_;
      local_20.RawData = (this->Image).RawData.AllocatorInstance.Data;
      local_38._padding_._0_4_ = 1;
      local_38._padding_._4_2_ = 5;
      FImageCore::CopyImage(&local_38,&local_20);
      return true;
    }
  }
  return false;
}

// CreateFromColor @ 144444060

void __thiscall
FDataflowImage::CreateFromColor(FDataflowImage *this,int param_1,int param_2,FLinearColor *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FImageView local_48;
  FImageView local_30;
  
  FImage::Init(&this->Image,param_1,param_2,RGBA32F,Linear);
  uVar5 = param_1 * param_2;
  uVar6 = (ulonglong)uVar5;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_4c = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  local_50 = 0;
  if ((uVar5 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar5,&local_58,0,&local_4c), 0 < (int)uVar5)) {
    do {
      if ((local_58.Data <= param_3) &&
         ((param_3 < local_58.Data + (longlong)local_4c * 0x10 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_58,&local_4c);
      }
      uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      iVar1 = local_50 + 1;
      *(undefined8 *)(local_58.Data + (longlong)local_50 * 0x10) =
           *(undefined8 *)&param_3->field0_0x0;
      *(undefined8 *)(local_58.Data + (longlong)local_50 * 0x10 + 8) = uVar3;
      uVar6 = uVar6 - 1;
      local_50 = iVar1;
    } while (uVar6 != 0);
  }
  local_30._padding_ = (this->Image)._padding_;
  local_30._padding_ = (this->Image)._padding_;
  local_48.RawData = local_58.Data;
  local_30.RawData = (this->Image).RawData.AllocatorInstance.Data;
  local_48._padding_._0_4_ = 1;
  local_48._padding_._4_2_ = 5;
  local_48._padding_._0_4_ = param_1;
  local_48._padding_._4_4_ = param_2;
  FImageCore::CopyImage(&local_48,&local_30);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// CreateFromColor @ 144444200

void __thiscall
FDataflowImage::CreateFromColor
          (FDataflowImage *this,EDataflowImageResolution param_1,FLinearColor *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_2->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  CreateFromColor(this,param_1,param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// CreateR32F @ 144444230

void __thiscall FDataflowImage::CreateR32F(FDataflowImage *this,int param_1,int param_2)

{
  FImage::Init(&this->Image,param_1,param_2,R32F,Linear);
  return;
}

// CreateR32F @ 144444250

void __thiscall FDataflowImage::CreateR32F(FDataflowImage *this,EDataflowImageResolution param_1)

{
  FImage::Init(&this->Image,param_1,param_1,R32F,Linear);
  return;
}

// CreateRGBA32F @ 144444270

void __thiscall FDataflowImage::CreateRGBA32F(FDataflowImage *this,int param_1,int param_2)

{
  FImage::Init(&this->Image,param_1,param_2,RGBA32F,Linear);
  return;
}

// CreateRGBA32F @ 144444290

void __thiscall FDataflowImage::CreateRGBA32F(FDataflowImage *this,EDataflowImageResolution param_1)

{
  FImage::Init(&this->Image,param_1,param_1,RGBA32F,Linear);
  return;
}

// GetHeight @ 14444b6e0

int __thiscall FDataflowImage::GetHeight(FDataflowImage *this)

{
  return *(int *)((longlong)&(this->Image)._padding_ + 4);
}

// GetImage @ 14444b6f0

FImage * __thiscall FDataflowImage::GetImage(FDataflowImage *this)

{
  return &this->Image;
}

// GetWidth @ 14444f560

int __thiscall FDataflowImage::GetWidth(FDataflowImage *this)

{
  return (int)(this->Image)._padding_;
}

// ReadChannel @ 144453750

void __thiscall
FDataflowImage::ReadChannel
          (FDataflowImage *this,EDataflowImageChannel param_1,FDataflowImage *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FLinearColor_u_0 local_68;
  FImageView local_58;
  FImageView local_40;
  
  cVar2 = *(char *)((longlong)&(this->Image)._padding_ + 4);
  iVar10 = *(int *)((longlong)&(this->Image)._padding_ + 4);
  iVar3 = (int)(this->Image)._padding_;
  if (cVar2 == '\b') {
    FImage::Init(&param_2->Image,iVar3,iVar10,R32F,Linear);
    local_58._padding_ = (param_2->Image)._padding_;
    local_58._padding_ = (param_2->Image)._padding_;
    local_58.RawData = (param_2->Image).RawData.AllocatorInstance.Data;
    local_40.RawData = (this->Image).RawData.AllocatorInstance.Data;
    local_40._padding_ = (this->Image)._padding_;
    local_40._padding_ = (this->Image)._padding_;
    FImageCore::CopyImage(&local_40,&local_58);
    return;
  }
  if (cVar2 != '\x05') {
    local_68 = FLinearColor::Black.field0_0x0;
    CreateFromColor(param_2,iVar3,iVar10,(FLinearColor *)&local_68._s_0);
    return;
  }
  FImage::Init(&param_2->Image,iVar3,iVar10,R32F,Linear);
  if ((*(char *)((longlong)&(param_2->Image)._padding_ + 4) != '\b') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format == ERawImageFormat::R32F",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                         ,0x2aa,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = (param_2->Image).RawData.ArrayNum;
  pFVar5 = (param_2->Image).RawData.AllocatorInstance.Data;
  if ((*(char *)((longlong)&(this->Image)._padding_ + 4) != '\x05') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format == ERawImageFormat::RGBA32F",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                         ,0x2d6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = 0;
  uVar11 = (ulonglong)(this->Image).RawData.ArrayNum >> 4;
  if (uVar11 != 0) {
    pFVar13 = (this->Image).RawData.AllocatorInstance.Data + (longlong)(int)param_1 * 4;
    lVar9 = 0;
    do {
      uVar12 = (uint)((ulonglong)lVar9 >> 0x3f) ^ 1;
      uVar8 = 0;
      if (lVar9 < (longlong)uVar11) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar1 = *(undefined4 *)pFVar13;
      uVar8 = 0;
      if (lVar9 < (longlong)(uVar4 >> 2)) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = iVar10 + 1;
      *(undefined4 *)(pFVar5 + lVar9 * 4) = uVar1;
      lVar9 = lVar9 + 1;
      pFVar13 = pFVar13 + 0x10;
    } while ((longlong)iVar10 < (longlong)uVar11);
  }
  return;
}

// Serialize @ 144460420

bool __thiscall FDataflowImage::Serialize(FDataflowImage *this,FArchive *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  Type local_res8 [8];
  EGammaSpace local_res10 [8];
  FImageInfo local_18;
  
  lVar1 = (this->Image)._padding_;
  local_18.SizeX = (int)(this->Image)._padding_;
  local_18.SizeY = *(int *)((longlong)&(this->Image)._padding_ + 4);
  local_18.NumSlices = (int)(this->Image)._padding_;
  local_18._12_4_ = *(undefined4 *)((longlong)&(this->Image)._padding_ + 4);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (Type)((ulonglong)lVar1 >> 0x20);
  local_res10[0] = (EGammaSpace)((ulonglong)lVar1 >> 0x28);
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_18);
    }
  }
  else {
    local_18.SizeX = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_18.SizeY,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_18.SizeY);
    }
  }
  else {
    local_18.SizeY = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_18.NumSlices,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_18.NumSlices);
    }
  }
  else {
    local_18.NumSlices = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((Type *)plVar2[1] < (Type *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(Type *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((EGammaSpace *)plVar2[1] < (EGammaSpace *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(EGammaSpace *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    local_18.GammaSpace = local_res10[0];
    local_18.Format = local_res8[0];
    FImage::Init(&this->Image,&local_18);
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<64>_>
            (param_1,&(this->Image).RawData);
  return true;
}

// WriteChannel @ 144469ed0

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __thiscall
FDataflowImage::WriteChannel
          (FDataflowImage *this,EDataflowImageChannel param_1,FDataflowImage *param_2)

{
  ulong64 uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  void *pvVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  FLinearColor *pFVar10;
  longlong lVar11;
  ulong64 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  Type TVar18;
  undefined4 uVar19;
  FScriptContainerElement local_148 [8];
  FImageView local_140;
  FImage local_128;
  FImage local_100;
  FImageView local_d8;
  FDataflowImage local_c0;
  FLinearColor_u_0 local_98;
  FImageView local_88;
  FScriptContainerElement *local_60;
  FLinearColor local_58 [2];
  
  local_140._padding_._0_4_ = (int)(param_2->Image)._padding_;
  local_140._padding_._4_4_ = *(int *)((longlong)&(param_2->Image)._padding_ + 4);
  local_140._padding_._0_4_ = (int)(param_2->Image)._padding_;
  uVar19 = *(undefined4 *)((longlong)&(param_2->Image)._padding_ + 4);
  local_140.RawData = (param_2->Image).RawData.AllocatorInstance.Data;
  local_c0.Image._padding_ = 0;
  local_c0.Image._padding_._0_4_ = 0;
  local_c0.Image._padding_._4_4_ = CONCAT22(local_c0.Image._padding_._6_2_,0x201);
  local_c0.Image.RawData.ArrayMax = 0;
  local_c0.Image.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Image.RawData.ArrayNum = 0;
  local_140._padding_._4_1_ = (Type)uVar19;
  local_140._padding_._5_1_ = (char)((uint)uVar19 >> 8);
  local_140._padding_._6_2_ = (undefined2)((uint)uVar19 >> 0x10);
  if (((int)local_140._padding_ == 0) || (local_140._padding_._4_4_ == 0)) {
    local_98 = FLinearColor::Black.field0_0x0;
    CreateFromColor(&local_c0,4,4,(FLinearColor *)&local_98._s_0);
    local_d8.RawData = local_c0.Image.RawData.AllocatorInstance.Data;
    local_140.RawData = local_c0.Image.RawData.AllocatorInstance.Data;
    local_140._padding_._0_4_ = (int)local_c0.Image._padding_;
    local_140._padding_._4_1_ = (Type)local_c0.Image._padding_._4_4_;
    local_140._padding_._5_1_ = (char)((uint)local_c0.Image._padding_._4_4_ >> 8);
    local_140._padding_._6_2_ = (undefined2)((uint)local_c0.Image._padding_._4_4_ >> 0x10);
    local_140._padding_._0_4_ = (int)local_c0.Image._padding_;
    local_140._padding_._4_4_ = local_c0.Image._padding_._4_4_;
    uVar19 = local_c0.Image._padding_._4_4_;
  }
  iVar16 = (int)(this->Image)._padding_;
  local_100._padding_ = 0;
  local_100._padding_._0_4_ = 0;
  local_100._padding_._4_2_ = 0x201;
  local_100.RawData.ArrayMax = 0;
  local_100.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.RawData.ArrayNum = 0;
  TVar18 = (Type)uVar19;
  if (((int)local_140._padding_ != iVar16) &&
     (iVar4 = *(int *)((longlong)&(this->Image)._padding_ + 4), local_140._padding_._4_4_ != iVar4))
  {
    FImage::Init(&local_100,iVar16,iVar4,local_140._padding_._4_1_,Linear);
    local_88._padding_ =
         CONCAT26(local_100._padding_._6_2_,
                  CONCAT24(local_100._padding_._4_2_,(int)local_100._padding_));
    local_88.RawData = local_100.RawData.AllocatorInstance.Data;
    local_88._padding_ = local_100._padding_;
    FImageCore::ResizeImage(&local_140,&local_88,Default);
    local_140._padding_._4_1_ = (Type)local_100._padding_._4_2_;
    local_d8.RawData = local_100.RawData.AllocatorInstance.Data;
    local_140.RawData = local_100.RawData.AllocatorInstance.Data;
    local_140._padding_._0_4_ = (int)local_100._padding_;
    local_140._padding_._4_4_ = local_100._padding_._4_4_;
    local_140._padding_._0_4_ = (int)local_100._padding_;
    local_140._padding_._5_1_ = (char)((ushort)local_100._padding_._4_2_ >> 8);
    local_140._padding_._6_2_ = local_100._padding_._6_2_;
    TVar18 = local_140._padding_._4_1_;
  }
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0;
  local_128._padding_._4_4_ = CONCAT22(local_128._padding_._6_2_,0x201);
  local_128.RawData.ArrayMax = 0;
  local_128.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.RawData.ArrayNum = 0;
  if (TVar18 != R32F) {
    FImage::Init(&local_128,(int)(this->Image)._padding_,
                 *(int *)((longlong)&(this->Image)._padding_ + 4),R32F,Linear);
    uVar12 = local_128.RawData.ArrayNum;
    if (local_140._padding_._4_1_ == RGBA32F) {
      if ((local_128._padding_._4_1_ != '\b') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Format == ERawImageFormat::R32F",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                             ,0x2aa,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar7.Data = local_128.RawData.AllocatorInstance.Data;
      uVar15 = (ulonglong)local_128.RawData.ArrayNum >> 2;
      if ((local_140._padding_._4_1_ != RGBA32F) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Format == ERawImageFormat::RGBA32F",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                             ,0x18a,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((local_140._padding_._5_1_ != '\0') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("GammaSpace == EGammaSpace::Linear",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                             ,0x18b,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = local_140.RawData;
      lVar13 = (longlong)(int)local_140._padding_ * (longlong)local_140._padding_._4_4_ *
               (longlong)(int)local_140._padding_;
      if ((lVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar16 = 0;
      if (0 < lVar13) {
        lVar11 = 0;
        do {
          uVar14 = (uint)((ulonglong)lVar11 >> 0x3f) ^ 1;
          uVar9 = 0;
          if (lVar11 < lVar13) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = FLinearColor::LinearRGBToHSV((FLinearColor *)pFVar17,local_58);
          fVar2 = (pFVar10->field0_0x0)._s_0.B;
          uVar9 = 0;
          if (lVar11 < (longlong)uVar15) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar16 = iVar16 + 1;
          *(float *)(FVar7.Data + lVar11 * 4) = fVar2;
          lVar11 = lVar11 + 1;
          pFVar17 = pFVar17 + 0x10;
        } while (iVar16 < lVar13);
      }
    }
    else {
      local_148[0] = (FScriptContainerElement)0x0;
      if (local_128.RawData.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_128.RawData.ArrayNum);
      }
      local_128.RawData.ArrayNum = 0;
      if (local_128.RawData.ArrayMax != uVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,uVar12,&local_128.RawData.AllocatorInstance,0,&local_128.RawData.ArrayMax);
      }
      if (0 < (longlong)uVar12) {
        do {
          if (((local_128.RawData.AllocatorInstance.Data <= local_148) &&
              (local_148 < local_128.RawData.AllocatorInstance.Data + local_128.RawData.ArrayMax))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_128.RawData.ArrayNum == local_128.RawData.ArrayMax) {
            local_128.RawData.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                           (0x101,&local_128.RawData.AllocatorInstance,&local_128.RawData.ArrayMax);
          }
          uVar1 = local_128.RawData.ArrayNum + 1;
          local_128.RawData.AllocatorInstance.Data[local_128.RawData.ArrayNum] = local_148[0];
          uVar12 = uVar12 - 1;
          local_128.RawData.ArrayNum = uVar1;
        } while (uVar12 != 0);
      }
    }
    local_60 = local_128.RawData.AllocatorInstance.Data;
    local_140.RawData = local_128.RawData.AllocatorInstance.Data;
    local_140._padding_._0_4_ = (int)local_128._padding_;
    local_140._padding_._4_4_ = local_128._padding_._4_4_;
    local_140._padding_._0_4_ = (int)local_128._padding_;
    local_140._padding_._4_1_ = (Type)local_128._padding_._4_4_;
    local_140._padding_._5_1_ = (char)((uint)local_128._padding_._4_4_ >> 8);
    local_140._padding_._6_2_ = (undefined2)((uint)local_128._padding_._4_4_ >> 0x10);
  }
  if (((int)local_140._padding_ != (int)(this->Image)._padding_) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7527195756952813717>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowImage.cpp"
                         ,0x95,"SrcImageView.GetWidth() == GetWidth()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_140._padding_._4_4_ != *(int *)((longlong)&(this->Image)._padding_ + 4)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7527195756952813718>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowImage.cpp"
                         ,0x96,"SrcImageView.GetHeight() == GetHeight()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_140._padding_._4_1_ != R32F) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7527195756952813719>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowImage.cpp"
                         ,0x97,"SrcImageView.Format == ERawImageFormat::R32F"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar3 = *(char *)((longlong)&(this->Image)._padding_ + 4);
  if (cVar3 == '\b') {
    local_d8._padding_ = (this->Image)._padding_;
    local_d8._padding_ = (this->Image)._padding_;
    local_d8.RawData = (this->Image).RawData.AllocatorInstance.Data;
    FImageCore::CopyImage(&local_140,&local_d8);
  }
  else if (cVar3 == '\x05') {
    if ((local_140._padding_._4_1_ != R32F) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::R32F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x197,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar6 = local_140.RawData;
    lVar13 = (longlong)(int)local_140._padding_ * (longlong)local_140._padding_._4_4_ *
             (longlong)(int)local_140._padding_;
    if ((lVar13 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->Image)._padding_ + 4) != '\x05') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::RGBA32F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x29e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = 0;
    uVar15 = (ulonglong)(this->Image).RawData.ArrayNum >> 4;
    if (uVar15 != 0) {
      lVar11 = 0;
      pFVar17 = (this->Image).RawData.AllocatorInstance.Data + (longlong)(int)param_1 * 4;
      do {
        uVar14 = (uint)((ulonglong)lVar11 >> 0x3f) ^ 1;
        uVar9 = 0;
        if (lVar11 < lVar13) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar19 = *(undefined4 *)((longlong)pvVar6 + lVar11 * 4);
        uVar9 = 0;
        if (lVar11 < (longlong)uVar15) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar16 = iVar16 + 1;
        *(undefined4 *)pFVar17 = uVar19;
        lVar11 = lVar11 + 1;
        pFVar17 = pFVar17 + 0x10;
      } while ((longlong)iVar16 < (longlong)uVar15);
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7527195756952813740>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowImage.cpp"
                       ,0xac,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_128.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RawData.AllocatorInstance.Data);
  }
  if (local_100.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.RawData.AllocatorInstance.Data);
  }
  if (local_c0.Image.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Image.RawData.AllocatorInstance.Data);
  }
  return;
}

