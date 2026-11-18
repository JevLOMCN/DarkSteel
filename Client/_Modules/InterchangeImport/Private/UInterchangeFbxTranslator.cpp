// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 33

// StaticClass @ 14e674130

UClass * __cdecl UInterchangeFbxTranslator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslator",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeFbxTranslator,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeFbxTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton;
}

// UInterchangeFbxTranslator @ 14e690a20

UInterchangeFbxTranslator * __thiscall
UInterchangeFbxTranslator::UInterchangeFbxTranslator
          (UInterchangeFbxTranslator *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  (this->Dispatcher).Ptr = (FInterchangeDispatcher *)0x0;
  (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeFbxTranslatorSettings *)0x0;
  this->bUseWorkerImport = false;
  (this->ResultFolder).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultFolder).Data.ArrayNum = 0;
  (this->ResultFolder).Data.ArrayMax = 0;
  this->StartTime = 0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  this->MeshPayloadTime = 0;
  this->MeshMeshCount = 0;
  this->MeshTriangleCount = 0;
  this->MeshVertexCount = 0;
  return this;
}

// UInterchangeFbxTranslator @ 14e690ac0

UInterchangeFbxTranslator * __thiscall
UInterchangeFbxTranslator::UInterchangeFbxTranslator(UInterchangeFbxTranslator *this)

