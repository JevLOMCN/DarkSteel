// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 148e41d40

UClass * __cdecl UNDIRenderTargetSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIRenderTargetSimCacheData",
               &Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIRenderTargetSimCacheData,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIRenderTargetSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIRenderTargetSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton;
}

// UNDIRenderTargetSimCacheData @ 148e54ac0

UNDIRenderTargetSimCacheData * __thiscall
UNDIRenderTargetSimCacheData::UNDIRenderTargetSimCacheData
          (UNDIRenderTargetSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIRenderTargetSimCacheData__6B_;
  (this->CompressionType).ComparisonIndex = 0;
  (this->CompressionType).Number = 0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->PixelDataFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PixelDataFrames).ArrayNum = 0;
  (this->PixelDataFrames).ArrayMax = 0;
  return this;
}

// UNDIRenderTargetSimCacheData @ 148e54b00

UNDIRenderTargetSimCacheData * __thiscall
UNDIRenderTargetSimCacheData::UNDIRenderTargetSimCacheData
          (UNDIRenderTargetSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIRenderTargetSimCacheData__6B_;
  (this->CompressionType).ComparisonIndex = 0;
  (this->CompressionType).Number = 0;
  (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frames).ArrayNum = 0;
  (this->Frames).ArrayMax = 0;
  (this->PixelDataFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PixelDataFrames).ArrayNum = 0;
  (this->PixelDataFrames).ArrayMax = 0;
  return this;
}

// ~UNDIRenderTargetSimCacheData @ 148e56710

