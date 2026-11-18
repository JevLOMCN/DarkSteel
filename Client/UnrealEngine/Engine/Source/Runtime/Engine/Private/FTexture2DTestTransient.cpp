// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1488707b0

EAutomationTestFlags __thiscall
Texture2DTest::FTexture2DTestTransient::GetTestFlags(FTexture2DTestTransient *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1488707c0

bool __thiscall Texture2DTest::FTexture2DTestTransient::IsStressTest(FTexture2DTestTransient *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1488707d0

uint __thiscall
Texture2DTest::FTexture2DTestTransient::GetRequiredDeviceNum(FTexture2DTestTransient *this)

{
  return 1;
}

// GetTestSourceFileName @ 1488707e0

FString * __thiscall
Texture2DTest::FTexture2DTestTransient::GetTestSourceFileName
          (FTexture2DTestTransient *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Texture2DTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 148870810

int __thiscall
Texture2DTest::FTexture2DTestTransient::GetTestSourceFileLine(FTexture2DTestTransient *this)

{
  return 0x12;
}

// GetTests @ 148870820

/* WARNING: Removing unreachable block (ram,0x00014887090d) */
/* WARNING: Removing unreachable block (ram,0x0001488709d8) */

void __thiscall
Texture2DTest::FTexture2DTestTransient::GetTests
          (FTexture2DTestTransient *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Texture2D.CreateTransient");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 148870a00

bool __thiscall
Texture2DTest::FTexture2DTestTransient::RunTest(FTexture2DTestTransient *this,FString *param_1)

{
  FString *pFVar1;
  UTexture2D *pUVar2;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  pFVar1 = ::FString::FString((FString *)&local_18,
                              L"Negative size specified for UTexture2D::CreateTransient()");
  FAutomationTestBase::AddExpectedError((FAutomationTestBase *)this,pFVar1,Contains,3,true);
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar2 = UTexture2D::CreateTransient(0,0,PF_B8G8R8A8,(FName)0x0,&local_18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Creating a transient texture with a zero length dimension should fail!",
             pUVar2 == (UTexture2D *)0x0);
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar2 = UTexture2D::CreateTransient(0,0x20,PF_B8G8R8A8,(FName)0x0,&local_18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Creating a transient texture with a zero length dimension should fail!",
             pUVar2 == (UTexture2D *)0x0);
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar2 = UTexture2D::CreateTransient(0x20,0,PF_B8G8R8A8,(FName)0x0,&local_18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Creating a transient texture with a zero length dimension should fail!",
             pUVar2 == (UTexture2D *)0x0);
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar2 = UTexture2D::CreateTransient(0x20,0x20,PF_B8G8R8A8,(FName)0x0,&local_18);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Failed to create a 32*32 transient texture!",
             pUVar2 != (UTexture2D *)0x0);
  return true;
}

// GetBeautifiedTestName @ 148870b50

FString * __thiscall
Texture2DTest::FTexture2DTestTransient::GetBeautifiedTestName
          (FTexture2DTestTransient *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Texture2D.CreateTransient");
  return __return_storage_ptr__;
}