{
  FString *pFVar1;
  TUniquePtr<UE::Interchange::FInterchangeDispatcher,TDefaultDelete<UE::Interchange::FInterchangeDispatcher>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FObjectInitializer *pFVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  FString *pFVar9;
  FInterchangeDispatcher *pFVar10;
  FInterchangeDispatcher *pFVar11;
  undefined8 *puVar12;
  UInterchangeFbxTranslator *pUVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FGuid local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  longlong local_28 [2];
  
  pFVar7 = FObjectInitializer::Get();
  UInterchangeTranslatorBase::UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this,pFVar7);
  pFVar11 = (FInterchangeDispatcher *)0x0;
  iVar17 = 0;
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  pFVar1 = &this->ResultFolder;
  (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr = (UInterchangeFbxTranslatorSettings *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultFolder).Data.ArrayNum = 0;
  (this->ResultFolder).Data.ArrayMax = 0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (this->Dispatcher).Ptr = (FInterchangeDispatcher *)0x0;
  this->bUseWorkerImport = false;
  this->StartTime = 0;
  this->MeshPayloadTime = 0;
  this->MeshMeshCount = 0;
  this->MeshTriangleCount = 0;
  this->MeshVertexCount = 0;
  if ((this->_padding_ & 0x30) != 0) {
    return this;
  }
  local_78.A = 0;
  local_78.B = 0;
  local_78.C = 0;
  local_78.D = 0;
  FWindowsPlatformMisc::CreateGuid(&local_78);
  this_00 = FPlatformFileManager::Get();
  pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
  pFVar9 = FPaths::ProjectSavedDir();
  FPaths::ConvertRelativePathToFull(&local_98,pFVar9);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FGuid::AppendString(&local_78,&local_88,Base36Encoded);
  pwVar16 = L"";
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*pIVar8 + 0x118))(pIVar8,FVar14.Data);
  if (cVar5 == '\0') {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar14.Data = local_98.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x120))(pIVar8,FVar14.Data);
  }
  local_68.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  local_50 = 0xf;
  local_68.Size = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_68.Size = iVar17;
  }
  local_58 = L"Interchange/Fbx";
  FPaths::CombineInternal(&local_a8,&local_68,2);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar14.Data = local_a8.Data.AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*pIVar8 + 0x118))(pIVar8,FVar14.Data);
  if (cVar5 == '\0') {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar14.Data = local_a8.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x120))(pIVar8,FVar14.Data);
  }
  local_48.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  local_48.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_48.Size = iVar17;
  }
  local_38 = local_88.Data.AllocatorInstance.Data;
  local_30 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    local_30 = iVar17;
  }
  FPaths::CombineInternal(&local_b8,&local_48,2);
  if (pFVar1 != &local_b8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    (this->ResultFolder).Data.ArrayNum = local_b8.Data.ArrayNum;
    (this->ResultFolder).Data.ArrayMax = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((this->ResultFolder).Data.ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  cVar5 = (**(code **)((longlong)*pIVar8 + 0x118))(pIVar8,pwVar15);
  if (cVar5 == '\0') {
    if ((this->ResultFolder).Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)(this->ResultFolder).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x120))(pIVar8,pwVar16);
  }
  if (GInterchangeFBXTranslatorUseWorker == false) goto LAB_14e690e12;
  pFVar10 = ::operator_new(0x90);
  if (pFVar10 != (FInterchangeDispatcher *)0x0) {
    pFVar11 = UE::Interchange::FInterchangeDispatcher::FInterchangeDispatcher
                        (pFVar10,&this->ResultFolder,1);
  }
  pTVar2 = &this->Dispatcher;
  if (pTVar2 == (TUniquePtr<UE::Interchange::FInterchangeDispatcher,TDefaultDelete<UE::Interchange::FInterchangeDispatcher>_>
                 *)local_28) {
    if (pFVar11 != (FInterchangeDispatcher *)0x0) {
      puVar12 = (undefined8 *)pFVar11->_padding_;
      goto LAB_14e690da4;
    }
  }
  else {
    pFVar10 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar11;
    if (pFVar10 != (FInterchangeDispatcher *)0x0) {
      puVar12 = (undefined8 *)pFVar10->_padding_;
      pFVar11 = pFVar10;
LAB_14e690da4:
      (*(code *)*puVar12)(pFVar11);
    }
  }
  pFVar11 = (this->Dispatcher).Ptr;
  if (pFVar11 == (FInterchangeDispatcher *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4205677812134183124>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                       ,0xd4,"Dispatcher.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar13 = (UInterchangeFbxTranslator *)(*pcVar4)();
      return pUVar13;
    }
  }
  else {
    UE::Interchange::FInterchangeDispatcher::StartProcess(pFVar11);
  }
  bVar6 = UE::Interchange::FInterchangeDispatcher::IsValid((this->Dispatcher).Ptr);
  if (bVar6) {
    this->bUseWorkerImport = true;
  }
  else {
    pFVar11 = (this->Dispatcher).Ptr;
    if (pFVar11 != (FInterchangeDispatcher *)0x0) {
      (this->Dispatcher).Ptr = (FInterchangeDispatcher *)0x0;
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
LAB_14e690e12:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeFbxTranslator @ 14e691f80

void __thiscall
UInterchangeFbxTranslator::~UInterchangeFbxTranslator(UInterchangeFbxTranslator *this)

{
  FScriptContainerElement *pFVar1;
  FInterchangeDispatcher *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UInterchangeTranslatorBase__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeTexturePayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeMeshPayloadInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterchangeAnimationPayloadInterface__;
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResultFolder).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Dispatcher).Ptr;
  if (pFVar2 != (FInterchangeDispatcher *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7IInterchangeAnimationPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeMeshPayloadInterface__6B_;
  this->_padding_ = (longlong)&___7IInterchangeTexturePayloadInterface__6B_;
  UInterchangeTranslatorBase::~UInterchangeTranslatorBase((UInterchangeTranslatorBase *)this);
  return;
}

// operator() @ 14e692520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<UE::Interchange::FAnimationPayloadData> * __thiscall
`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l2::<lambda_1>::operator()
          (void *this,TOptional<UE::Interchange::FAnimationPayloadData> *__return_storage_ptr__,
          FAnimationPayloadQuery *param_1,FString *param_2)

{
  EInterchangeAnimationPayLoadType EVar1;
  code *pcVar2;
  int iVar3;
  ForAnyElementType FVar4;
  long64 lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TOptional<UE::Interchange::FAnimationPayloadData> *pTVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_> local_1b8;
  undefined8 local_1a8;
  FAnimationPayloadData local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_f8;
  FLargeMemoryReader local_d8;
  
  bVar6 = FPaths::FileExists(param_2);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4205677812134183630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                       ,0x2ce,"FPaths::FileExists(AnimationPayloadFile)");
    if (!bVar6) {
      __return_storage_ptr__->bIsSet = false;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pTVar10 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*pcVar2)();
    return pTVar10;
  }
  uVar13 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToArray(&local_f8,pwVar12,0);
  lVar5 = local_f8.ArrayNum;
  FVar4.Data = local_f8.AllocatorInstance.Data;
  if (local_f8.ArrayNum < 1) {
    __return_storage_ptr__->bIsSet = false;
    goto joined_r0x00014e692a03;
  }
  ::FString::FString(&local_198.SceneNodeUniqueID,&param_1->SceneNodeUniqueID);
  local_198.BakeFrequency = ___xmm_0000000000000000403e000000000000;
  local_198.RangeStartTime = _UNK_151444f58;
  local_198.RangeEndTime = __real_3fa1111111111111;
  local_198.Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Curves.ArrayNum = 0;
  local_198.Curves.ArrayMax = 0;
  local_198.InbetweenCurveNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.InbetweenCurveNames.ArrayNum = 0;
  local_198.InbetweenCurveNames.ArrayMax = 0;
  local_198.InbetweenFullWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.InbetweenFullWeights.ArrayNum = 0;
  local_198.InbetweenFullWeights.ArrayMax = 0;
  local_198.StepCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.StepCurves.ArrayNum = 0;
  local_198.StepCurves.ArrayMax = 0;
  local_198.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Transforms.ArrayNum = 0;
  local_198.Transforms.ArrayMax = 0;
  ::FString::FString(&local_198.PayloadKey.UniqueId,&(param_1->PayloadKey).UniqueId);
  local_198.PayloadKey.Type = (param_1->PayloadKey).Type;
  local_198.AdditionalSupportedType = NONE;
  local_1a8 = 0;
  FLargeMemoryReader::FLargeMemoryReader(&local_d8,(uchar *)FVar4.Data,lVar5,None,(FName)0x0);
  EVar1 = (param_1->PayloadKey).Type;
  uVar7 = 0;
  if (EVar1 == CURVE) {
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FInterchangeCurve,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_1b8);
    iVar3 = local_1b8.ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,8,local_1b8.ArrayNum,&local_198.Curves.AllocatorInstance,
                       &local_198.Curves.ArrayNum,&local_198.Curves.ArrayMax);
    DefaultConstructItems<FRichCurve,int>
              (local_198.Curves.AllocatorInstance.Data + (longlong)iVar8 * 0x80,iVar3);
    if (0 < local_1b8.ArrayNum) {
      do {
        uVar9 = uVar7;
        if ((int)uVar13 < local_1b8.ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*pcVar2)();
          return pTVar10;
        }
        pFVar14 = local_1b8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
        uVar9 = uVar7;
        if ((int)uVar13 < local_198.Curves.ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*pcVar2)();
          return pTVar10;
        }
        FInterchangeCurve::ToRichCurve
                  ((FInterchangeCurve *)pFVar14,
                   (FRichCurve *)
                   (local_198.Curves.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x80));
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < local_1b8.ArrayNum);
    }
    DestructItems<FInterchangeCurve,int>
              ((FInterchangeCurve *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    FVar11.Data = local_1b8.AllocatorInstance.Data;
LAB_14e69294a:
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  else {
    if (EVar1 == MORPHTARGETCURVE) {
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<FInterchangeCurve,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_d8,&local_1c8);
      TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_d8,&local_198.InbetweenCurveNames);
      TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_d8,&local_198.InbetweenFullWeights);
      iVar3 = local_1c8.ArrayNum;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x80,8,local_1c8.ArrayNum,&local_198.Curves.AllocatorInstance,
                         &local_198.Curves.ArrayNum,&local_198.Curves.ArrayMax);
      DefaultConstructItems<FRichCurve,int>
                (local_198.Curves.AllocatorInstance.Data + (longlong)iVar8 * 0x80,iVar3);
      if (0 < local_1c8.ArrayNum) {
        do {
          uVar9 = 0;
          if ((int)uVar13 < local_1c8.ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*pcVar2)();
            return pTVar10;
          }
          pFVar14 = local_1c8.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
          uVar9 = uVar7;
          if ((int)uVar13 < local_198.Curves.ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TOptional<UE::Interchange::FAnimationPayloadData> *)(*pcVar2)();
            return pTVar10;
          }
          FInterchangeCurve::ToRichCurve
                    ((FInterchangeCurve *)pFVar14,
                     (FRichCurve *)
                     (local_198.Curves.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x80));
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < local_1c8.ArrayNum);
      }
      DestructItems<FInterchangeCurve,int>
                ((FInterchangeCurve *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
      FVar11.Data = local_1c8.AllocatorInstance.Data;
      goto LAB_14e69294a;
    }
    if (EVar1 == STEPCURVE) {
      TArrayPrivateFriend::Serialize<FInterchangeStepCurve,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_d8,&local_198.StepCurves);
    }
    else if (EVar1 == BAKED) {
      UE::Interchange::FAnimationPayloadData::SerializeBaked(&local_198,(FArchive *)&local_d8);
    }
  }
  UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
            (&__return_storage_ptr__->TypedValue,&local_198);
  __return_storage_ptr__->bIsSet = true;
  FLargeMemoryReader::~FLargeMemoryReader(&local_d8);
  if (local_198.PayloadKey.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
  }
  if (local_198.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Transforms.AllocatorInstance.Data);
  }
  DestructItems<FInterchangeStepCurve,int>
            ((FInterchangeStepCurve *)local_198.StepCurves.AllocatorInstance.Data,
             local_198.StepCurves.ArrayNum);
  if ((FInterchangeStepCurve *)local_198.StepCurves.AllocatorInstance.Data !=
      (FInterchangeStepCurve *)0x0) {
    FMemory::Free(local_198.StepCurves.AllocatorInstance.Data);
  }
  if (local_198.InbetweenFullWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.InbetweenFullWeights.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_198.InbetweenCurveNames.AllocatorInstance.Data,
             local_198.InbetweenCurveNames.ArrayNum);
  if (local_198.InbetweenCurveNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.InbetweenCurveNames.AllocatorInstance.Data);
  }
  DestructItems<FRichCurve,int>
            ((FRichCurve *)local_198.Curves.AllocatorInstance.Data,local_198.Curves.ArrayNum);
  if ((FRichCurve *)local_198.Curves.AllocatorInstance.Data != (FRichCurve *)0x0) {
    FMemory::Free(local_198.Curves.AllocatorInstance.Data);
  }
  if (local_198.SceneNodeUniqueID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.SceneNodeUniqueID.Data.AllocatorInstance.Data);
  }
joined_r0x00014e692a03:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14e692a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UInterchangeFbxTranslator::GetMeshPayloadData'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *this_00;
  code *pcVar5;
  bool bVar6;
  UInterchangeResultError_Generic *pUVar7;
  FText *pFVar8;
  FLargeMemoryReader *this_01;
  ForAnyElementType FVar9;
  TOptional<UE::Interchange::FMeshPayloadData> *pTVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined1 auStackY_f88 [32];
  uint local_f48 [2];
  FString local_f40;
  undefined8 local_f30;
  undefined8 local_f28;
  FString local_f20;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_f10;
  FText local_ef8;
  FLargeMemoryReader local_ee8;
  FLargeMemoryReader local_e28;
  TOptional<UE::Interchange::FMeshPayloadData> local_d68;
  TOptional<UE::Interchange::FMeshPayloadData> local_a18;
  TOptional<UE::Interchange::FMeshPayloadData> local_6c8;
  TOptional<UE::Interchange::FMeshPayloadData> local_378;
  
  local_378._832_8_ = __security_cookie.value ^ (ulonglong)auStackY_f88;
  bVar6 = FPaths::FileExists(param_1);
  if (!bVar6) {
    if (2 < (byte)LogInterchangeImport._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
    }
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a18.bIsSet = false;
    TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue
              (*(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 8),
               &local_a18);
    if (local_a18.bIsSet == false) {
      return;
    }
    if (local_a18.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
      UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                (&local_a18.TypedValue.NaniteAssemblyDescription.TypedValue);
    }
    if (local_a18.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_a18.TypedValue.JointNames.AllocatorInstance.Data,
               local_a18.TypedValue.JointNames.ArrayNum);
    if (local_a18.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.TypedValue.JointNames.AllocatorInstance.Data);
    }
    pTVar10 = &local_a18;
    goto LAB_14e692f91;
  }
  FMeshDescription::FMeshDescription((FMeshDescription *)&local_378);
  local_378.TypedValue.JointNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.TypedValue.JointNames.ArrayNum = 0;
  local_378.TypedValue.JointNames.ArrayMax = 0;
  local_378.TypedValue.MorphTargetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.TypedValue.MorphTargetName.Data.ArrayNum = 0;
  local_378.TypedValue.MorphTargetName.Data.ArrayMax = 0;
  local_378.TypedValue.NaniteAssemblyDescription.bIsSet = false;
  FMeshDescription::Empty((FMeshDescription *)&local_378);
  local_f10.ArrayMax = 0;
  local_f10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f10.ArrayNum = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FFileHelper::LoadFileToArray(&local_f10,pwVar11,0);
  if (local_f10.ArrayNum < 1) {
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_6c8.bIsSet = false;
    TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue
              (*(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 8),
               &local_6c8);
    if (local_6c8.bIsSet != false) {
      if (local_6c8.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
        UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                  (&local_6c8.TypedValue.NaniteAssemblyDescription.TypedValue);
      }
      if (local_6c8.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c8.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_6c8.TypedValue.JointNames.AllocatorInstance.Data,
                 local_6c8.TypedValue.JointNames.ArrayNum);
      if (local_6c8.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_6c8.TypedValue.JointNames.AllocatorInstance.Data);
      }
      pTVar10 = &local_6c8;
LAB_14e692f2d:
      FMeshDescription::~FMeshDescription((FMeshDescription *)pTVar10);
    }
  }
  else {
    cVar2 = *(char *)((longlong)this + 0x28);
    if ((cVar2 == '\x01') || (cVar2 == '\x02')) {
      local_f28 = 0;
      FLargeMemoryReader::FLargeMemoryReader
                (&local_ee8,(uchar *)local_f10.AllocatorInstance.Data,local_f10.ArrayNum,None,
                 (FName)0x0);
      FMeshDescription::Serialize((FMeshDescription *)&local_378,(FArchive *)&local_ee8);
      puVar1 = *(uint **)local_ee8._padding_ + 1;
      if (*(uint **)(local_ee8._padding_ + 8) < puVar1) {
        local_f48[0] = 0;
        (**(code **)(local_ee8._padding_ + 0x188))(&local_ee8,local_f48,4);
        if (1 < local_f48[0]) {
          FArchiveState::SetError((FArchiveState *)&local_ee8);
        }
        uVar3 = local_f48[0];
        if (((byte)local_ee8._padding_ & 1) != 0) goto LAB_14e692d3e;
      }
      else {
        uVar3 = **(uint **)local_ee8._padding_;
        *(uint **)local_ee8._padding_ = puVar1;
LAB_14e692d3e:
        if (uVar3 != 0) {
          TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                    ((FArchive *)&local_ee8,&local_378.TypedValue.JointNames);
        }
      }
      this_01 = &local_ee8;
LAB_14e692d59:
      FLargeMemoryReader::~FLargeMemoryReader(this_01);
    }
    else if (cVar2 == '\x03') {
      local_f30 = 0;
      FLargeMemoryReader::FLargeMemoryReader
                (&local_e28,(uchar *)local_f10.AllocatorInstance.Data,local_f10.ArrayNum,None,
                 (FName)0x0);
      FMeshDescription::Serialize((FMeshDescription *)&local_378,(FArchive *)&local_e28);
      this_01 = &local_e28;
      goto LAB_14e692d59;
    }
    bVar6 = FStaticMeshOperations::ValidateAndFixData
                      ((FMeshDescription *)&local_378,(FString *)((longlong)this + 0x18));
    if (!bVar6) {
      pUVar7 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                         (*(UInterchangeTranslatorBase **)this);
      lVar4 = *(longlong *)(*(longlong *)this + 0x30);
      if (lVar4 == 0) {
        local_f20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f20.Data.ArrayNum = 0;
        local_f20.Data.ArrayMax = 0;
        ::FString::operator=((FString *)&pUVar7->_padding_,&local_f20);
        FVar9.Data = local_f20.Data.AllocatorInstance.Data;
      }
      else {
        local_f40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f40.Data.ArrayNum = *(int *)(lVar4 + 0x30);
        lVar12 = (longlong)local_f40.Data.ArrayNum;
        _Src = *(void **)(lVar4 + 0x28);
        if (local_f40.Data.ArrayNum == 0) {
          local_f40.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f40.Data.ArrayNum,0,(ForAnyElementType *)&local_f40,
                     local_f40.Data.ArrayNum,&local_f40.Data.ArrayMax);
          memcpy(local_f40.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
        }
        ::FString::operator=((FString *)&pUVar7->_padding_,&local_f40);
        FVar9.Data = local_f40.Data.AllocatorInstance.Data;
      }
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_ef8,L"UInterchangeFbxTranslator",
                          L"GetMeshPayloadData_ValidateMeshDescriptionFail",
                          L"Invalid mesh data (NAN) was found and fix to zero. Mesh render can be bad."
                         );
      FText::operator=(&pUVar7->Text,pFVar8);
      if (local_ef8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ef8.TextData.Reference + 0x10))();
      }
    }
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = *(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 8);
    UE::Interchange::FMeshPayloadData::FMeshPayloadData(&local_d68.TypedValue,&local_378.TypedValue)
    ;
    local_d68.bIsSet = true;
    TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue(this_00,&local_d68);
    if (local_d68.bIsSet != false) {
      if (local_d68.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
        UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                  (&local_d68.TypedValue.NaniteAssemblyDescription.TypedValue);
      }
      if (local_d68.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d68.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_d68.TypedValue.JointNames.AllocatorInstance.Data,
                 local_d68.TypedValue.JointNames.ArrayNum);
      if (local_d68.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_d68.TypedValue.JointNames.AllocatorInstance.Data);
      }
      pTVar10 = &local_d68;
      goto LAB_14e692f2d;
    }
  }
  if (local_f10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f10.AllocatorInstance.Data);
  }
  if (local_378.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
    UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
              (&local_378.TypedValue.NaniteAssemblyDescription.TypedValue);
  }
  if (local_378.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_378.TypedValue.JointNames.AllocatorInstance.Data,
             local_378.TypedValue.JointNames.ArrayNum);
  if (local_378.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.TypedValue.JointNames.AllocatorInstance.Data);
  }
  pTVar10 = &local_378;
LAB_14e692f91:
  FMeshDescription::~FMeshDescription((FMeshDescription *)pTVar10);
  return;
}

// operator() @ 14e693b00

void __thiscall
`UInterchangeFbxTranslator::GetMeshPayloadData'::__l7::<lambda_2>::operator()
          (void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  ETaskState local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_3b8;
  FString local_3a8;
  JsonResultParser local_398;
  FString local_388;
  TOptional<UE::Interchange::FMeshPayloadData> local_378;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId668,
               "UInterchangeFbxTranslator::GetStaticMeshPayloadData::Dispatcher->AddTaskDone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
               ,0x29c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId668);
  }
  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.Data.ArrayNum = 0;
  local_388.Data.ArrayMax = 0;
  local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b8.ArrayNum = 0;
  local_3b8.ArrayMax = 0;
  UE::Interchange::FInterchangeDispatcher::GetTaskState
            (*(FInterchangeDispatcher **)(*(longlong *)this + 0x60),param_1,local_res18,&local_388,
             &local_3b8);
  iVar2 = local_3b8.ArrayNum;
  uVar4 = (ulonglong)local_3b8.ArrayNum;
  pFVar7 = local_3b8.AllocatorInstance.Data + uVar4 * 0x10;
  FVar5.Data = local_3b8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar5.Data == pFVar7) break;
    UE::Interchange::Private::ApplyTranslatorMessage
              (*(UInterchangeFbxTranslator **)this,(FString *)FVar5.Data);
    uVar4 = local_3b8._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 0x10;
  }
  if (local_res18[0] == ProcessOk) {
    local_398.ResultFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.ResultFilename.Data.ArrayNum = 0;
    local_398.ResultFilename.Data.ArrayMax = 0;
    UE::Interchange::FJsonFetchPayloadCmd::JsonResultParser::FromJson(&local_398,&local_388);
    FVar5.Data = local_398.ResultFilename.Data.AllocatorInstance.Data;
    lVar6 = (longlong)local_398.ResultFilename.Data.ArrayNum;
    local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.Data.ArrayNum = local_398.ResultFilename.Data.ArrayNum;
    if (local_398.ResultFilename.Data.ArrayNum == 0) {
      local_3a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_398.ResultFilename.Data.ArrayNum,0,(ForAnyElementType *)&local_3a8,
                 local_398.ResultFilename.Data.ArrayNum,&local_3a8.Data.ArrayMax);
      memcpy(local_3a8.Data.AllocatorInstance.Data,FVar5.Data,lVar6 * 2);
    }
    GetMeshPayloadData'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x30),&local_3a8);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.ResultFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.ResultFilename.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((*(longlong *)((longlong)this + 8) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_378.bIsSet = false;
    TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue
              (*(TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> **)((longlong)this + 8),
               &local_378);
    if (local_378.bIsSet != false) {
      if (local_378.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
        UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                  (&local_378.TypedValue.NaniteAssemblyDescription.TypedValue);
      }
      if (local_378.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_378.TypedValue.JointNames.AllocatorInstance.Data,
                 local_378.TypedValue.JointNames.ArrayNum);
      if (local_378.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_378.TypedValue.JointNames.AllocatorInstance.Data);
      }
      FMeshDescription::~FMeshDescription((FMeshDescription *)&local_378);
    }
  }
  DestructItems<FString,int>((FString *)local_3b8.AllocatorInstance.Data,local_3b8.ArrayNum);
  if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.AllocatorInstance.Data);
  }
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14e693da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l18::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  FFutureState *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  TTuple<FString,FString> *pTVar8;
  TOptional<UE::Interchange::FAnimationPayloadData> *this_00;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  FAnimationPayloadQuery *this_01;
  bool bVar15;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2c8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c0;
  ETaskState local_2b0 [2];
  FString local_2a8;
  FString local_298;
  FString local_288;
  FAnimationPayloadData local_278;
  char local_1e0;
  TOptional<UE::Interchange::FAnimationPayloadData> local_1d8;
  TOptional<UE::Interchange::FAnimationPayloadData> local_138;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId843,
               "UInterchangeFbxTranslator::GetAnimationCurvePayloadData::Dispatcher->AddTaskDone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
               ,0x34b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId843);
  }
  uVar14 = 0;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  UE::Interchange::FInterchangeDispatcher::GetTaskState
            (*(FInterchangeDispatcher **)(*(longlong *)this + 0x60),param_1,local_2b0,&local_2a8,
             &local_2c0);
  iVar6 = local_2c0.ArrayNum;
  pFVar10 = local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayNum * 0x10;
  FVar13.Data = local_2c0.AllocatorInstance.Data;
  while( true ) {
    if (local_2c0.ArrayNum != iVar6) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2c8);
    }
    if (FVar13.Data == pFVar10) break;
    UE::Interchange::Private::ApplyTranslatorMessage
              (*(UInterchangeFbxTranslator **)this,(FString *)FVar13.Data);
    FVar13.Data = FVar13.Data + 0x10;
  }
  if (local_2b0[0] == ProcessOk) {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    UE::Interchange::FJsonFetchAnimationQueriesCmd::JsonAnimationQueriesResultParser::FromJson
              ((JsonAnimationQueriesResultParser *)&local_98,&local_2a8);
    if (*(int *)((longlong)this + 0x10) != 0) {
      do {
        plVar11 = *(longlong **)((longlong)this + 0x20);
        uVar12 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar12 < (int)plVar11[1]) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar11 = (longlong *)((longlong)(int)uVar12 * 0x10 + *plVar11);
        uVar5 = 0;
        if ((int)uVar12 < *(int *)((longlong)this + 0x10)) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (FAnimationPayloadQuery *)
                  ((longlong)(int)uVar12 * 0x50 + *(longlong *)((longlong)this + 8));
        pFVar7 = UE::Interchange::FAnimationPayloadQuery::GetHashString(this_01,&local_298);
        iVar1 = (pFVar7->Data).ArrayNum;
        iVar6 = iVar1 + -1;
        if (iVar1 == 0) {
          pwVar9 = L"";
          iVar6 = 0;
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
        iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>(&local_98,uVar5,pFVar7);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (iVar6 == -1) {
          if ((*plVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar11 = (longlong *)*plVar11;
          local_138.bIsSet = false;
          if (*plVar11 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*plVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar2 = (FFutureState *)*plVar11;
          if ((pFVar2->bComplete != (TAtomic<bool>)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsComplete()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0xcd,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(bool *)&pFVar2[2]._padding_ = local_138.bIsSet;
          if (local_138.bIsSet != false) {
            UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                      ((FAnimationPayloadData *)(pFVar2 + 1),&local_138.TypedValue);
          }
          FFutureState::MarkComplete(pFVar2);
          if (local_138.bIsSet != false) {
            this_00 = &local_138;
            goto LAB_14e6943fb;
          }
        }
        else {
          pFVar7 = UE::Interchange::FAnimationPayloadQuery::GetHashString(this_01,&local_288);
          pTVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   ::Find(&local_98,pFVar7);
          if ((pTVar8 == (TTuple<FString,FString> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          GetAnimationPayloadData'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),&local_1d8,this_01,
                     (FString *)&pTVar8->field_0x10);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if ((*plVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar11 = (longlong *)*plVar11;
          if (*plVar11 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((*plVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar2 = (FFutureState *)*plVar11;
          if ((pFVar2->bComplete != (TAtomic<bool>)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsComplete()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0xcd,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined1 *)&pFVar2[2]._padding_ = 0;
          *(bool *)&pFVar2[2]._padding_ = local_1d8.bIsSet;
          if (local_1d8.bIsSet != false) {
            UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                      ((FAnimationPayloadData *)(pFVar2 + 1),&local_1d8.TypedValue);
          }
          FFutureState::MarkComplete(pFVar2);
          if (local_1d8.bIsSet != false) {
            this_00 = &local_1d8;
LAB_14e6943fb:
            UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&this_00->TypedValue);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulonglong)(longlong)*(int *)((longlong)this + 0x10));
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  else if (*(int *)((longlong)this + 0x10) != 0) {
    do {
      plVar11 = *(longlong **)((longlong)this + 0x20);
      uVar12 = (uint)uVar14;
      uVar5 = 0;
      if ((int)uVar12 < (int)plVar11[1]) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar11 = (longlong *)(*plVar11 + (longlong)(int)uVar12 * 0x10);
      if ((*plVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar11 = (longlong *)*plVar11;
      local_1e0 = '\0';
      if (*plVar11 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*plVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (FFutureState *)*plVar11;
      if ((pFVar2->bComplete != (TAtomic<bool>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(char *)&pFVar2[2]._padding_ = local_1e0;
      if (local_1e0 != '\0') {
        UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                  ((FAnimationPayloadData *)(pFVar2 + 1),&local_278);
      }
      FFutureState::MarkComplete(pFVar2);
      if (local_1e0 != '\0') {
        UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_278);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulonglong)(longlong)*(int *)((longlong)this + 0x10));
  }
  DestructItems<FString,int>((FString *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
  if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14e694810

void __thiscall
`UInterchangeFbxTranslator::GetAnimationPayloadData'::__l22::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  ETaskState local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  JsonResultParser local_188;
  FString local_178;
  TOptional<UE::Interchange::FAnimationPayloadData> local_168;
  TOptional<UE::Interchange::FAnimationPayloadData> local_c8;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId901,
               "UInterchangeFbxTranslator::GetAnimationCurvePayloadData::Dispatcher->AddTaskDone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
               ,0x385);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId901);
  }
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  UE::Interchange::FInterchangeDispatcher::GetTaskState
            (*(FInterchangeDispatcher **)(*(longlong *)this + 0x60),param_1,local_res18,&local_178,
             &local_1a8);
  iVar3 = local_1a8.ArrayNum;
  uVar5 = (ulonglong)local_1a8.ArrayNum;
  pFVar8 = local_1a8.AllocatorInstance.Data + uVar5 * 0x10;
  FVar6.Data = local_1a8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar6.Data == pFVar8) break;
    UE::Interchange::Private::ApplyTranslatorMessage
              (*(UInterchangeFbxTranslator **)this,(FString *)FVar6.Data);
    uVar5 = local_1a8._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 0x10;
  }
  if (local_res18[0] == ProcessOk) {
    local_188.ResultFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ResultFilename.Data.ArrayNum = 0;
    local_188.ResultFilename.Data.ArrayMax = 0;
    UE::Interchange::FJsonFetchPayloadCmd::JsonResultParser::FromJson(&local_188,&local_178);
    FVar6.Data = local_188.ResultFilename.Data.AllocatorInstance.Data;
    lVar7 = (longlong)local_188.ResultFilename.Data.ArrayNum;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = local_188.ResultFilename.Data.ArrayNum;
    if (local_188.ResultFilename.Data.ArrayNum == 0) {
      local_198.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188.ResultFilename.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
                 local_188.ResultFilename.Data.ArrayNum,&local_198.Data.ArrayMax);
      memcpy(local_198.Data.AllocatorInstance.Data,FVar6.Data,lVar7 * 2);
    }
    GetAnimationPayloadData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x58),&local_c8,
               (FAnimationPayloadQuery *)((longlong)this + 8),&local_198);
    plVar1 = *(longlong **)((longlong)this + 0x60);
    if ((*plVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>::SetValue
              ((TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)*plVar1,&local_c8);
    if (local_c8.bIsSet != false) {
      UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_c8.TypedValue);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_188.ResultFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.ResultFilename.Data.AllocatorInstance.Data);
    }
  }
  else {
    plVar1 = *(longlong **)((longlong)this + 0x60);
    if ((*plVar1 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_168.bIsSet = false;
    TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>::SetValue
              ((TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)*plVar1,&local_168);
    if (local_168.bIsSet != false) {
      UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_168.TypedValue);
    }
  }
  DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanUpTemporaryFolder @ 14e698420

void __cdecl UInterchangeFbxTranslator::CleanUpTemporaryFolder(void)

{
  char cVar1;
  FPlatformFileManager *this;
  IPlatformFile *pIVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  this = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this);
  pFVar3 = FPaths::ProjectSavedDir();
  FPaths::ConvertRelativePathToFull(&local_38,pFVar3);
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2);
  if (cVar1 != '\0') {
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    local_10 = 0xf;
    local_28.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_18 = L"Interchange/Fbx";
    FPaths::CombineInternal(&local_48,&local_28,2);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2,FVar5.Data);
    if (cVar1 != '\0') {
      pIVar4 = IFileManager::Get();
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar5.Data = local_48.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,FVar5.Data,0,1);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateFetchAnimationBakeTransformPayloadFbxCommand @ 14e698d40

FString * __thiscall
UInterchangeFbxTranslator::CreateFetchAnimationBakeTransformPayloadFbxCommand
          (UInterchangeFbxTranslator *this,FString *__return_storage_ptr__,
          TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType FVar1;
  FString *pFVar2;
  FString local_88;
  FString local_78;
  FString local_68;
  FJsonFetchAnimationQueriesCmd local_58;
  
  pFVar2 = UE::Interchange::FAnimationPayloadQuery::ToJson(&local_68,param_1);
  ::FString::FString(&local_78,L"FBX");
  ::FString::FString(&local_88,L"AnimationQueries");
  FVar1.Data = local_78.Data.AllocatorInstance.Data;
  local_58._padding_ = (longlong)&___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
  local_58._padding_._0_1_ = 0;
  local_58._padding_ = 0;
  if (local_78.Data.ArrayNum == 0) {
    local_58._padding_._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_58._padding_,
               local_78.Data.ArrayNum,(int *)((longlong)&local_58._padding_ + 4));
    memcpy((void *)local_58._padding_,FVar1.Data,(longlong)local_78.Data.ArrayNum * 2);
  }
  FVar1.Data = local_88.Data.AllocatorInstance.Data;
  local_58._padding_ = 0;
  if (local_88.Data.ArrayNum == 0) {
    local_58._padding_._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_58._padding_,
               local_88.Data.ArrayNum,(int *)((longlong)&local_58._padding_ + 4));
    memcpy((void *)local_58._padding_,FVar1.Data,(longlong)local_88.Data.ArrayNum * 2);
  }
  local_58._padding_._0_1_ = 1;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_58._padding_ = (longlong)&___7FJsonFetchAnimationQueriesCmd_Interchange_UE__6B_;
  ::FString::FString(&local_58.QueriesJsonString,pFVar2);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  UE::Interchange::FJsonFetchAnimationQueriesCmd::ToJson(&local_58,__return_storage_ptr__);
  if (local_58.QueriesJsonString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.QueriesJsonString.Data.AllocatorInstance.Data);
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  return __return_storage_ptr__;
}

// CreateFetchMeshPayloadFbxCommand @ 14e698ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UInterchangeFbxTranslator::CreateFetchMeshPayloadFbxCommand
          (UInterchangeFbxTranslator *this,FString *__return_storage_ptr__,FString *param_1,
          TTransform<double> *param_2)

{
  ForAnyElementType _Src;
  undefined1 auStackY_118 [32];
  FString local_d8;
  undefined1 local_c8 [48];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  ::FString::FString(&local_d8,L"FBX");
  _Src.Data = local_d8.Data.AllocatorInstance.Data;
  local_c8._0_8_ = &___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
  local_c8[8] = 0;
  local_c8._16_8_ = (void *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_c8._28_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)(local_c8 + 0x10),
               local_d8.Data.ArrayNum,(int *)(local_c8 + 0x1c));
    memcpy((void *)local_c8._16_8_,_Src.Data,(longlong)local_d8.Data.ArrayNum * 2);
  }
  ::FString::FString((FString *)(local_c8 + 0x20),param_1);
  local_98 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_2->Rotation).XY.m128d_f64[1];
  local_88 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_2->Rotation).ZW.m128d_f64[1];
  local_78 = (param_2->Translation).XY.m128d_f64[0];
  dStack_70 = (param_2->Translation).XY.m128d_f64[1];
  local_68 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_2->Translation).ZW.m128d_f64[1];
  local_58 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_2->Scale3D).XY.m128d_f64[1];
  local_48 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).ZW.m128d_f64[1];
  local_c8[8] = 1;
  local_c8._0_8_ = &___7FJsonFetchMeshPayloadCmd_Interchange_UE__6B_;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  UE::Interchange::FJsonFetchMeshPayloadCmd::ToJson
            ((FJsonFetchMeshPayloadCmd *)local_c8,__return_storage_ptr__);
  if ((void *)local_c8._32_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._32_8_);
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  return __return_storage_ptr__;
}

// CreateFetchPayloadFbxCommand @ 14e699040

FString * __thiscall
UInterchangeFbxTranslator::CreateFetchPayloadFbxCommand
          (UInterchangeFbxTranslator *this,FString *__return_storage_ptr__,FString *param_1)

{
  ForAnyElementType _Src;
  FString local_48;
  FJsonFetchPayloadCmd local_38;
  
  ::FString::FString(&local_48,L"FBX");
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_38._padding_ = (longlong)&___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
  local_38._padding_._0_1_ = 0;
  local_38.TranslatorID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_38.TranslatorID.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_38.TranslatorID,
               local_48.Data.ArrayNum,&local_38.TranslatorID.Data.ArrayMax);
    memcpy(local_38.TranslatorID.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_48.Data.ArrayNum * 2);
  }
  ::FString::FString(&local_38.PayloadKey,param_1);
  local_38._padding_._0_1_ = 1;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Interchange::FJsonFetchPayloadCmd::ToJson(&local_38,__return_storage_ptr__);
  if (local_38.PayloadKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.PayloadKey.Data.AllocatorInstance.Data);
  }
  if (local_38.TranslatorID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TranslatorID.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateLoadFbxFileCommand @ 14e699150

FString * __thiscall
UInterchangeFbxTranslator::CreateLoadFbxFileCommand
          (UInterchangeFbxTranslator *this,FString *__return_storage_ptr__,FString *param_1,
          bool param_2,bool param_3,bool param_4,bool param_5)

{
  ForAnyElementType _Src;
  FString local_58;
  FJsonLoadSourceCmd local_48;
  undefined1 local_18;
  bool local_17;
  bool local_16;
  bool local_15;
  
  ::FString::FString(&local_58,UE::Interchange::FJsonFBXLoadSourceCmd::TaskName);
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_48._padding_ = (longlong)&___7FJsonLoadSourceCmd_Interchange_UE__6B_;
  local_48._padding_._0_1_ = 0;
  local_48.TranslatorID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_48.TranslatorID.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_48.TranslatorID,
               local_58.Data.ArrayNum,&local_48.TranslatorID.Data.ArrayMax);
    memcpy(local_48.TranslatorID.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_58.Data.ArrayNum * 2);
  }
  ::FString::FString(&local_48.SourceFilename,param_1);
  local_48._padding_ = (longlong)&___7FJsonFBXLoadSourceCmd_Interchange_UE__6B_;
  local_17 = param_3;
  local_16 = param_4;
  local_15 = param_5;
  local_48._padding_._0_1_ = 1;
  local_18 = param_2;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Interchange::FJsonLoadSourceCmd::ToJson(&local_48,__return_storage_ptr__);
  if (local_48.SourceFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SourceFilename.Data.AllocatorInstance.Data);
  }
  if (local_48.TranslatorID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.TranslatorID.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAnimationPayloadData @ 14e69b840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeFbxTranslator::GetAnimationPayloadData
          (UInterchangeFbxTranslator *this,
          TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement FVar2;
  TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *pTVar3;
  FInterchangeDispatcher *pFVar4;
  longlong lVar5;
  FAnimationPayloadData *pFVar6;
  code *pcVar7;
  TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  FEvent *pFVar18;
  FString *pFVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  FAnimationPayloadQuery *pFVar23;
  TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *pTVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 local_328 [8];
  ForAnyElementType local_320;
  undefined8 local_318;
  ForAnyElementType local_310;
  undefined8 local_308;
  TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> local_300;
  undefined1 local_2f0 [8];
  undefined8 local_2e8;
  TObjectPtr<UInterchangeFbxTranslatorSettings> *local_2e0;
  TObjectPtr<UInterchangeFbxTranslatorSettings> *local_2d8;
  ForAnyElementType local_2d0;
  int local_2c8;
  int local_2c4 [3];
  ForAnyElementType *local_2b8;
  FJsonFetchAnimationQueriesCmd local_2a8;
  undefined1 local_268 [8];
  FDelegateAllocation local_260;
  undefined1 local_250 [8];
  FDelegateAllocation local_248;
  FJsonFetchPayloadCmd local_238;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FString local_178;
  TObjectPtr<UInterchangeFbxTranslatorSettings> *local_168;
  FAnimationPayloadQuery local_160;
  FScriptContainerElement *local_108;
  FAnimationPayloadData local_f8;
  char local_60;
  
  uVar28 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                (*pcVar7)();
      return pTVar15;
    }
    FVar2 = (param_1->AllocatorInstance).Data[0x20];
    local_2e0 = &this[-1].CacheFbxTranslatorSettings;
    if (((char)this->_padding_ != '\0') && (this->_padding_ != 0)) {
      uVar13 = param_1->ArrayNum;
      local_320.Data = (FScriptContainerElement *)0x0;
      local_318 = 0;
      local_310.Data = (FScriptContainerElement *)0x0;
      local_308 = 0;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar13,&local_320,0,(int *)((longlong)&local_318 + 4));
      }
      pTVar9 = _UNK_150651568;
      pTVar8 = ___xmm_00000000000000000000000000000010;
      uVar22 = (ulonglong)(uint)param_1->ArrayNum;
      if (param_1->ArrayNum != 0) {
        do {
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
          pTVar16 = ::operator_new(0x28);
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            local_300.Object = pTVar8;
            local_300.SharedReferenceCount.ReferenceController = pTVar9;
          }
          else {
            pTVar16->SharedReferenceCount = (atomic<int>)0x1;
            pTVar16->WeakReferenceCount = (atomic<int>)0x1;
            pTVar16->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__TPromise_U__TOptional_UFAnimationPayloadData_Interchange_UE_______00_SharedPointerInternals__6B_
            ;
            pTVar17 = ::operator_new(0x120);
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pTVar17 = (TReferenceControllerBase<1> *)0x0;
              pTVar16[1]._padding_ = 0x10;
              pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
            }
            else {
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_V__TFutureState_U__TOptional_UFAnimationPayloadData_Interchange_UE_______00_SharedPointerInternals__6B_
              ;
              pTVar17[1]._padding_ = 0;
              pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[2]._padding_ = 0;
              pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[3]._padding_ = 0;
              pTVar17[3].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[3].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[4]._padding_ = 0;
              pTVar17[4].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[4].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[5]._padding_ = 0;
              pTVar17[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[5].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[6]._padding_ = 0;
              pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
              pTVar17[7]._padding_ = 0;
              pTVar17[7].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[7].WeakReferenceCount = (atomic<int>)0x0;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar17 + 1),4000);
              pTVar17[4]._padding_ = 0;
              pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
              pFVar18 = FGenericPlatformProcess::GetSynchEventFromPool(true);
              pTVar17[7]._padding_ = (longlong)pFVar18;
              *(undefined1 *)&pTVar17[7].SharedReferenceCount = 0;
              if ((pTVar17 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>
                           *)(*pcVar7)();
                return pTVar15;
              }
              pTVar16[1]._padding_ = (longlong)(pTVar17 + 1);
              *(TReferenceControllerBase<1> **)&pTVar16[1].SharedReferenceCount = pTVar17;
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar17);
            *(undefined1 *)&pTVar16[2]._padding_ = 0;
            if (((TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)(pTVar16 + 1) ==
                 (TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_>
                         *)(*pcVar7)();
              return pTVar15;
            }
            LOCK();
            pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
            UNLOCK();
            pTVar17 = pTVar16;
            local_300.Object =
                 (TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)(pTVar16 + 1);
            local_300.SharedReferenceCount.ReferenceController = pTVar16;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
          if ((local_300.Object ==
               (TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          pTVar10 = local_300.Object;
          if (((local_300.Object)->bFutureRetrieved != false) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bFutureRetrieved",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                  ,0x24d,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          pTVar3 = (pTVar10->State).Object;
          pTVar10->bFutureRetrieved = true;
          if ((pTVar3 == (TFutureState<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("State.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                  ,0x283,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          local_2f0 = (undefined1  [8])(pTVar10->State).Object;
          local_2e8 = (pTVar10->State).SharedReferenceCount.ReferenceController;
          if (local_2e8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_2e8->SharedReferenceCount =
                 (atomic<int>)((int)local_2e8->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((local_320.Data <=
                (TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)local_2f0) &&
              ((FScriptContainerElement *)local_2f0 <
               local_320.Data + (longlong)local_318._4_4_ * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          iVar12 = (int)local_318;
          if ((int)local_318 == local_318._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_320,(int *)((longlong)&local_318 + 4));
          }
          local_318 = CONCAT44(local_318._4_4_,iVar12 + 1);
          *(undefined1 (*) [8])(local_320.Data + (longlong)iVar12 * 0x10) = local_2f0;
          *(TReferenceControllerBase<1> **)(local_320.Data + (longlong)iVar12 * 0x10 + 8) =
               local_2e8;
          local_2e8 = (TReferenceControllerBase<1> *)0x0;
          local_2f0 = (undefined1  [8])0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (((local_310.Data <= &local_300) &&
              (&local_300 <
               (TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> *)
               (local_310.Data + (longlong)local_308._4_4_ * 0x10))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          iVar12 = (int)local_308;
          if ((int)local_308 == local_308._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_310,(int *)((longlong)&local_308 + 4));
          }
          local_308 = CONCAT44(local_308._4_4_,iVar12 + 1);
          *(TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_> **)
           &local_310.Data[(longlong)iVar12 * 0x10].field_0x0 = local_300.Object;
          *(TReferenceControllerBase<1> **)(local_310.Data + (longlong)iVar12 * 0x10 + 8) =
               local_300.SharedReferenceCount.ReferenceController;
          if (local_300.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_300.SharedReferenceCount.ReferenceController);
          uVar22 = (ulonglong)param_1->ArrayNum;
          uVar28 = uVar28 + 1;
        } while (uVar28 < uVar22);
      }
      uVar28 = 0;
      if (FVar2 == (FScriptContainerElement)0x4) {
        pFVar19 = UE::Interchange::FAnimationPayloadQuery::ToJson(&local_178,param_1);
        ::FString::FString(&local_1f8,L"FBX");
        ::FString::FString(&local_208,L"AnimationQueries");
        FVar26.Data = local_1f8.Data.AllocatorInstance.Data;
        local_2a8._padding_ = (longlong)&___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
        local_2a8._padding_._0_1_ = 0;
        local_2a8._padding_ = 0;
        local_2a8._padding_._0_4_ = local_1f8.Data.ArrayNum;
        if (local_1f8.Data.ArrayNum == 0) {
          local_2a8._padding_._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)&local_2a8._padding_,
                     local_1f8.Data.ArrayNum,(int *)((longlong)&local_2a8._padding_ + 4));
          memcpy((void *)local_2a8._padding_,FVar26.Data,(longlong)local_1f8.Data.ArrayNum * 2);
        }
        FVar26.Data = local_208.Data.AllocatorInstance.Data;
        local_2a8._padding_ = 0;
        local_2a8._padding_._0_4_ = local_208.Data.ArrayNum;
        if (local_208.Data.ArrayNum == 0) {
          local_2a8._padding_._4_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)&local_2a8._padding_,
                     local_208.Data.ArrayNum,(int *)((longlong)&local_2a8._padding_ + 4));
          memcpy((void *)local_2a8._padding_,FVar26.Data,(longlong)local_208.Data.ArrayNum * 2);
        }
        local_2a8._padding_._0_1_ = 1;
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        local_2a8._padding_ = (longlong)&___7FJsonFetchAnimationQueriesCmd_Interchange_UE__6B_;
        ::FString::FString(&local_2a8.QueriesJsonString,pFVar19);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        UE::Interchange::FJsonFetchAnimationQueriesCmd::ToJson(&local_2a8,&local_1d8);
        if (local_2a8.QueriesJsonString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.QueriesJsonString.Data.AllocatorInstance.Data);
        }
        if ((void *)local_2a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_2a8._padding_);
        }
        if ((void *)local_2a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_2a8._padding_);
        }
        iVar12 = param_1->ArrayNum;
        pFVar23 = (FAnimationPayloadQuery *)(param_1->AllocatorInstance).Data;
        local_2d8 = local_2e0;
        pFVar4 = (FInterchangeDispatcher *)this->_padding_;
        local_2d0.Data = (FScriptContainerElement *)0x0;
        local_2c8 = iVar12;
        if (iVar12 == 0) {
          local_2c4[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar12,0,&local_2d0,iVar12,local_2c4);
          ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
                    (local_2d0.Data,pFVar23,iVar12);
        }
        local_2b8 = &local_310;
        local_268 = (undefined1  [8])0x0;
        local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_260.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
                   (FWriteAccessScope *)&local_1b8);
        local_1a0 = &local_260;
        puVar20 = UE::Core::Private::DelegateAllocate(0x40,&local_260);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar21 = FDelegateHandle::GenerateNewID();
          iVar12 = local_2c8;
          FVar26.Data = local_2d0.Data;
          puVar20[2] = uVar21;
          pFVar1 = (ForAnyElementType *)(puVar20 + 4);
          *puVar20 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`18'::<lambda_2>_>
                      ::_vftable_;
          puVar20[3] = local_2d8;
          pFVar1->Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar20 + 5) = local_2c8;
          if (local_2c8 == 0) {
            *(int *)((longlong)puVar20 + 0x2c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,local_2c8,0,pFVar1,local_2c8,(int *)((longlong)puVar20 + 0x2c));
            ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
                      (pFVar1->Data,(FAnimationPayloadQuery *)FVar26.Data,iVar12);
          }
          puVar20[7] = local_2b8;
        }
        if (local_1b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
        }
        UE::Interchange::FInterchangeDispatcher::AddTask
                  (pFVar4,&local_1d8,
                   (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_268);
        DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
                  ((FAnimationPayloadQuery *)local_2d0.Data,local_2c8);
        if ((FAnimationPayloadQuery *)local_2d0.Data != (FAnimationPayloadQuery *)0x0) {
          FMemory::Free(local_2d0.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
      else if ((int)uVar22 != 0) {
        do {
          uVar27 = (uint)uVar28;
          uVar13 = 0;
          if ((int)uVar27 < (int)uVar22) {
            uVar13 = ~uVar27 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          pFVar23 = (FAnimationPayloadQuery *)
                    ((param_1->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x50);
          uVar13 = 0;
          if ((int)uVar27 < (int)local_308) {
            uVar13 = ~uVar27 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          pFVar25 = local_310.Data + (longlong)(int)uVar27 * 0x10;
          ::FString::FString(&local_1e8,L"FBX");
          FVar26.Data = local_1e8.Data.AllocatorInstance.Data;
          local_238._padding_._0_1_ = 0;
          local_238._padding_ = (longlong)&___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
          local_238.TranslatorID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar12 = local_1e8.Data.ArrayNum;
          local_238.TranslatorID.Data.ArrayNum = iVar12;
          if (iVar12 == 0) {
            local_238.TranslatorID.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,0,(ForAnyElementType *)&local_238.TranslatorID,iVar12,
                       &local_238.TranslatorID.Data.ArrayMax);
            memcpy(local_238.TranslatorID.Data.AllocatorInstance.Data,FVar26.Data,
                   (longlong)iVar12 * 2);
          }
          ::FString::FString(&local_238.PayloadKey,&(pFVar23->PayloadKey).UniqueId);
          local_238._padding_._0_1_ = 1;
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          UE::Interchange::FJsonFetchPayloadCmd::ToJson(&local_238,&local_1c8);
          if (local_238.PayloadKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.PayloadKey.Data.AllocatorInstance.Data);
          }
          if (local_238.TranslatorID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_238.TranslatorID.Data.AllocatorInstance.Data);
          }
          pFVar4 = (FInterchangeDispatcher *)this->_padding_;
          local_168 = local_2e0;
          UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery(&local_160,pFVar23);
          local_250 = (undefined1  [8])0x0;
          local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_248.DelegateSize = 0;
          local_108 = pFVar25;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                     (FWriteAccessScope *)&local_198);
          local_180 = &local_248;
          puVar20 = UE::Core::Private::DelegateAllocate(0x80,&local_248);
          if (puVar20 != (undefined8 *)0x0) {
            *puVar20 = &
                       ___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar21 = FDelegateHandle::GenerateNewID();
            puVar20[2] = uVar21;
            *puVar20 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetAnimationPayloadData'::`22'::<lambda_3>_>
                        ::_vftable_;
            puVar20[3] = local_168;
            UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
                      ((FAnimationPayloadQuery *)(puVar20 + 4),&local_160);
            puVar20[0xf] = local_108;
          }
          if (local_198.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
          }
          UE::Interchange::FInterchangeDispatcher::AddTask
                    (pFVar4,&local_1c8,
                     (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_250);
          if ((local_160.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_160.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_160.HashStringCache.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_160.PayloadKey.UniqueId.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
          }
          if (local_160.SceneNodeUniqueID.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.SceneNodeUniqueID.Data.AllocatorInstance.Data);
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          uVar28 = uVar28 + 1;
          uVar22 = (ulonglong)param_1->ArrayNum;
        } while (uVar28 < uVar22);
      }
      iVar12 = (int)local_318;
      pTVar24 = (TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)
                (local_320.Data + (longlong)(int)local_318 * 0x10);
      FVar26.Data = local_320.Data;
      while( true ) {
        if ((int)local_318 != iVar12) {
          local_328[0] = 0;
          `TCheckedPointerIterator<TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_328);
        }
        if ((TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)FVar26.Data == pTVar24)
        break;
        if (*(longlong *)FVar26.Data == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("State.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x155,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          if ((*(longlong *)FVar26.Data == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
        }
        lVar5 = *(longlong *)FVar26.Data;
        while (*(char *)(lVar5 + 0x68) == '\0') {
          (**(code **)(**(longlong **)(lVar5 + 0x60) + 0x20))
                    (*(longlong **)(lVar5 + 0x60),0xffffffff,0);
        }
        local_60 = *(char *)(lVar5 + 0x108);
        if ((local_60 != '\0') &&
           (UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                      (&local_f8,(FAnimationPayloadData *)(lVar5 + 0x70)), local_60 != '\0')) {
          pFVar6 = (FAnimationPayloadData *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar6 <= &local_f8) &&
             ((&local_f8 < pFVar6 + __return_storage_ptr__->ArrayMax &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)))) {
            pcVar7 = (code *)swi(3);
            pTVar15 = (TArray<UE::Interchange::FAnimationPayloadData,TSizedDefaultAllocator<32>_> *)
                      (*pcVar7)();
            return pTVar15;
          }
          iVar14 = __return_storage_ptr__->ArrayNum;
          if (iVar14 == __return_storage_ptr__->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x898,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar14 + 1;
          UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
                    ((FAnimationPayloadData *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar14 * 0x98),
                     &local_f8);
          if (local_60 != '\0') {
            UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(&local_f8);
          }
        }
        FVar26.Data = FVar26.Data + 0x10;
      }
      DestructItems<TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1>,int>
                ((TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> *)
                 local_310.Data,(int)local_308);
      if ((TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> *)
          local_310.Data !=
          (TSharedPtr<TPromise<TOptional<UE::Interchange::FAnimationPayloadData>_>,1> *)0x0) {
        FMemory::Free(local_310.Data);
      }
      DestructItems<TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_>,int>
                ((TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)local_320.Data,
                 (int)local_318);
      if ((TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)local_320.Data !=
          (TFuture<TOptional<UE::Interchange::FAnimationPayloadData>_> *)0x0) {
        FMemory::Free(local_320.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetMeshPayloadData @ 14e69e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeFbxTranslator::GetMeshPayloadData
          (UInterchangeFbxTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,TTransform<double> *param_2)

{
  ForAnyElementType _Src;
  int iVar1;
  undefined1 auStackY_148 [32];
  FAttributeKey local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  ForAnyElementType local_a8;
  long64 lStack_a0;
  long64 local_98;
  ulong64 local_90;
  undefined8 local_88;
  _RTL_CRITICAL_SECTION local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_cc = 0x80;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0xffffffff;
  local_88._0_4_ = 0.1;
  local_88._4_4_ = 0;
  InitializeCriticalSectionAndSpinCount(&local_80,4000);
  _Src = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance;
  local_108.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Key.Data.ArrayMax = 0;
  iVar1 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_108.Key.Data.ArrayNum = iVar1;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_108,iVar1,&local_108.Key.Data.ArrayMax);
    memcpy(local_108.Key.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
  }
  UE::Interchange::FAttributeStorage::RegisterAttribute<UE::Math::TTransform<double>,void>
            ((FAttributeStorage *)local_f8,&local_108,param_2,None);
  if (local_108.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Key.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x10))(this,__return_storage_ptr__,param_1,local_f8);
  DeleteCriticalSection(&local_80);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,0,local_f8._8_4_);
  iVar1 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

// GetMeshPayloadData @ 14e69e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<UE::Interchange::FMeshPayloadData> * __thiscall
UInterchangeFbxTranslator::GetMeshPayloadData
          (UInterchangeFbxTranslator *this,
          TOptional<UE::Interchange::FMeshPayloadData> *__return_storage_ptr__,
          FInterchangeMeshPayLoadKey *param_1,FAttributeStorage *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FInterchangeDispatcher *this_00;
  TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *pTVar3;
  FString *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *this_01;
  FInterchangeMeshPayLoadKey *pFVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FEvent *pFVar11;
  TOptional<UE::Interchange::FMeshPayloadData> *pTVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  TReferenceControllerBase<1> *pTVar15;
  atomic<int> *paVar16;
  undefined1 auStackY_5e8 [32];
  FAttributeKey local_5a8;
  bool *local_598;
  TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *local_590;
  TReferenceControllerBase<1> *local_588;
  FString local_580;
  EInterchangeMeshPayLoadType local_570;
  int local_56c;
  FInterchangeMeshPayLoadKey *local_568;
  bool *local_560;
  TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *local_558;
  TReferenceControllerBase<1> *local_550;
  FString local_548;
  EInterchangeMeshPayLoadType local_538;
  int local_534;
  bool *local_530;
  TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *local_528;
  TReferenceControllerBase<1> *local_520;
  FString local_518;
  EInterchangeMeshPayLoadType local_508;
  int local_504;
  undefined1 local_500 [8];
  FDelegateAllocation local_4f8;
  FScriptContainerElement *local_4e8;
  FString local_4e0;
  FString local_4d0;
  FDestructionSentinel local_4c0;
  FDelegateAllocation *local_4a8;
  TOptional<UE::Interchange::FMeshPayloadData> local_498;
  undefined1 local_148 [48];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  _Src.Data = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.AllocatorInstance.
              Data;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  local_5a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.Key.Data.ArrayMax = 0;
  iVar8 = UE::Interchange::MeshPayload::Attributes::MeshGlobalTransform.Data.ArrayNum;
  local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_b8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_5a8.Key.Data.ArrayNum = iVar8;
  local_568 = param_1;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)&local_5a8,iVar8,&local_5a8.Key.Data.ArrayMax);
    memcpy(local_5a8.Key.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
  }
  UE::Interchange::FAttributeStorage::GetAttribute<UE::Math::TTransform<double>,void>
            (param_2,&local_5a8,&local_b8);
  if (local_5a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Key.Data.AllocatorInstance.Data);
  }
  pTVar9 = ::operator_new(0x28);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_590 = (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)&DAT_00000010;
    paVar16 = (atomic<int> *)&DAT_00000008;
    local_588 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TPromise_U__TOptional_UFMeshPayloadData_Interchange_UE_______00_SharedPointerInternals__6B_
    ;
    pTVar10 = ::operator_new(0x3d0);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9[1]._padding_ = 0x10;
      pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TFutureState_U__TOptional_UFMeshPayloadData_Interchange_UE_______00_SharedPointerInternals__6B_
      ;
      pTVar10[1]._padding_ = 0;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[2]._padding_ = 0;
      pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[3]._padding_ = 0;
      pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[4]._padding_ = 0;
      pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[5]._padding_ = 0;
      pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[6]._padding_ = 0;
      pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[7]._padding_ = 0;
      pTVar10[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[7].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar10 + 1),4000);
      pTVar10[4]._padding_ = 0;
      pTVar10[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[6].WeakReferenceCount = (atomic<int>)0x0;
      pFVar11 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pTVar10[7]._padding_ = (longlong)pFVar11;
      *(undefined1 *)&pTVar10[7].SharedReferenceCount = 0;
      if (pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pTVar9[1]._padding_ = (longlong)(pTVar10 + 1);
      *(TReferenceControllerBase<1> **)&pTVar9[1].SharedReferenceCount = pTVar10;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pTVar15 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    *(undefined1 *)&pTVar9[2]._padding_ = 0;
    if ((TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)(pTVar9 + 1) ==
        (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
        return pTVar12;
      }
    }
    paVar16 = &pTVar9->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
    local_590 = (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)(pTVar9 + 1);
    local_588 = pTVar9;
  }
  pFVar6 = local_568;
  pTVar15 = local_588;
  this_01 = local_590;
  local_598 = &this[-1].bUseWorkerImport;
  ::FString::FString(&local_580,&local_568->UniqueId);
  local_570 = pFVar6->Type;
  local_56c = pFVar6->FrameNumber;
  if ((char)this->_padding_ != '\0') {
    if (this->_padding_ == 0) {
      __return_storage_ptr__->bIsSet = false;
      goto LAB_14e69f15d;
    }
    ::FString::FString(&local_4e0,L"FBX");
    local_148._0_8_ = &___7FJsonFetchPayloadCmd_Interchange_UE__6B_;
    local_4e8 = local_4e0.Data.AllocatorInstance.Data;
    local_148[8] = 0;
    local_148._16_8_ = (void *)0x0;
    if (local_4e0.Data.ArrayNum == 0) {
      local_148._28_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_4e0.Data.ArrayNum,0,(ForAnyElementType *)(local_148 + 0x10),
                 local_4e0.Data.ArrayNum,(int *)(local_148 + 0x1c));
      memcpy((void *)local_148._16_8_,local_4e8,(longlong)local_4e0.Data.ArrayNum * 2);
    }
    pFVar6 = local_568;
    ::FString::FString((FString *)(local_148 + 0x20),&local_568->UniqueId);
    local_118 = local_b8.Rotation.XY.m128d_f64[0];
    dStack_110 = local_b8.Rotation.XY.m128d_f64[1];
    local_108 = local_b8.Rotation.ZW.m128d_f64[0];
    dStack_100 = local_b8.Rotation.ZW.m128d_f64[1];
    local_f8 = local_b8.Translation.XY.m128d_f64[0];
    dStack_f0 = local_b8.Translation.XY.m128d_f64[1];
    local_e8 = local_b8.Translation.ZW.m128d_f64[0];
    dStack_e0 = local_b8.Translation.ZW.m128d_f64[1];
    local_d8 = local_b8.Scale3D.XY.m128d_f64[0];
    dStack_d0 = local_b8.Scale3D.XY.m128d_f64[1];
    local_c8 = local_b8.Scale3D.ZW.m128d_f64[0];
    dStack_c0 = local_b8.Scale3D.ZW.m128d_f64[1];
    local_148[8] = 1;
    local_148._0_8_ = &___7FJsonFetchMeshPayloadCmd_Interchange_UE__6B_;
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
    UE::Interchange::FJsonFetchMeshPayloadCmd::ToJson
              ((FJsonFetchMeshPayloadCmd *)local_148,&local_4d0);
    if ((void *)local_148._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_148._32_8_);
    }
    if ((void *)local_148._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_148._16_8_);
    }
    this_00 = (FInterchangeDispatcher *)this->_padding_;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_560 = &this[-1].bUseWorkerImport;
    local_558 = this_01;
    local_550 = pTVar15;
    ::FString::FString(&local_548,&pFVar6->UniqueId);
    local_538 = pFVar6->Type;
    local_534 = pFVar6->FrameNumber;
    local_530 = local_598;
    local_528 = local_590;
    local_520 = local_588;
    local_588 = (TReferenceControllerBase<1> *)0x0;
    local_590 = (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0;
    ::FString::FString(&local_518,&local_580);
    local_508 = local_570;
    local_504 = local_56c;
    local_500 = (undefined1  [8])0x0;
    local_4f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_500,
               (FWriteAccessScope *)&local_4c0);
    local_4a8 = &local_4f8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x78,&local_4f8);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UInterchangeFbxTranslator::GetMeshPayloadData'::`7'::<lambda_2>_>
                  ::_vftable_;
      puVar13[3] = local_560;
      puVar13[4] = local_558;
      puVar13[5] = local_550;
      local_550 = (TReferenceControllerBase<1> *)0x0;
      local_558 = (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0;
      ::FString::FString((FString *)(puVar13 + 6),&local_548);
      *(EInterchangeMeshPayLoadType *)(puVar13 + 8) = local_538;
      *(int *)((longlong)puVar13 + 0x44) = local_534;
      puVar13[9] = local_530;
      puVar13[10] = local_528;
      puVar13[0xb] = local_520;
      local_520 = (TReferenceControllerBase<1> *)0x0;
      local_528 = (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0;
      ::FString::FString((FString *)(puVar13 + 0xc),&local_518);
      *(EInterchangeMeshPayLoadType *)(puVar13 + 0xe) = local_508;
      *(int *)((longlong)puVar13 + 0x74) = local_504;
    }
    if (local_4c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
    }
    iVar8 = UE::Interchange::FInterchangeDispatcher::AddTask
                      (this_00,&local_4d0,
                       (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_500);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_520);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_550);
    if (iVar8 == -1) {
      if (this_01 == (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
          return pTVar12;
        }
      }
      local_498.bIsSet = false;
      TPromise<TOptional<UE::Interchange::FMeshPayloadData>_>::SetValue(this_01,&local_498);
      if (local_498.bIsSet != false) {
        if (local_498.TypedValue.NaniteAssemblyDescription.bIsSet != false) {
          UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                    (&local_498.TypedValue.NaniteAssemblyDescription.TypedValue);
        }
        if (local_498.TypedValue.MorphTargetName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.TypedValue.MorphTargetName.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>
                  ((FString *)local_498.TypedValue.JointNames.AllocatorInstance.Data,
                   local_498.TypedValue.JointNames.ArrayNum);
        if (local_498.TypedValue.JointNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_498.TypedValue.JointNames.AllocatorInstance.Data);
        }
        FMeshDescription::~FMeshDescription((FMeshDescription *)&local_498);
      }
    }
    if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
    }
  }
  if (this_01 == (TPromise<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
      return pTVar12;
    }
  }
  if (this_01->bFutureRetrieved != false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pTVar3 = (this_01->State).Object;
  this_01->bFutureRetrieved = true;
  if (pTVar3 == (TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pTVar9 = (this_01->State).SharedReferenceCount.ReferenceController;
  pTVar3 = (this_01->State).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 == (TFutureState<TOptional<UE::Interchange::FMeshPayloadData>_> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
      return pTVar12;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TOptional<UE::Interchange::FMeshPayloadData> *)(*pcVar5)();
      return pTVar12;
    }
  }
  while (pTVar3->field_0x68 == '\0') {
    (**(code **)(**(longlong **)&pTVar3->field_0x60 + 0x20))
              (*(longlong **)&pTVar3->field_0x60,0xffffffff,0);
  }
  __return_storage_ptr__->bIsSet = false;
  bVar7 = (bool)(pTVar3->Result).Pad[0x340];
  __return_storage_ptr__->bIsSet = bVar7;
  if (bVar7 != false) {
    FMeshDescription::FMeshDescription
              ((FMeshDescription *)__return_storage_ptr__,(FMeshDescription *)&pTVar3->Result);
    pTVar2 = &(__return_storage_ptr__->TypedValue).JointNames;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = &(__return_storage_ptr__->TypedValue).JointNames.ArrayMax;
    iVar8 = *(int *)((pTVar3->Result).Pad + 0x2c8);
    pFVar4 = *(FString **)((pTVar3->Result).Pad + 0x2c0);
    (__return_storage_ptr__->TypedValue).JointNames.ArrayNum = iVar8;
    if (iVar8 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,pFVar4,iVar8);
    }
    (__return_storage_ptr__->TypedValue).VertexOffset = *(int *)((pTVar3->Result).Pad + 0x2d0);
    ::FString::FString(&(__return_storage_ptr__->TypedValue).MorphTargetName,
                       (FString *)((pTVar3->Result).Pad + 0x2d8));
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.bIsSet = false;
    bVar7 = (bool)(pTVar3->Result).Pad[0x338];
    (__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.bIsSet = bVar7;
    if (bVar7 != false) {
      UE::Interchange::FNaniteAssemblyDescription::FNaniteAssemblyDescription
                (&(__return_storage_ptr__->TypedValue).NaniteAssemblyDescription.TypedValue,
                 (FNaniteAssemblyDescription *)((pTVar3->Result).Pad + 0x2e8));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_14e69f15d:
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e6a0600

UClass * __cdecl UInterchangeFbxTranslator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslator",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton,
               StaticRegisterNativesUInterchangeFbxTranslator,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeFbxTranslator>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslator>,local_res8,
               UInterchangeTranslatorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslator.InnerSingleton;
}

// GetSettings @ 14e6a1250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeTranslatorSettings * __thiscall
UInterchangeFbxTranslator::GetSettings(UInterchangeFbxTranslator *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UInterchangeTranslatorSettings *pUVar8;
  UInterchangeFbxTranslatorSettings *pUVar9;
  FUObjectItem *this_00;
  
  if ((this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr !=
      (UInterchangeFbxTranslatorSettings *)0x0) {
    return (UInterchangeTranslatorSettings *)(this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
  }
  pUVar6 = GetTransientPackage();
  pUVar7 = UInterchangeFbxTranslatorSettings::StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar2 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = UInterchangeFbxTranslatorSettings::StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UInterchangeTranslatorSettings *)(*pcVar4)();
      return pUVar8;
    }
  }
  pUVar7 = UInterchangeFbxTranslatorSettings::StaticClass();
  pUVar9 = (UInterchangeFbxTranslatorSettings *)
           DuplicateObject_Internal(pUVar7,pUVar2,(UObject *)pUVar6,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UInterchangeFbxTranslatorSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr = pUVar9;
  UInterchangeTranslatorSettings::LoadSettings((UInterchangeTranslatorSettings *)pUVar9);
  pUVar9 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
  (**(code **)(pUVar9->_padding_ + 0xf8))(pUVar9,0);
  UObjectBase::AtomicallyClearFlags
            ((UObjectBase *)(this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr,
             RF_ArchetypeObject);
  UObjectBase::AtomicallySetFlags
            ((UObjectBase *)(this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr,RF_Standalone);
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,
                       *(int *)((longlong)
                                &((this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr)->_padding_
                               + 4));
  FUObjectItem::ClearRootFlags(this_00,Async);
  return (UInterchangeTranslatorSettings *)(this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
}

// GetSupportedAssetTypes @ 14e6a13d0

EInterchangeTranslatorAssetType __thiscall
UInterchangeFbxTranslator::GetSupportedAssetTypes(UInterchangeFbxTranslator *this)

{
  return Animations|Meshes|Materials;
}

// GetSupportedFormats @ 14e6a1670

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeFbxTranslator::GetSupportedFormats
          (UInterchangeFbxTranslator *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTexturePayloadData @ 14e6a1eb0

TOptional<UE::Interchange::FImportImage> * __thiscall
UInterchangeFbxTranslator::GetTexturePayloadData
          (UInterchangeFbxTranslator *this,
          TOptional<UE::Interchange::FImportImage> *__return_storage_ptr__,FString *param_1,
          TOptional<FString> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  TOptional<UE::Interchange::FImportImage> *pTVar6;
  TObjectPtr<UInterchangeTranslatorBase>_u_0 local_28 [2];
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  local_18.Object = (FAnalyticsHelper *)this[-1].MeshTriangleCount;
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this[-1].MeshVertexCount;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Interchange::Private::FScopedTranslator::FScopedTranslator
            ((FScopedTranslator *)&local_28[0].ObjectPtr,param_1,
             (UInterchangeResultsContainer *)this[-1].MeshPayloadTime,&local_18);
  bVar3 = UE::Interchange::Private::FScopedTranslator::IsValid
                    ((FScopedTranslator *)&local_28[0].ObjectPtr);
  if ((bVar3) && (local_28[0].DebugPtr != (UInterchangeTranslatorBase *)0x0)) {
    pUVar4 = Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress
                       ((UObjectBaseUtility *)local_28[0].DebugPtr,pUVar4);
    if (plVar5 != (longlong *)0x0) {
      if (param_1 != (FString *)param_2) {
        pFVar1 = (param_2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::FString::FString((FString *)param_2,param_1);
        if (*(int *)((longlong)&param_2->field0_0x0 + 0xc) == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar2)();
            return pTVar6;
          }
        }
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,__return_storage_ptr__,param_1,param_2);
      goto LAB_14e6a1fdf;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4205677812134183458>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                     ,0x222,"TextureTranslator");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TOptional<UE::Interchange::FImportImage> *)(*pcVar2)();
    return pTVar6;
  }
  __return_storage_ptr__->bIsSet = false;
LAB_14e6a1fdf:
  UE::Interchange::Private::FScopedTranslator::~FScopedTranslator
            ((FScopedTranslator *)&local_28[0].ObjectPtr);
  return __return_storage_ptr__;
}

// GetTranslatorType @ 14e6a2840

EInterchangeTranslatorType __thiscall
UInterchangeFbxTranslator::GetTranslatorType(UInterchangeFbxTranslator *this)

{
  EInterchangeTranslatorType EVar1;
  
  EVar1 = Assets;
  if (GInterchangeEnableFBXLevelImport) {
    EVar1 = Scenes;
  }
  return EVar1;
}

// ImportFinish @ 14e6a33e0

void __thiscall UInterchangeFbxTranslator::ImportFinish(UInterchangeFbxTranslator *this)

{
  FInterchangeDispatcher *pFVar1;
  
  pFVar1 = (this->Dispatcher).Ptr;
  if (pFVar1 != (FInterchangeDispatcher *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e6a33ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))();
    return;
  }
  return;
}

// IsThreadSafe @ 14e6a3830

bool __thiscall UInterchangeFbxTranslator::IsThreadSafe(UInterchangeFbxTranslator *this)

{
  UInterchangeFbxTranslatorSettings *pUVar1;
  
  if ((this->bUseWorkerImport == false) &&
     ((pUVar1 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr,
      pUVar1 == (UInterchangeFbxTranslatorSettings *)0x0 || (pUVar1->bUseUfbxParser == false)))) {
    return false;
  }
  return true;
}

// PreferGroupingBoneAnimationQueriesTogether @ 14e6a4170

bool __thiscall
UInterchangeFbxTranslator::PreferGroupingBoneAnimationQueriesTogether
          (UInterchangeFbxTranslator *this)

{
  return true;
}

// ReleaseSource @ 14e6a70d0

void __thiscall UInterchangeFbxTranslator::ReleaseSource(UInterchangeFbxTranslator *this)

{
  FInterchangeDispatcher *pFVar1;
  code *pcVar2;
  UInterchangeFbxTranslatorSettings *this_00;
  bool bVar3;
  IFileManager *pIVar4;
  
  pFVar1 = (this->Dispatcher).Ptr;
  if (pFVar1 != (FInterchangeDispatcher *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 8);
    bVar3 = IsInGameThread();
    (*pcVar2)(pFVar1,!bVar3);
  }
  if (this->bUseWorkerImport == false) {
    pIVar4 = IFileManager::Get();
    if ((this->ResultFolder).Data.ArrayNum == 0) {
      (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,L"",0,1);
    }
    else {
      (**(code **)((longlong)*pIVar4 + 0x68))
                (pIVar4,(this->ResultFolder).Data.AllocatorInstance.Data,0,1);
    }
  }
  ::FString::Empty(&this->ResultFolder);
  this_00 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
  if (this_00 != (UInterchangeFbxTranslatorSettings *)0x0) {
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_Standalone);
    (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr =
         (UInterchangeFbxTranslatorSettings *)0x0;
  }
  return;
}

// SetSettings @ 14e6a7180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangeFbxTranslator::SetSettings
          (UInterchangeFbxTranslator *this,UInterchangeTranslatorSettings *param_1)

{
  undefined1 uVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UInterchangeFbxTranslatorSettings *pUVar6;
  
  pUVar6 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
  if (pUVar6 != (UInterchangeFbxTranslatorSettings *)0x0) {
    UObjectBase::AtomicallyClearFlags((UObjectBase *)pUVar6,RF_Standalone);
    pFVar3 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)
                                 &((this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr)->
                                  _padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar3,Async);
    (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr =
         (UInterchangeFbxTranslatorSettings *)0x0;
  }
  if (param_1 != (UInterchangeTranslatorSettings *)0x0) {
    pUVar4 = UInterchangeFbxTranslatorSettings::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      pUVar5 = GetTransientPackage();
      pUVar4 = UInterchangeFbxTranslatorSettings::StaticClass();
      pUVar6 = (UInterchangeFbxTranslatorSettings *)
               DuplicateObject_Internal(pUVar4,(UObject *)param_1,(UObject *)pUVar5,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UInterchangeFbxTranslatorSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr = pUVar6;
      pFVar3 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar6->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar3,Async);
      UObjectBase::AtomicallySetFlags
                ((UObjectBase *)(this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr,RF_Standalone
                );
      uVar1 = param_1[1].field_0x5;
      pUVar4 = UInterchangeFbxTranslatorSettings::StaticClass();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x5 = uVar1;
    }
  }
  return;
}

// StaticRegisterNativesUInterchangeFbxTranslator @ 14e6a81d0

void __cdecl UInterchangeFbxTranslator::StaticRegisterNativesUInterchangeFbxTranslator(void)

{
  return;
}

// Translate @ 14e6a8400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UInterchangeFbxTranslator::Translate
          (UInterchangeFbxTranslator *this,UInterchangeBaseNodeContainer *param_1)

{
  longlong *plVar1;
  FString *pFVar2;
  undefined4 uVar3;
  void *pvVar4;
  UInterchangeSourceData *this_00;
  UInterchangeFbxTranslatorSettings *pUVar5;
  FInterchangeDispatcher *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  UInterchangeResultError_Generic *pUVar13;
  FText *pFVar14;
  UInterchangeSourceNode *this_01;
  UInterchangeResult *pUVar15;
  ulonglong uVar16;
  FString *pFVar17;
  ForAnyElementType *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 uVar21;
  ForAnyElementType FVar22;
  char cVar23;
  bool bVar24;
  bool local_res8 [8];
  UInterchangeBaseNodeContainer *local_res10;
  EFBXTranslatorAnalyticsResult local_res18 [8];
  FScriptContainerElement *local_res20;
  EFBXTranslatorAnalyticsResult local_1e8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  FString local_1d0;
  FString local_1c0;
  ETaskState local_1b0 [2];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  FString local_198;
  JsonResultParser local_188;
  FString local_178;
  FJsonLoadSourceCmd local_168;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  EFBXTranslatorAnalyticsResult local_135;
  ForAnyElementType local_130;
  undefined8 local_128;
  FString local_120;
  LARGE_INTEGER local_110;
  FString local_108;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_f8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_e8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_d8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_c8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_b8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_a8;
  TSharedPtr<UE::Interchange::FAnalyticsHelper,1> local_98;
  LARGE_INTEGER local_88;
  FText local_80;
  longlong *local_70 [2];
  FString local_60 [2];
  
  local_res8[0] = false;
  local_res8[1] = false;
  local_res8[2] = false;
  local_res8[3] = false;
  bVar24 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId276,"UInterchangeFbxTranslator::Translate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
               ,0x114);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId276);
  }
  if ((FAnalyticsHelper *)this->_padding_ != (FAnalyticsHelper *)0x0) {
    UE::Interchange::FAnalyticsHelper::ClearAnalyticsEventData
              ((FAnalyticsHelper *)this->_padding_,&UE::Interchange::Private::FBXAnalyticsIdentifier
              );
  }
  if ((this->_padding_ & 0x30) != 0) {
    if (((this->_padding_ & 0x30) != 0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4205677812134183201>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                           ,0x121,"!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject)"), bVar9
       )) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pUVar13 = UInterchangeTranslatorBase::AddMessage<UInterchangeResultError_Generic>
                        ((UInterchangeTranslatorBase *)this);
    lVar19 = this->_padding_;
    if (lVar19 == 0) {
      local_128 = 0;
      local_130.Data = (FScriptContainerElement *)0x0;
      pFVar18 = &local_130;
      bVar8 = false;
      bVar9 = true;
    }
    else {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      iVar11 = *(int *)(lVar19 + 0x30);
      pvVar4 = *(void **)(lVar19 + 0x28);
      local_1a0 = iVar11;
      if (iVar11 == 0) {
        pFVar18 = &local_1a8;
        iStack_19c = 0;
        bVar8 = true;
        bVar9 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,&local_1a8,iVar11,&iStack_19c);
        memcpy(local_1a8.Data,pvVar4,(longlong)iVar11 * 2);
        pFVar18 = &local_1a8;
        bVar8 = true;
        bVar9 = false;
      }
    }
    plVar1 = &pUVar13->_padding_;
    if ((ForAnyElementType *)plVar1 != pFVar18) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)pFVar18->Data;
      pFVar18->Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pUVar13->_padding_ = *(undefined4 *)&pFVar18[1].Data;
      uVar3 = *(undefined4 *)((longlong)&pFVar18[1].Data + 4);
      pFVar18[1].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar13->_padding_ + 4) = uVar3;
    }
    if ((bVar9) && (local_130.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_130.Data);
    }
    if ((bVar8) && (local_1a8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1a8.Data);
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_80,L"UInterchangeFbxTranslator",L"Translate_DoNotUseClassDefault",
                         L"Class default should not be use has an active translator.");
    FText::operator=(&pUVar13->Text,pFVar14);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    local_f8.Object = (FAnalyticsHelper *)this->_padding_;
    bVar9 = this->bUseWorkerImport;
    local_f8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8[0] = true;
    UE::Interchange::Private::AddAnalytics(local_res8,&local_f8,bVar9,Unspecified);
    bVar9 = false;
    goto LAB_14e6a8e4c;
  }
  this_00 = (UInterchangeSourceData *)this->_padding_;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_struct_TOptional<FMD5Hash>___cdecl_UInterchangeSourceData::GetFileContentHash(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId40,"UInterchangeSourceData::GetFileContentHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeSourceData.h"
               ,0x28);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_struct_TOptional<FMD5Hash>___cdecl_UInterchangeSourceData::GetFileContentHash(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId40);
  }
  if ((this_00->FileContentHashCache).bIsSet == false) {
    UInterchangeSourceData::ComputeFileContentHashCache(this_00);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = *(int *)(this->_padding_ + 0x30);
  lVar19 = (longlong)local_1d0.Data.ArrayNum;
  pvVar4 = *(void **)(this->_padding_ + 0x28);
  if (local_1d0.Data.ArrayNum == 0) {
    local_1d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1d0.Data.ArrayNum,0,(ForAnyElementType *)&local_1d0,local_1d0.Data.ArrayNum
               ,&local_1d0.Data.ArrayMax);
    memcpy(local_1d0.Data.AllocatorInstance.Data,pvVar4,lVar19 * 2);
  }
  bVar9 = FPaths::FileExists(&local_1d0);
  if (bVar9) {
    (**(code **)(this->_padding_ + 0x2f0))(this);
    if (((this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr ==
         (UInterchangeFbxTranslatorSettings *)0x0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4205677812134183219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Fbx\\InterchangeFbxTranslator.cpp"
                           ,0x133,"CacheFbxTranslatorSettings"), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pUVar5 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
    if (pUVar5 == (UInterchangeFbxTranslatorSettings *)0x0) {
      uVar21 = 0;
      uVar10 = 1;
      local_res8[0] = true;
      local_res18[0] = Successful;
      local_1e8[0] = Successful;
    }
    else {
      uVar10 = pUVar5->bConvertScene;
      uVar21 = pUVar5->bForceFrontXAxis;
      local_res8[0] = pUVar5->bConvertSceneUnit;
      local_res18[0] = pUVar5->bKeepFbxNamespace;
      local_1e8[0] = pUVar5->bUseUfbxParser;
      this_01 = UInterchangeSourceNode::FindOrCreateUniqueInstance(local_res10);
      pUVar5 = (this->CacheFbxTranslatorSettings).field0_0x0.DebugPtr;
      if (pUVar5->bConvertScene == false) {
        UInterchangeSourceNode::SetCustomSkeletalMeshFrontAxis(this_01,'\x02');
      }
      else {
        UInterchangeSourceNode::SetCustomSkeletalMeshFrontAxis
                  (this_01,'\x02' - (pUVar5->bForceFrontXAxis != false));
      }
    }
    QueryPerformanceCounter(&local_110);
    bVar9 = this->bUseWorkerImport;
    this->StartTime = (ulong64)local_110;
    uVar16 = (ulonglong)local_res20 >> 8;
    local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffffffffff00);
    if (bVar9 == false) {
LAB_14e6a8d82:
      QueryPerformanceCounter(&local_88);
      pFVar17 = FPaths::GetCleanFilename(local_60,&local_1d0);
      pFVar2 = &this->FileName;
      if (pFVar2 != pFVar17) {
        pFVar20 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar20);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->FileName).Data.ArrayNum = (pFVar17->Data).ArrayNum;
        (this->FileName).Data.ArrayMax = (pFVar17->Data).ArrayMax;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if ((char)local_res20 == '\0') {
        local_98.Object = (FAnalyticsHelper *)this->_padding_;
        bVar9 = this->bUseWorkerImport;
        local_98.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)this->_padding_;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e8[3] = 0;
        UE::Interchange::Private::AddAnalytics
                  (local_1e8 + 3,&local_98,bVar9,(local_1e8[0] != Successful) + FBX_SDK);
      }
      bVar9 = true;
    }
    else if ((this->Dispatcher).Ptr == (FInterchangeDispatcher *)0x0) {
      local_d8.Object = (FAnalyticsHelper *)this->_padding_;
      local_d8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)this->_padding_;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res20 = (FScriptContainerElement *)CONCAT71((int7)uVar16,4);
      UE::Interchange::Private::AddAnalytics
                ((EFBXTranslatorAnalyticsResult *)&local_res20,&local_d8,bVar9,Unspecified);
      bVar9 = false;
    }
    else {
      ::FString::FString(&local_120,UE::Interchange::FJsonFBXLoadSourceCmd::TaskName);
      FVar22.Data = local_120.Data.AllocatorInstance.Data;
      local_168._padding_._0_1_ = 0;
      local_168._padding_ = (longlong)&___7FJsonLoadSourceCmd_Interchange_UE__6B_;
      local_168.TranslatorID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_120.Data.ArrayNum == 0) {
        local_168.TranslatorID.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_120.Data.ArrayNum,0,(ForAnyElementType *)&local_168.TranslatorID,
                   local_120.Data.ArrayNum,&local_168.TranslatorID.Data.ArrayMax);
        memcpy(local_168.TranslatorID.Data.AllocatorInstance.Data,FVar22.Data,
               (longlong)local_120.Data.ArrayNum * 2);
      }
      lVar19 = (longlong)local_1d0.Data.ArrayNum;
      local_168.SourceFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res20 = local_1d0.Data.AllocatorInstance.Data;
      local_168.SourceFilename.Data.ArrayNum = local_1d0.Data.ArrayNum;
      if (local_1d0.Data.ArrayNum == 0) {
        local_168.SourceFilename.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d0.Data.ArrayNum,0,(ForAnyElementType *)&local_168.SourceFilename,
                   local_1d0.Data.ArrayNum,&local_168.SourceFilename.Data.ArrayMax);
        memcpy(local_168.SourceFilename.Data.AllocatorInstance.Data,local_res20,lVar19 * 2);
      }
      local_168._padding_._0_1_ = 1;
      local_168._padding_ = (longlong)&___7FJsonFBXLoadSourceCmd_Interchange_UE__6B_;
      local_136 = local_res8[0];
      local_135 = local_res18[0];
      local_138 = uVar10;
      local_137 = uVar21;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      UE::Interchange::FJsonLoadSourceCmd::ToJson(&local_168,&local_108);
      if (local_168.SourceFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.SourceFilename.Data.AllocatorInstance.Data);
      }
      if (local_168.TranslatorID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.TranslatorID.Data.AllocatorInstance.Data);
      }
      iVar11 = UE::Interchange::FInterchangeDispatcher::AddTask((this->Dispatcher).Ptr,&local_108);
      UE::Interchange::FInterchangeDispatcher::WaitAllTaskToCompleteExecution
                ((this->Dispatcher).Ptr);
      pFVar6 = (this->Dispatcher).Ptr;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.Data.ArrayNum = (pFVar6->InterchangeWorkerFatalError).Data.ArrayNum;
      lVar19 = (longlong)local_1c0.Data.ArrayNum;
      pFVar20 = (pFVar6->InterchangeWorkerFatalError).Data.AllocatorInstance.Data;
      if (local_1c0.Data.ArrayNum == 0) {
        local_1c0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)&local_1c0,
                   local_1c0.Data.ArrayNum,&local_1c0.Data.ArrayMax);
        memcpy(local_1c0.Data.AllocatorInstance.Data,pFVar20,lVar19 * 2);
      }
      if (1 < local_1c0.Data.ArrayNum) {
        pUVar15 = UInterchangeResult::FromJson(&local_1c0);
        UInterchangeTranslatorBase::AddMessage((UInterchangeTranslatorBase *)this,pUVar15);
        local_c8.Object = (FAnalyticsHelper *)this->_padding_;
        bVar9 = this->bUseWorkerImport;
        local_c8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)this->_padding_;
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e8[1] = 5;
        UE::Interchange::Private::AddAnalytics(local_1e8 + 1,&local_c8,bVar9,Unspecified);
      }
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      UE::Interchange::FInterchangeDispatcher::GetTaskState
                ((this->Dispatcher).Ptr,iVar11,local_1b0,&local_178,&local_1e0);
      iVar11 = local_1e0.ArrayNum;
      uVar16 = (ulonglong)local_1e0.ArrayNum;
      pFVar20 = local_1e0.AllocatorInstance.Data + uVar16 * 0x10;
      cVar23 = '\0';
      FVar22.Data = local_1e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar16 != iVar11) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1e8 + 4);
        }
        if (FVar22.Data == pFVar20) break;
        pUVar15 = UInterchangeResult::FromJson((FString *)FVar22.Data);
        if (pUVar15 != (UInterchangeResult *)0x0) {
          if ((GIsAutomationTesting == false) ||
             (iVar12 = (**(code **)(pUVar15->_padding_ + 0x2b0))(pUVar15), iVar12 != 1)) {
            UInterchangeTranslatorBase::AddMessage((UInterchangeTranslatorBase *)this,pUVar15);
          }
          else if (3 < (byte)LogInterchangeImport._0_1_) {
            pFVar14 = (FText *)(**(code **)(pUVar15->_padding_ + 0x2b8))(pUVar15,local_70);
            FText::ToString(pFVar14);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
            if (local_70[0] != (longlong *)0x0) {
              (**(code **)(*local_70[0] + 0x10))();
            }
          }
          if ((cVar23 == '\0') &&
             (iVar12 = (**(code **)(pUVar15->_padding_ + 0x2b0))(pUVar15), iVar12 == 2)) {
            local_b8.Object = (FAnalyticsHelper *)this->_padding_;
            bVar9 = this->bUseWorkerImport;
            local_b8.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)this->_padding_;
            if (local_b8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_1e8[2] = 3;
            UE::Interchange::Private::AddAnalytics(local_1e8 + 2,&local_b8,bVar9,Unspecified);
            cVar23 = '\x01';
          }
        }
        uVar16 = local_1e0._8_8_ & 0xffffffff;
        FVar22.Data = FVar22.Data + 0x10;
      }
      local_res20 = (FScriptContainerElement *)CONCAT71(local_res20._1_7_,cVar23);
      if (local_1b0[0] == ProcessOk) {
        local_188.ResultFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ResultFilename.Data.ArrayNum = 0;
        local_188.ResultFilename.Data.ArrayMax = 0;
        UE::Interchange::FJsonLoadSourceCmd::JsonResultParser::FromJson(&local_188,&local_178);
        FVar22.Data = local_188.ResultFilename.Data.AllocatorInstance.Data;
        lVar19 = (longlong)local_188.ResultFilename.Data.ArrayNum;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = local_188.ResultFilename.Data.ArrayNum;
        if (local_188.ResultFilename.Data.ArrayNum == 0) {
          local_198.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.ResultFilename.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
                     local_188.ResultFilename.Data.ArrayNum,&local_198.Data.ArrayMax);
          memcpy(local_198.Data.AllocatorInstance.Data,FVar22.Data,lVar19 * 2);
        }
        UInterchangeBaseNodeContainer::LoadFromFile(local_res10,&local_198);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_188.ResultFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_188.ResultFilename.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
        if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        goto LAB_14e6a8d82;
      }
      local_a8.Object = (FAnalyticsHelper *)this->_padding_;
      bVar9 = this->bUseWorkerImport;
      local_a8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)this->_padding_;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1e8[0] = InterchangeWorkerFailed;
      UE::Interchange::Private::AddAnalytics(local_1e8,&local_a8,bVar9,Unspecified);
      DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      bVar9 = false;
    }
  }
  else {
    local_e8.Object = (FAnalyticsHelper *)this->_padding_;
    bVar9 = this->bUseWorkerImport;
    local_e8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res18[0] = InputFileNotFound;
    UE::Interchange::Private::AddAnalytics(local_res18,&local_e8,bVar9,Unspecified);
    bVar9 = false;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
LAB_14e6a8e4c:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar9;
}

// _getUObject @ 14e6aacb0

UObject * __thiscall UInterchangeFbxTranslator::_getUObject(UInterchangeFbxTranslator *this)

{
  return (UObject *)&this[-1].ResultFolder;
}

// _getUObject`adjustor{8}' @ 14e6aacbc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeFbxTranslator::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeFbxTranslator::_getUObject_adjustor_8__(UInterchangeFbxTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeFbxTranslator *)&this[-1].MeshVertexCount);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e6aaccc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UInterchangeFbxTranslator::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UInterchangeFbxTranslator::_getUObject_adjustor_16__(UInterchangeFbxTranslator *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UInterchangeFbxTranslator *)&this[-1].MeshTriangleCount);
  return (UObject *)pUVar1;
}