void __thiscall
UNDIRenderTargetSimCacheData::~UNDIRenderTargetSimCacheData(UNDIRenderTargetSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIRenderTargetSimCacheData__6B_;
  pFVar1 = (this->PixelDataFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIRenderTargetSimCacheFrame,int>
            ((FNDIRenderTargetSimCacheFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  pFVar1 = (this->Frames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 148e5bcb0

void __thiscall UNDIRenderTargetSimCacheData::BeginDestroy(UNDIRenderTargetSimCacheData *this)

{
  int *piVar1;
  
  UObject::BeginDestroy((UObject *)this);
  ReleaseAllPixelData(this);
  DestructItems<FNDIRenderTargetSimCacheFrame,int>
            ((FNDIRenderTargetSimCacheFrame *)(this->Frames).AllocatorInstance.Data,
             (this->Frames).ArrayNum);
  piVar1 = &(this->Frames).ArrayMax;
  (this->Frames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->Frames).AllocatorInstance,0,piVar1);
  }
  return;
}

// CompareFrame @ 148e5d9d0

bool __thiscall
UNDIRenderTargetSimCacheData::CompareFrame
          (UNDIRenderTargetSimCacheData *this,UNDIRenderTargetSimCacheData *param_1,int param_2,
          TOptional<float> param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  EPixelFormat EVar5;
  EPixelFormat EVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  void *pvVar11;
  void *pvVar12;
  float fVar13;
  FLinearColor_u_0 local_c0;
  FLinearColor_u_0 local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  uint local_60;
  TIntVector3<int>_u_0 local_58 [4];
  
  bVar3 = HasPixelData(param_1,param_2);
  bVar4 = HasPixelData(this,param_2);
  if (bVar4 == bVar3) {
    GetTextureSize(this,(TIntVector3<int> *)&local_58[0]._s_0,param_2);
    GetTextureSize(param_1,(TIntVector3<int> *)&local_c0._s_0,param_2);
    if ((((float)local_58[0]._0_4_ == local_c0._s_0.R) &&
        ((float)local_58[0]._4_4_ == local_c0._s_0.G)) &&
       ((float)local_58[0]._8_4_ == local_c0._s_0.B)) {
      EVar5 = GetTextureFormat(this,param_2);
      EVar6 = GetTextureFormat(this,param_2);
      if (EVar5 == EVar6) {
        if (((EVar5 == PF_FloatRGBA) || (EVar5 == PF_G16R16F)) || (EVar5 == PF_G16R16F_FILTER)) {
          GetPixelData(this,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_b0._s_0,
                       param_2);
          GetPixelData(param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_c0._s_0,
                       param_2);
          uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          if (local_b0._s_0.B == local_c0._s_0.B) {
            fVar13 = __real_3a83126f;
            if (*(char *)((longlong)param_3 + 4) != '\0') {
              fVar13 = *(float *)param_3;
            }
            pvVar12 = (void *)CONCAT44(local_b0._s_0.G,local_b0._s_0.R);
            pvVar11 = (void *)CONCAT44(local_c0._s_0.G,local_c0._s_0.R);
            uVar9 = 0;
            local_60 = GPixelFormats[EVar5].BlockBytes;
            uVar7 = (uint)local_b0._s_0.B / local_60;
            if (uVar7 != 0) {
              do {
                uVar8 = uVar9 * local_60;
                NDIRenderTargetSimCacheDataPrivate::ConvertPixel
                          ((FLinearColor *)&local_c0._s_0,
                           (uchar *)((ulonglong)uVar8 + (longlong)pvVar12),EVar5);
                NDIRenderTargetSimCacheDataPrivate::ConvertPixel
                          ((FLinearColor *)&local_b0._s_0,
                           (uchar *)((ulonglong)uVar8 + (longlong)pvVar11),EVar6);
                if (((fVar13 <= (float)((uint)(local_c0._s_0.R - local_b0._s_0.R) & uVar2)) ||
                    (fVar13 <= (float)((uint)(local_c0._s_0.G - local_b0._s_0.G) & uVar2))) ||
                   ((fVar13 <= (float)((uint)(local_c0._s_0.B - local_b0._s_0.B) & uVar2) ||
                    (fVar13 <= (float)((uint)(local_c0._s_0.A - local_b0._s_0.A) & uVar2))))) {
                  ::FString::PrintfImpl
                            (&local_80,
                             L"Pixel (%dx%dx%d) is different (R:%g G:%g B:%g A:%g) vs (R:%g G:%g B:%g A:%g)"
                            );
                  if (param_4 != &local_80) {
                    pFVar1 = (param_4->Data).AllocatorInstance.Data;
                    if (pFVar1 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar1);
                    }
                    (param_4->Data).AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
                    (param_4->Data).ArrayNum = local_80.Data.ArrayNum;
                    (param_4->Data).ArrayMax = local_80.Data.ArrayMax;
                    local_80.Data.ArrayNum = 0;
                    local_80.Data.ArrayMax = 0;
                    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  }
                  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                  }
                  bVar3 = false;
                  goto LAB_148e5ddd4;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar7);
            }
            bVar3 = true;
          }
          else {
            ::FString::operator=
                      (param_4,L"Arraysize mismatch between caches, but texture size matches?");
            pvVar12 = (void *)CONCAT44(local_b0._s_0.G,local_b0._s_0.R);
            bVar3 = false;
            pvVar11 = (void *)CONCAT44(local_c0._s_0.G,local_c0._s_0.R);
          }
LAB_148e5ddd4:
          if (pvVar11 != (void *)0x0) {
            FMemory::Free(pvVar11);
          }
          if (pvVar12 != (void *)0x0) {
            FMemory::Free(pvVar12);
            return bVar3;
          }
          return bVar3;
        }
        ::FString::PrintfImpl(&local_90,L"PixelFormat (%s) is not supported for comparison");
        FVar10.Data = local_90.Data.AllocatorInstance.Data;
        if (param_4 != &local_90) {
          pFVar1 = (param_4->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_4->Data).AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
          (param_4->Data).ArrayNum = local_90.Data.ArrayNum;
          (param_4->Data).ArrayMax = local_90.Data.ArrayMax;
          local_90.Data.ArrayNum = 0;
          local_90.Data.ArrayMax = 0;
          local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar10.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_a0,L"PixelFormats (%s & %s) mismatched between caches");
        FVar10.Data = local_a0.Data.AllocatorInstance.Data;
        if (param_4 != &local_a0) {
          pFVar1 = (param_4->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_4->Data).AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
          (param_4->Data).ArrayNum = local_a0.Data.ArrayNum;
          (param_4->Data).ArrayMax = local_a0.Data.ArrayMax;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar10.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    else {
      ::FString::PrintfImpl
                (&local_70,L"TextureSizess (%dx%dx%d & %dx%dx%d) mismatched between caches");
      FVar10.Data = local_70.Data.AllocatorInstance.Data;
      if (param_4 != &local_70) {
        pFVar1 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_4->Data).AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = local_70.Data.ArrayNum;
        (param_4->Data).ArrayMax = local_70.Data.ArrayMax;
        local_70.Data.ArrayNum = 0;
        local_70.Data.ArrayMax = 0;
        local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar10.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  else {
    ::FString::operator=(param_4,L"HasPixelData mismatched between caches");
  }
  return false;
}

// FrameToJson @ 148e65ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonObject,1> * __thiscall
UNDIRenderTargetSimCacheData::FrameToJson
          (UNDIRenderTargetSimCacheData *this,TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          int param_1,TOptional<FString> *param_2,TOptional<FString> *param_3)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  Type TVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  TSharedPtr<FJsonObject,1> *pTVar43;
  FString *pFVar44;
  FLinearColor *pFVar45;
  uint uVar46;
  ForAnyElementType FVar47;
  longlong lVar48;
  uint uVar49;
  uint uVar50;
  TReferenceControllerBase<1> *this_00;
  longlong lVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined2 local_258;
  undefined2 uStack_256;
  undefined2 uStack_254;
  undefined2 uStack_252;
  TReferenceControllerBase<1> *local_250;
  ForAnyElementType local_240;
  int local_238 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_228;
  FImageView local_218;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TStringView<wchar_t> local_130;
  FScriptContainerElement *local_120;
  uint local_118;
  FString local_110;
  FString local_100;
  FLinearColor local_f0 [11];
  
  bVar38 = HasPixelData(this,param_1);
  uVar50 = 0;
  if (bVar38) {
    uVar46 = 0;
    if (param_1 < (this->Frames).ArrayNum) {
      uVar46 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar46 == 0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    pFVar1 = (this->Frames).AllocatorInstance.Data;
    lVar51 = (longlong)param_1 * 0x40;
    local_250 = ::operator_new(0x60);
    if (local_250 == (TReferenceControllerBase<1> *)0x0) {
      local_250 = (TReferenceControllerBase<1> *)0x0;
      this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      local_250->SharedReferenceCount = (atomic<int>)0x1;
      this_00 = local_250 + 1;
      local_250->WeakReferenceCount = (atomic<int>)0x1;
      local_250->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
      local_250[2]._padding_ = 0;
      local_250[2].SharedReferenceCount = (atomic<int>)0x0;
      local_250[2].WeakReferenceCount = (atomic<int>)0x0;
      local_250[4].SharedReferenceCount = (atomic<int>)0x0;
      local_250[4].WeakReferenceCount = (atomic<int>)0x0;
      local_250[5].SharedReferenceCount = (atomic<int>)0x0;
      local_250[5].WeakReferenceCount = (atomic<int>)0x0;
      local_250[1]._padding_ = 0;
      local_250[1].SharedReferenceCount = (atomic<int>)0x0;
      local_250[1].WeakReferenceCount = (atomic<int>)0x0;
      local_250[3]._padding_ = 0;
      local_250[3].SharedReferenceCount = (atomic<int>)0x0;
      local_250[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&local_250[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&local_250[4]._padding_ + 4) = 0;
      local_250[5]._padding_ = 0;
      if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar38)) {
        pcVar3 = (code *)swi(3);
        pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
        return pTVar43;
      }
      LOCK();
      local_250->SharedReferenceCount = (atomic<int>)((int)local_250->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250)
      ;
      if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar38)) {
        pcVar3 = (code *)swi(3);
        pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
        return pTVar43;
      }
    }
    pFVar44 = ::FName::ToString(&this->CompressionType,&local_110);
    ::FString::FString(&local_1e0,L"CompressionType");
    FJsonObject::SetStringField((FJsonObject *)this_00,&local_1e0,pFVar44);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    pwVar2 = GPixelFormats[(byte)pFVar1[lVar51 + 0xc]].Name;
    ::FString::FString(&local_1d0,L"PixelFormat");
    pFVar44 = ::FString::FString(&local_100,pwVar2);
    FJsonObject::SetStringField((FJsonObject *)this_00,&local_1d0,pFVar44);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    iVar40 = *(int *)(pFVar1 + lVar51 + 0x14);
    ::FString::FString(&local_1c0,L"CompressedSize");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_1c0,(double)iVar40);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    iVar40 = *(int *)(pFVar1 + lVar51 + 0x10);
    ::FString::FString(&local_1b0,L"UncompressedSize");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_1b0,(double)iVar40);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    iVar40 = *(int *)(pFVar1 + lVar51);
    ::FString::FString(&local_1a0,L"SizeX");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_1a0,(double)iVar40);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    iVar40 = *(int *)(pFVar1 + lVar51 + 4);
    ::FString::FString(&local_190,L"SizeY");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_190,(double)iVar40);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar38)) {
      pcVar3 = (code *)swi(3);
      pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar43;
    }
    iVar40 = *(int *)(pFVar1 + lVar51 + 8);
    ::FString::FString(&local_180,L"SizeZ");
    FJsonObject::SetNumberField((FJsonObject *)this_00,&local_180,(double)iVar40);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    GetPixelData(this,&local_228,param_1);
    if (((local_228.ArrayNum == 0) || (*(int *)((longlong)&param_2->field0_0x0 + 0xc) == -1)) ||
       (*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1)) {
      __return_storage_ptr__->Object = (FJsonObject *)this_00;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_250;
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
         (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
    }
    else {
      TVar39 = FImageCoreUtils::GetRawImageFormatForPixelFormat((EPixelFormat)pFVar1[lVar51 + 0xc]);
      if (TVar39 == RGBA16F) {
        uVar49 = *(int *)(pFVar1 + lVar51) * *(int *)(pFVar1 + lVar51 + 4) *
                 *(int *)(pFVar1 + lVar51 + 8);
        local_240.Data = (FScriptContainerElement *)0x0;
        local_238[2] = GPixelFormats[(byte)pFVar1[lVar51 + 0xc]].BlockBytes;
        local_238[0] = 0;
        local_238[1] = 0;
        iVar40 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,2,uVar49,&local_240,local_238,local_238 + 1);
        memset(local_240.Data + (longlong)iVar40 * 8,0,(longlong)(int)uVar49 << 3);
        iVar37 = local_238[2];
        iVar36 = _UNK_1508be50c;
        iVar35 = _UNK_1508be508;
        iVar34 = _UNK_1508be504;
        iVar33 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
        iVar32 = _UNK_1508be4ec;
        iVar31 = _UNK_1508be4e8;
        iVar30 = _UNK_1508be4e4;
        iVar29 = ___xmm_47800000478000004780000047800000;
        iVar28 = _UNK_1508be4bc;
        iVar27 = _UNK_1508be4b8;
        iVar26 = _UNK_1508be4b4;
        iVar40 = ___xmm_38800000388000003880000038800000;
        uVar25 = _UNK_1508be48c;
        uVar24 = _UNK_1508be488;
        uVar23 = _UNK_1508be484;
        uVar22 = ___xmm_00000200000002000000020000000200;
        uVar21 = _UNK_1508be47c;
        uVar20 = _UNK_1508be478;
        uVar19 = _UNK_1508be474;
        uVar18 = ___xmm_000001ff000001ff000001ff000001ff;
        fVar17 = _UNK_15068962c;
        fVar16 = _UNK_150689628;
        fVar15 = _UNK_150689624;
        fVar14 = ___xmm_3f0000003f0000003f0000003f000000;
        uVar13 = _UNK_15068959c;
        uVar12 = _UNK_150689598;
        uVar11 = _UNK_150689594;
        uVar10 = ___xmm_00007c0000007c0000007c0000007c00;
        uVar9 = _UNK_15065157c;
        uVar8 = _UNK_150651578;
        uVar7 = _UNK_150651574;
        uVar46 = __xmm_80000000800000008000000080000000;
        uVar41 = 0;
        if (uVar49 != 0) {
          do {
            pFVar45 = NDIRenderTargetSimCacheDataPrivate::ConvertPixel
                                (local_f0,(uchar *)(local_228.AllocatorInstance.Data +
                                                   uVar50 * iVar37),
                                 (EPixelFormat)pFVar1[lVar51 + 0xc]);
            uVar4 = *(uint *)((longlong)&pFVar45->field0_0x0 + 4);
            uVar5 = *(uint *)((longlong)&pFVar45->field0_0x0 + 8);
            uVar6 = *(uint *)((longlong)&pFVar45->field0_0x0 + 0xc);
            fVar54 = (float)(~uVar46 & *(uint *)&pFVar45->field0_0x0);
            fVar55 = (float)(~uVar7 & uVar4);
            fVar56 = (float)(~uVar8 & uVar5);
            fVar57 = (float)(~uVar9 & uVar6);
            uVar42 = uVar41;
            if ((int)uVar50 < local_238[0]) {
              uVar42 = ~uVar50 >> 0x1f;
            }
            auVar52._0_4_ =
                 (~-(uint)((int)fVar54 < iVar40) &
                  (uint)((iVar33 + (int)fVar54) - (((int)fVar54 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar14 + fVar54) - (int)fVar14 & -(uint)((int)fVar54 < iVar40)) &
                 -(uint)((int)fVar54 < iVar29);
            auVar52._4_4_ =
                 (~-(uint)((int)fVar55 < iVar26) &
                  (uint)((iVar34 + (int)fVar55) - (((int)fVar55 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar15 + fVar55) - (int)fVar15 & -(uint)((int)fVar55 < iVar26)) &
                 -(uint)((int)fVar55 < iVar30);
            auVar52._8_4_ =
                 (~-(uint)((int)fVar56 < iVar27) &
                  (uint)((iVar35 + (int)fVar56) - (((int)fVar56 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar16 + fVar56) - (int)fVar16 & -(uint)((int)fVar56 < iVar27)) &
                 -(uint)((int)fVar56 < iVar31);
            auVar52._12_4_ =
                 (~-(uint)((int)fVar57 < iVar28) &
                  (uint)((iVar36 + (int)fVar57) - (((int)fVar57 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar17 + fVar57) - (int)fVar17 & -(uint)((int)fVar57 < iVar28)) &
                 -(uint)((int)fVar57 < iVar32);
            auVar58._0_4_ =
                 ~-(uint)((int)fVar54 < iVar29) &
                 (((uint)fVar54 >> 0xd & uVar18 | uVar22) & -(uint)NAN(fVar54) | uVar10);
            auVar58._4_4_ =
                 ~-(uint)((int)fVar55 < iVar30) &
                 (((uint)fVar55 >> 0xd & uVar19 | uVar23) & -(uint)NAN(fVar55) | uVar11);
            auVar58._8_4_ =
                 ~-(uint)((int)fVar56 < iVar31) &
                 (((uint)fVar56 >> 0xd & uVar20 | uVar24) & -(uint)NAN(fVar56) | uVar12);
            auVar58._12_4_ =
                 ~-(uint)((int)fVar57 < iVar32) &
                 (((uint)fVar57 >> 0xd & uVar21 | uVar25) & -(uint)NAN(fVar57) | uVar13);
            auVar53._0_4_ = (int)(uVar46 & *(uint *)&pFVar45->field0_0x0) >> 0x10;
            auVar53._4_4_ = (int)(uVar7 & uVar4) >> 0x10;
            auVar53._8_4_ = (int)(uVar8 & uVar5) >> 0x10;
            auVar53._12_4_ = (int)(uVar9 & uVar6) >> 0x10;
            auVar53 = auVar52 | auVar58 | auVar53;
            auVar53 = packssdw(auVar53,auVar53);
            if ((uVar42 == 0) &&
               (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar38)) {
              pcVar3 = (code *)swi(3);
              pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
              return pTVar43;
            }
            local_258 = auVar53._0_2_;
            lVar48 = (longlong)(int)uVar50;
            uVar50 = uVar50 + 1;
            *(undefined2 *)(local_240.Data + lVar48 * 8) = local_258;
            uStack_256 = auVar53._2_2_;
            *(undefined2 *)(local_240.Data + lVar48 * 8 + 2) = uStack_256;
            uStack_254 = auVar53._4_2_;
            *(undefined2 *)(local_240.Data + lVar48 * 8 + 4) = uStack_254;
            uStack_252 = auVar53._6_2_;
            *(undefined2 *)(local_240.Data + lVar48 * 8 + 6) = uStack_252;
          } while (uVar50 < uVar49);
        }
        local_218._padding_._0_4_ = *(undefined4 *)(pFVar1 + lVar51 + 8);
        local_218._padding_._4_4_ = *(undefined4 *)(pFVar1 + lVar51 + 4);
        local_218._padding_._0_4_ = *(undefined4 *)(pFVar1 + lVar51);
        local_218.RawData = local_240.Data;
        local_218._padding_._4_2_ = 4;
        ::FString::FString(&local_170,".exr");
        if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) == -1) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar38)) {
          pcVar3 = (code *)swi(3);
          pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar43;
        }
        ::FString::ConcatFF(&local_1f0,(FString *)param_3,&local_170);
        if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) == -1) &&
           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar38)) {
          pcVar3 = (code *)swi(3);
          pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar43;
        }
        local_130.DataPtr = (wchar_t *)(param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        iVar40 = *(int *)((longlong)&param_2->field0_0x0 + 8);
        local_130.Size = iVar40 - 1;
        if (iVar40 == 0) {
          local_130.Size = uVar41;
        }
        local_120 = local_1f0.Data.AllocatorInstance.Data;
        local_118 = local_1f0.Data.ArrayNum - 1;
        if (local_1f0.Data.ArrayNum == 0) {
          local_118 = uVar41;
        }
        FPaths::CombineInternal(&local_200,&local_130,2);
        FVar47.Data = (FScriptContainerElement *)L"";
        if (local_200.Data.ArrayNum != 0) {
          FVar47.Data = local_200.Data.AllocatorInstance.Data;
        }
        bVar38 = FImageUtils::SaveImageByExtension((wchar_t *)FVar47.Data,&local_218,0);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        if (bVar38) {
          if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar38)) {
            pcVar3 = (code *)swi(3);
            pTVar43 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
            return pTVar43;
          }
          ::FString::FString(&local_140,".exr");
          pFVar44 = TOptional<FString>::GetValue(param_3);
          ::FString::ConcatFF(&local_150,pFVar44,&local_140);
          ::FString::FString(&local_160,L"TextureData");
          FJsonObject::SetStringField((FJsonObject *)this_00,&local_160,&local_150);
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        __return_storage_ptr__->Object = (FJsonObject *)this_00;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_250;
        if (local_240.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data);
        }
        if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
           (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
           pFVar1 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(pFVar1);
        }
        if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
           (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
           pFVar1 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(pFVar1);
        }
      }
      else {
        if (1 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        __return_storage_ptr__->Object = (FJsonObject *)this_00;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_250;
        if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
           (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
           pFVar1 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(pFVar1);
        }
        if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
           (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
           pFVar1 != (FScriptContainerElement *)0x0)) {
          FMemory::Free(pFVar1);
        }
      }
    }
  }
  else {
    __return_storage_ptr__->Object = (FJsonObject *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if ((*(int *)((longlong)&param_2->field0_0x0 + 0xc) != -1) &&
       (pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
       pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
       (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
       pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
  }
  return __return_storage_ptr__;
}

// GetPixelData @ 148e6d770

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UNDIRenderTargetSimCacheData::GetPixelData
          (UNDIRenderTargetSimCacheData *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_38;
  int local_30 [2];
  
  lVar9 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->Frames).ArrayNum)) {
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < (this->Frames).ArrayNum) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    this_00 = &this->PixelDataFrames;
    pFVar2 = (this->Frames).AllocatorInstance.Data;
    TArray<unsigned_char_*,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,(this->Frames).ArrayNum,Default);
    uVar6 = 0;
    uVar5 = uVar6;
    if (param_1 < (this->PixelDataFrames).ArrayNum) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (*(longlong *)((this_00->AllocatorInstance).Data + lVar9 * 8) == 0) {
      uVar5 = uVar6;
      if (param_1 < (this->PixelDataFrames).ArrayNum) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      FBulkData::GetCopy((FBulkData *)(pFVar2 + lVar9 * 0x40 + 0x18),
                         (void **)((this_00->AllocatorInstance).Data + lVar9 * 8),true);
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,*(int *)(pFVar2 + lVar9 * 0x40 + 0x10),&local_38,local_30,local_30 + 1);
    iVar1 = *(int *)(pFVar2 + lVar9 * 0x40 + 0x14);
    if (iVar1 < 1) {
      iVar1 = *(int *)(pFVar2 + lVar9 * 0x40 + 0x10);
      if (param_1 < (this->PixelDataFrames).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      memcpy(local_38.Data,*(void **)((this_00->AllocatorInstance).Data + lVar9 * 8),(longlong)iVar1
            );
    }
    else {
      if (param_1 < (this->PixelDataFrames).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      FCompression::UncompressMemory
                (this->CompressionType,local_38.Data,
                 (longlong)*(int *)(pFVar2 + lVar9 * 0x40 + 0x10),
                 *(void **)((this_00->AllocatorInstance).Data + lVar9 * 8),(longlong)iVar1,
                 COMPRESS_NoFlags,0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
    __return_storage_ptr__->ArrayNum = local_30[0];
    __return_storage_ptr__->ArrayMax = local_30[1];
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPixelData @ 148e6da10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UNDIRenderTargetSimCacheData::GetPixelData
          (UNDIRenderTargetSimCacheData *this,int param_1,uchar *param_2,int param_3,int param_4)

{
  TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uchar *_Dst;
  uint uVar8;
  ForAnyElementType _Src;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int local_res10;
  ForAnyElementType local_58;
  int local_50 [4];
  
  if ((-1 < param_1) && (lVar7 = (longlong)param_1, param_1 < (this->Frames).ArrayNum)) {
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar3 = 0;
    if (param_1 < (this->Frames).ArrayNum) {
      uVar3 = uVar8;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = &this->PixelDataFrames;
    pFVar11 = (this->Frames).AllocatorInstance.Data + lVar7 * 0x40;
    TArray<unsigned_char_*,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,(this->Frames).ArrayNum,Default);
    uVar3 = 0;
    if (param_1 < (this->PixelDataFrames).ArrayNum) {
      uVar3 = uVar8;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0;
    if (*(longlong *)((this_00->AllocatorInstance).Data + lVar7 * 8) == 0) {
      uVar4 = uVar3;
      if (param_1 < (this->PixelDataFrames).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FBulkData::GetCopy((FBulkData *)(pFVar11 + 0x18),
                         (void **)((this_00->AllocatorInstance).Data + lVar7 * 8),true);
    }
    iVar5 = *(int *)pFVar11 * GPixelFormats[(byte)pFVar11[0xc]].BlockBytes;
    if ((param_3 == iVar5) &&
       ((*(int *)(pFVar11 + 8) == 1 || (param_4 == iVar5 * *(int *)(pFVar11 + 4))))) {
      iVar5 = *(int *)(pFVar11 + 0x14);
      if (iVar5 < 1) {
        iVar5 = *(int *)(pFVar11 + 0x10);
        if (param_1 < (this->PixelDataFrames).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        memcpy(param_2,*(void **)((this_00->AllocatorInstance).Data + lVar7 * 8),(longlong)iVar5);
      }
      else {
        if (param_1 < (this->PixelDataFrames).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FCompression::UncompressMemory
                  (this->CompressionType,param_2,(longlong)*(int *)(pFVar11 + 0x10),
                   *(void **)((this_00->AllocatorInstance).Data + lVar7 * 8),(longlong)iVar5,
                   COMPRESS_NoFlags,0);
      }
    }
    else {
      local_50[1] = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50[0] = 0;
      if (0 < *(int *)(pFVar11 + 0x14)) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,*(int *)pFVar11 * *(int *)(pFVar11 + 4) *
                       GPixelFormats[(byte)pFVar11[0xc]].BlockBytes * *(int *)(pFVar11 + 8),
                   &local_58,local_50,local_50 + 1);
        iVar6 = *(int *)(pFVar11 + 0x14);
        if (param_1 < (this->PixelDataFrames).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FCompression::UncompressMemory
                  (this->CompressionType,local_58.Data,(longlong)local_50[0],
                   *(void **)((this_00->AllocatorInstance).Data + lVar7 * 8),(longlong)iVar6,
                   COMPRESS_NoFlags,0);
      }
      _Src.Data = local_58.Data;
      if (local_50[0] < 1) {
        uVar3 = 0;
        if (param_1 < (this->PixelDataFrames).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _Src.Data = *(FScriptContainerElement **)((this_00->AllocatorInstance).Data + lVar7 * 8);
      }
      if (0 < *(int *)(pFVar11 + 8)) {
        iVar6 = *(int *)(pFVar11 + 4);
        local_res10 = 0;
        iVar10 = 0;
        do {
          _Dst = param_2 + local_res10;
          if (0 < iVar6) {
            iVar9 = 0;
            do {
              memcpy(_Dst,_Src.Data,(longlong)iVar5);
              iVar6 = *(int *)(pFVar11 + 4);
              _Src.Data = _Src.Data + iVar5;
              _Dst = _Dst + param_3;
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar6);
          }
          local_res10 = local_res10 + param_4;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(pFVar11 + 8));
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 148e6df00

UClass * __cdecl UNDIRenderTargetSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIRenderTargetSimCacheData",
               &Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIRenderTargetSimCacheData,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIRenderTargetSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIRenderTargetSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIRenderTargetSimCacheData.InnerSingleton;
}

// GetTextureFormat @ 148e6f430

EPixelFormat __thiscall
UNDIRenderTargetSimCacheData::GetTextureFormat(UNDIRenderTargetSimCacheData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->Frames).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Frames.IsValidIndex(FrameIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NDIRenderTargetSimCacheData.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Frames).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EPixelFormat)(this->Frames).AllocatorInstance.Data[(longlong)param_1 * 0x40 + 0xc];
}

// GetTextureSize @ 148e6f4e0

TIntVector3<int> * __thiscall
UNDIRenderTargetSimCacheData::GetTextureSize
          (UNDIRenderTargetSimCacheData *this,TIntVector3<int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntVector3<int> *pTVar6;
  
  if ((param_1 < 0) || ((this->Frames).ArrayNum <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Frames.IsValidIndex(FrameIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\DataInterface\\NDIRenderTargetSimCacheData.h"
                       ,0x2c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Frames).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = (this->Frames).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x40 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x40);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// HasPixelData @ 148e728b0

bool __thiscall
UNDIRenderTargetSimCacheData::HasPixelData(UNDIRenderTargetSimCacheData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Frames).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Frames).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (0 < *(int *)((this->Frames).AllocatorInstance.Data + (longlong)param_1 * 0x40 + 0x14)) {
      return true;
    }
  }
  return false;
}

// ReleaseAllPixelData @ 148e7b840

void __thiscall
UNDIRenderTargetSimCacheData::ReleaseAllPixelData(UNDIRenderTargetSimCacheData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->PixelDataFrames).AllocatorInstance.Data;
  iVar3 = (this->PixelDataFrames).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->PixelDataFrames).ArrayNum != iVar3) {
      `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    FMemory::Free(*(void **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->PixelDataFrames).ArrayMax;
  (this->PixelDataFrames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PixelDataFrames).AllocatorInstance,0,piVar1);
  }
  return;
}

// ReleasePixelData @ 148e7b8d0

void __thiscall
UNDIRenderTargetSimCacheData::ReleasePixelData(UNDIRenderTargetSimCacheData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->PixelDataFrames).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->PixelDataFrames).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMemory::Free(*(void **)((this->PixelDataFrames).AllocatorInstance.Data + (longlong)param_1 * 8)
                 );
    uVar3 = 0;
    if (param_1 < (this->PixelDataFrames).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined8 *)((this->PixelDataFrames).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  }
  return;
}

// Serialize @ 148e7c540

void __thiscall
UNDIRenderTargetSimCacheData::Serialize(UNDIRenderTargetSimCacheData *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::Serialize((UObject *)this,param_1);
  iVar1 = (this->Frames).ArrayNum;
  pFVar2 = (this->Frames).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Frames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNDIRenderTargetSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 0x10) != 0) {
      FBulkData::Serialize((FBulkData *)(pFVar2 + 0x18),param_1,(UObject *)this,false,1,None);
    }
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// Serialize @ 148e7c5d0

void __thiscall
UNDIRenderTargetSimCacheData::Serialize
          (UNDIRenderTargetSimCacheData *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  iVar1 = (this->Frames).ArrayNum;
  pFVar3 = (this->Frames).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Frames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNDIRenderTargetSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(int *)(pFVar3 + 0x10) != 0) {
      FBulkData::Serialize((FBulkData *)(pFVar3 + 0x18),pFVar2,(UObject *)this,false,1,None);
    }
    pFVar3 = pFVar3 + 0x40;
  }
  return;
}

// SetPixelData @ 148e7d1c0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
UNDIRenderTargetSimCacheData::SetPixelData
          (UNDIRenderTargetSimCacheData *this,int param_1,TIntVector3<int> *param_2,
          EPixelFormat param_3,TArrayView<unsigned_char,int> *param_4)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  size_t _Size;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint local_res10 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  ReleaseAllPixelData(this);
  iVar1 = (this->Frames).ArrayNum;
  iVar4 = param_1;
  if (param_1 < iVar1) {
    iVar4 = iVar1;
  }
  uVar6 = iVar4 + 1;
  if (iVar1 < (int)uVar6) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,uVar6 - iVar1,&(this->Frames).AllocatorInstance,
                       &(this->Frames).ArrayNum,&(this->Frames).ArrayMax);
    DefaultConstructItems<FNDIRenderTargetSimCacheFrame,int>
              ((this->Frames).AllocatorInstance.Data + (longlong)iVar4 * 0x40,uVar6 - iVar1);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar1) {
      uVar8 = iVar1 - uVar6;
      if (((int)(uVar8 | uVar6) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FNDIRenderTargetSimCacheFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Frames,uVar6,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&(this->Frames).AllocatorInstance,(this->Frames).ArrayNum,
                   &(this->Frames).ArrayMax);
      }
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Frames).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (param_2->field0_0x0)._s_0.Z;
  pFVar7 = (this->Frames).AllocatorInstance.Data + (longlong)param_1 * 0x40;
  iVar4 = param_4->ArrayNum;
  *(undefined8 *)pFVar7 = *(undefined8 *)&param_2->field0_0x0;
  *(int *)(pFVar7 + 8) = iVar1;
  pFVar7[0xc] = (FScriptContainerElement)param_3;
  *(int *)(pFVar7 + 0x10) = iVar4;
  *(undefined4 *)(pFVar7 + 0x14) = 0;
  if (this->CompressionType != (FName)0x0) {
    local_res10[0] =
         FCompression::CompressMemoryBound(this->CompressionType,iVar4,COMPRESS_BiasMemory,0);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if (0 < (int)local_res10[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res10[0],&local_38,0,(int *)((longlong)&local_30 + 4));
    }
    bVar3 = FCompression::CompressMemory
                      (this->CompressionType,local_38.Data,(int *)local_res10,param_4->DataPtr,iVar4
                       ,COMPRESS_BiasMemory,0);
    if (bVar3) {
      FBulkData::Lock((FBulkData *)(pFVar7 + 0x18),2);
      _Src.Data = local_38.Data;
      _Size = (size_t)(int)local_res10[0];
      pvVar5 = FBulkData::Realloc((FBulkData *)(pFVar7 + 0x18),_Size,1);
      memcpy(pvVar5,_Src.Data,_Size);
      FBulkData::Unlock((FBulkData *)(pFVar7 + 0x18));
      *(uint *)(pFVar7 + 0x14) = local_res10[0];
      if (local_38.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_38.Data);
      return;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  FBulkData::Lock((FBulkData *)(pFVar7 + 0x18),2);
  pvVar5 = FBulkData::Realloc((FBulkData *)(pFVar7 + 0x18),(longlong)iVar4,1);
  memcpy(pvVar5,param_4->DataPtr,(longlong)iVar4);
  FBulkData::Unlock((FBulkData *)(pFVar7 + 0x18));
  return;
}

// StaticRegisterNativesUNDIRenderTargetSimCacheData @ 148e81580

void __cdecl UNDIRenderTargetSimCacheData::StaticRegisterNativesUNDIRenderTargetSimCacheData(void)

{
  return;
}

